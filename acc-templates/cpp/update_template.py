#!/usr/bin/env python
# -*- coding: utf-8 -*-
import argparse
import shutil
import sys
from hashlib import sha256
from pathlib import Path

parser = argparse.ArgumentParser()
parser.add_argument("target")
parser.add_argument("-o", "--oldfile", required=True)
parser.add_argument("-n", "--newfile", required=True)
args = parser.parse_args()

old_tmpl = Path(args.oldfile)
if not old_tmpl.exists() or not old_tmpl.is_file():
    sys.exit("oldfile not found")

new_tmpl = Path(args.newfile)
if not new_tmpl.exists() or not new_tmpl.is_file():
    sys.exit("newfile not found")
tmpl_name = new_tmpl.name

dst_dir = Path(args.target)
if not dst_dir.exists() or not dst_dir.is_dir():
    sys.exit("target not found")

with old_tmpl.open("rb") as f:
    old_hash = sha256(f.read()).hexdigest()

with new_tmpl.open("rb") as f:
    new_hash = sha256(f.read()).hexdigest()

print(f"oldfile: {old_hash}")
print(f"newfile: {new_hash}")

for ifp in dst_dir.glob("**/main.cpp"):
    with open(ifp, "rb") as f:
        curr_hash = sha256(f.read()).hexdigest()

    if curr_hash == old_hash:
        print(f"Update: {ifp}")
        shutil.copyfile(new_tmpl, ifp)
    else:
        print(f"Skip: {ifp}")

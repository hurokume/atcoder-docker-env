FROM ubuntu:22.04
ENV DEBIAN_FRONTEND=noninteractive

RUN set -eux; \
  apt-get update; \
  apt-get install -y --no-install-recommends \
  ca-certificates \
  netbase \
  tzdata \
  locales \
  git \
  curl \
  wget \
  build-essential \
  gdb \
  libboost-dev \
  python3 \
  pipx \
  nodejs \
  npm \
  gosu \
  ; \
  rm -rf /var/lib/apt/lists/*

RUN mkdir -p /atcoder

# atcoder-cli
RUN set -eux; \
  npm install -g atcoder-cli

# online-judge-tools
ENV PIPX_HOME=/opt/pipx
ENV PIPX_BIN_DIR=/usr/local/bin
RUN set -eux; \
  pipx install online-judge-tools; \
  command -v oj; \
  oj --version

RUN set -eux; \
  acc config oj-path "$(command -v oj)"; \
  acc config default_workspace "/atcoder/problems"; \
  acc config default_task_choice all; \
  acc config default_template "/atcoder/acc-templates";

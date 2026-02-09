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

ENV HOME=/atcoder
ENV ACC_CONFIG_DIR=/atcoder/.config/atcoder-cli-nodejs

RUN set -eux; \
  mkdir -p /atcoder/.config; \
  HOME=/atcoder XDG_CONFIG_HOME=/atcoder/.config \
  acc config oj-path "$(command -v oj)"; \
  HOME=/atcoder XDG_CONFIG_HOME=/atcoder/.config \
  acc config default-workspace "/atcoder/problems"; \
  HOME=/atcoder XDG_CONFIG_HOME=/atcoder/.config \
  acc config default-task-choice all; \
  HOME=/atcoder XDG_CONFIG_HOME=/atcoder/.config \
  acc config default-template "/atcoder/acc-templates/cpp"

RUN set -eux; \
  git clone https://github.com/atcoder/ac-library /opt/ac-library

ENV CPLUS_INCLUDE_PATH=/opt/ac-library
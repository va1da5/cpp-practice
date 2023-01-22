FROM fedora:38

RUN dnf install -y curl wget git make cmake gcc-c++ gdb clang-tools-extra


// valuate.cpp — part of trade-helper-rbx.

#include "tradehelperrbx/valuate.h"

#include <cstdio>

namespace tradehelperrbx {

Valuate::Valuate(const std::string& config_path)
    : config_path_(config_path) {}

void Valuate::configure(const std::string& key, const std::string& value) {
    if (key == "verbose") verbose_ = (value == "true");
}

bool Valuate::run() {
    if (verbose_) std::fprintf(stderr, "[trade-helper-rbx] valuate: run\n");
    // core logic lives here
    return true;
}

}  // namespace tradehelperrbx

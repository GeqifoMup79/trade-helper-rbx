// history.cpp — part of trade-helper-rbx.

#include "tradehelperrbx/history.h"

#include <cstdio>

namespace tradehelperrbx {

History::History(const std::string& config_path)
    : config_path_(config_path) {}

void History::configure(const std::string& key, const std::string& value) {
    if (key == "verbose") verbose_ = (value == "true");
}

bool History::run() {
    if (verbose_) std::fprintf(stderr, "[trade-helper-rbx] history: run\n");
    // core logic lives here
    return true;
}

}  // namespace tradehelperrbx

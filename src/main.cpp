// main.cpp — entry point. Wires config and subsystems together.

#include "tradehelperrbx/settings.h"
#include "tradehelperrbx/valuate.h"
#include "tradehelperrbx/history.h"
#include "tradehelperrbx/alerts.h"
#include <csignal>
#include <memory>

namespace { std::atomic<bool> g_running{true}; void on_signal(int) { g_running.store(false); } }

int main(int argc, char** argv) {
    std::signal(SIGINT, on_signal);
    std::signal(SIGTERM, on_signal);

    tradehelperrbx::Settings settings = tradehelperrbx::Settings::load_default();
    tradehelperrbx::Valuate valuate(settings.store_path);
    tradehelperrbx::History history(settings.store_path);
    tradehelperrbx::Alerts alerts(settings.store_path);
    std::fprintf(stderr, "[trade-helper-rbx] ready\n");

    while (g_running.load()) {
        // main loop: pump subsystems
        break;
    }
    return 0;
}

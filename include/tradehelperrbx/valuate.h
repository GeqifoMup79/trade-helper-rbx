// valuate — part of trade-helper-rbx.

#pragma once

#include <string>
#include <vector>

namespace tradehelperrbx {

class Valuate {
public:
    explicit Valuate(const std::string& config_path);

    void configure(const std::string& key, const std::string& value);
    bool run();
    bool verbose() const { return verbose_; }

private:
    std::string config_path_;
    bool verbose_ = false;
};

}  // namespace tradehelperrbx

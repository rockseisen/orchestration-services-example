#pragma once

#include <cstdint>
#include <iostream>

class Mode_Control {
public:
    Mode_Control();

    int doStuff(int x);

private:
    std::int64_t money_;
};

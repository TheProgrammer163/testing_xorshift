#pragma once

#include <cstdint>

class xorshift32 {
    private:
        uint32_t seed = 1;
    public:
        void setSeed(uint32_t seedValue);
        uint32_t random();
        uint32_t randomInRange(uint32_t minValue, uint32_t maxValue);
};
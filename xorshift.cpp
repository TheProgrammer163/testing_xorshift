
#include "xorshift.h"


void xorshift32::setSeed(uint32_t seedValue) {
    this->seed = seedValue;
}

uint32_t xorshift32::random() {
    // XOR-ing and bitshifting
    // setting the current seed to the new seed
    this->seed ^= this->seed >> 12; // a
    this->seed ^= this->seed << 25; // b
    this->seed ^= this->seed >> 27; // c
    return this->seed;
}

uint32_t xorshift32::randomInRange(uint32_t minValue, uint32_t maxValue) {
    uint32_t result = 1;
    if (minValue < maxValue)
    {
        do
        {
            // we substract 1 so that 0 becomes a possible result
            // we use a while loop and throw away any result that is outside the range
            // instead of using the modulo operator because we want to avoid the modulo bias,
            // at least with this function
            result = this->random() - 1;
        } while (!((result >= minValue) && (result < maxValue)));
    }


    return result;
}

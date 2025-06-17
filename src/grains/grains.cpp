#include <iostream>
#include "grains.h"
#include <stdint.h>

using namespace std;

namespace grains {
    uint64_t square(int tiles) {
        uint64_t result = ((uint64_t)1<<(tiles-1));
        return result;
    }
    uint64_t total() {
        uint64_t result = 1;
        for(int i = 2; i <= 64; i++) {
            result += square(i);
        }
        return result;
    }
}  // namespace grains

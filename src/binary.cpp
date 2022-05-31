#include "binary.h"

namespace leet {

    int binary_sum(int a, int b)
    {
        unsigned c;
        while(b != 0) {
            c = a&b;
            a ^= b;
            b = c << 1;
        }
        return a;
    }

    int hamming_weight(int n)
    {
        auto c = 0;
        while (n)
        {
            n &= (n-1);
            c++;
        }
        return c;
    }
}

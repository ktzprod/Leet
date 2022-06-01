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

    std::vector<int> count_bits(int n)
    {
        std::vector<int> r(n + 1, 0);
        for (int i = 1; i <= n; i++)
        {
            r[i] = r[i/2] + (i % 2);
        }
        return r;
    }

    uint32_t reverse_bits(uint32_t n)
    {
        n = ((n & 0xffff0000) >> 16) | ((n & 0x0000ffff) << 16);
        n = ((n & 0xff00ff00) >> 8) | ((n & 0x00ff00ff) << 8);
        n = ((n & 0xf0f0f0f0) >> 4) | ((n & 0x0f0f0f0f) << 4);
        n = ((n & 0xcccccccc) >> 2) | ((n & 0x33333333) << 2);
        n = ((n & 0xaaaaaaaa) >> 1) | ((n & 0x55555555) << 1);
        return n;
    }
}

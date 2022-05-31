#pragma once

#include "config.h"

namespace leet {

    /**
     * @brief sum the two given integer without using the operator +
     *
     * @param a
     * @param b
     *
     * @return a+b
     */
    LEET_API int binary_sum(int a, int b);

    /**
     * @brief Count the number of 1 in the binary representation of the given number
     *
     * @param n
     *
     * @return the number of bit set in the number n
     */
    LEET_API int hamming_weight(int n);
}

#pragma once

#include <vector>

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

    /**
     * @brief Given an integer n, return an array with the number of 1's in the binary representation of each
     *        number in the range [0, i].
     *
     * @param n
     *
     * @return the number of 1 in the binary representation of each number in range [0, i]
     */
    LEET_API std::vector<int> count_bits(int n);

    /**
     * @brief Reverse bits of a given unsigned integer
     *
     * @param n
     *
     * @return a number that match the reverse bits order of n
     */
    LEET_API uint32_t reverse_bits(uint32_t n);
}

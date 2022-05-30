#pragma once

#include <optional>
#include <utility>
#include <vector>

#include "config.h"

namespace leet {

    /**
     * @brief find the indexes of the numbers that describe a + b = target
     *
     * @param nums the number list
     * @param target the sum target
     *
     * @return an optional pair<int, int> of indexes, std::nullopt if there is no solution
     */
    LEET_API std::optional<std::pair<int, int>> find_sum(const std::vector<int>& nums, int target);

    /**
     * @brief find the biggest distance between numbers in a vector that have suited indexes
     *
     * @param values the number list
     *
     * @return the biggest distance between the two number, 0 if there is no solution
     */
    LEET_API int find_biggest_suited_distance(const std::vector<int>& values);

    /**
     * @brief check if there is duplicates in the given numbers
     *
     * @param values the number list
     *
     * @return true if this is the case, false otherwise
     */
    LEET_API bool contains_duplicate(const std::vector<int>& values);
}

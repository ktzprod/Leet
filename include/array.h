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

    /**
     * @brief Process the given array such that each element is equal
     *        to the product of all the elements except itself
     *
     * @param values the number list
     *
     * @return the result as an array
     */
    LEET_API std::vector<int> product_except_self(std::vector<int>& values);

    /**
     * @brief find the maxixum subarray value of the given array
     *
     * @param values the number list
     *
     * @return the sum value of the maximum subarray
     */
    LEET_API int max_subarray(const std::vector<int>& values);

    /**
     * @brief find the maximum subarray product of the given array
     *
     * @param values the number list
     *
     * @return the value of the maximum subarray product
     */
    LEET_API int max_product_subarray(const std::vector<int>& values);

    /**
     * @brief return all the triplets [nums[i], nums[j], nums[k]] such that
     *        i != j, i != k, and j != k, and nums[i] + nums[j] + nums[k] == sum_value.
     *
     * @details note that the given array will be sort by
     *          this function because its passed as a reference
     *
     * @param values the number list
     *
     * @param target the target sum of each triplets
     *
     * @return return all the triplets. Empty if no results has been found
     */
    LEET_API std::vector<std::tuple<int, int, int>> sum_triplets(std::vector<int>& values, int target);
}

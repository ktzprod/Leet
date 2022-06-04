#pragma once

#include <stdint.h>

#include <optional>
#include <utility>
#include <vector>
#include <tuple>

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

    /**
     * @brief return the maximum area based on the given numbers.
     *
     * @details consider you are given n non-negative integers say a1, a2, ..., an,
     *          where each element in the array represents a point at coordinate (i, ai).
     *          n vertical lines are drawn such that the two endpoints of the line i is at (i, ai) and (i, 0).
     *          Find two lines, which, together with the x-axis forms a container, such that the container contains the biggest area.
     *
     * @param values the number list
     *
     * @return the biggest container area
     */
    LEET_API int max_area(const std::vector<int>& values);

    /**
     * @brief Given an array nums containing n distinct numbers in the range [0, n]
     *        return the only number in the range that is missing from the array.
     *
     * @param values the number list
     *
     * @return the only number in the range that is missing from the array.
     */
    LEET_API int missing_number(const std::vector<int>& values);
}

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

}

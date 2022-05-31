#include <limits>
#include <unordered_map>

#include "array.h"

namespace leet {

    std::optional<std::pair<int, int>> find_sum(const std::vector<int>& nums, int target) {
        std::unordered_map<int, int> checked;
        for (auto i = 0u; i < nums.size(); i++) {
            auto remaining = target - nums[i];
            if (auto it = checked.find(remaining); it != checked.end()) {
                return std::pair<int, int> { checked[remaining], (int)i};
            }
            checked.insert({ nums[i], i });
        }
        return std::nullopt;
    }

    int find_biggest_suited_distance(const std::vector<int>& values) {
        auto min = std::numeric_limits<int>::max();
        auto max = 0;
        for (auto v : values) {
            min = std::min(min, v);
            max = std::max(max, v - min);
        }
        return max;
    }

    bool contains_duplicate(const std::vector<int>& nums) {
        std::unordered_map<int, bool> seen;
        for (auto& n : nums) {
            if (!seen.emplace(n, true).second) {
                return true;
            }
        }
        return false;
    }

    std::vector<int> product_except_self(std::vector<int>& values)
    {
        int size = values.size();
        std::vector<int> result(size, 1);

        for (auto i = 1; i < size; i++) {
            result[i] = result[i - 1] * values[i - 1];
        }

        for (auto j = size - 1, m = 1; j >= 0; j--) {
            result[j] *= m;
            m *= values[j];
        }

        return result;
    }

    int max_subarray(const std::vector<int>& values)
    {
        int sum = 0;
        int max = std::numeric_limits<int>::min();
        for (int i = 0; i < values.size(); i++)
        {
            sum = std::max(sum + values[i], values[i]);
            max = std::max(max, sum);
        }
        return max;
    }

    int max_product_subarray(const std::vector<int>& values)
    {
        auto result = values[0];
        auto min = result;
        auto max = result;

        for (int i = 1; i < values.size(); i++)
        {
            if (values[i] < 0)
                std::swap(max, min);
            max = std::max(values[i], max * values[i]);
            min = std::min(values[i], min * values[i]);
            result = std::max(result, max);
        }

        return result;
    }

}

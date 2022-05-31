#include <algorithm>
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

    std::vector<std::tuple<int, int, int>> sum_triplets(std::vector<int>& values, int target)
    {
        std::sort(values.begin(), values.end());
        std::vector<std::tuple<int, int, int>> result;
        for (int i = 0; i < values.size(); i++) {
            if (i > 0 && values[i] == values[i-1]) { continue; }
            auto t = target - values[i];
            for (int l = i + 1, r = values.size() - 1; l < r; ) {
                if (i == l || i == r || l == r) { continue; }
                auto v = values[l] + values[r];
                if (v > t) {
                    r--;
                } else if (v < t) {
                    l++;
                } else {
                    result.emplace_back(std::make_tuple(values[i], values[l], values[r]));
                    while(l < values.size() - 1 && values[l] == values[l+1]) l++;
                    while(r > 0 && values[r] == values[r-1]) r--;
                    l++;
                    r--;
                }
            }
        }
        return result;
    }

    int max_area(const std::vector<int>& values)
    {
        auto max_area = std::numeric_limits<int>::min();
        for (int l = 0, r = values.size() - 1; l < r; )
        {
            max_area = std::max(max_area, (r - l) * std::min(values[l], values[r]));
            if (values[l] < values[r]) {
                l++;
            } else {
                r--;
            }
        }
        return max_area;
    }
}

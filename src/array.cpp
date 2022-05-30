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

}

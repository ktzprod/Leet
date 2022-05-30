#include "array.h"
#include "doctest.h"

TEST_SUITE_BEGIN("array");

TEST_CASE("find_sum()")
{
    SUBCASE("example 1")
    {
        auto nums = std::vector<int> { 2, 7, 11, 15 };
        auto indexes = leet::find_sum(nums, 9);
        REQUIRE(indexes);
        REQUIRE_EQ(indexes->first, 0);
        REQUIRE_EQ(indexes->second, 1);
    }

    SUBCASE("example 2")
    {
        auto nums = std::vector<int> { 3, 2, 4 };
        auto indexes = leet::find_sum(nums, 6);
        REQUIRE(indexes);
        REQUIRE_EQ(indexes->first, 1);
        REQUIRE_EQ(indexes->second, 2);
    }

    SUBCASE("example 3")
    {
        auto nums = std::vector<int> { 5, 74, 14, 11};
        auto indexes = leet::find_sum(nums, 8);
        REQUIRE_FALSE(indexes);
    }
}

TEST_CASE("find_biggest_suited_distance()")
{
    SUBCASE("example 1")
    {
        auto nums = std::vector<int> { 7, 1, 5, 3, 6, 4 };
        REQUIRE_EQ(leet::find_biggest_suited_distance(nums), 5);
    }

    SUBCASE("example 2")
    {
        auto nums = std::vector<int> { 7, 6, 4, 3, 1 };
        REQUIRE_EQ(leet::find_biggest_suited_distance(nums), 0);
    }
}

TEST_SUITE_END();

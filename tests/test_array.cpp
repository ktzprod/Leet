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

TEST_CASE("contains_duplicate()")
{
    SUBCASE("example 1")
    {
        auto nums = std::vector<int> { 1, 1, 1, 3, 3, 4, 3, 2, 4, 2 };
        REQUIRE(leet::contains_duplicate(nums));
    }

    SUBCASE("example 2")
    {
        auto nums = std::vector<int> { 1, 2, 3, 4 };
        REQUIRE_FALSE(leet::contains_duplicate(nums));
    }
}

TEST_CASE("product_except_self()")
{
    SUBCASE("example 1")
    {
        auto nums = std::vector<int> { 1, 2, 3, 4 };
        auto answer = std::vector<int> { 24, 12, 8, 6 };
        REQUIRE_EQ(leet::product_except_self(nums), answer);
    }

    SUBCASE("example 2")
    {
        auto nums = std::vector<int> { -1, 1, 0, -3, 3 };
        auto answer = std::vector<int> { 0, 0, 9, 0, 0 };
        REQUIRE_EQ(leet::product_except_self(nums), answer);
    }
}

TEST_CASE("max_subarray()")
{
    SUBCASE("example 1")
    {
        auto nums = std::vector<int> { -2, 1, -3, 4, -1, 2, 1, -5, 4 };
        REQUIRE_EQ(leet::max_subarray(nums), 6);
    }

    SUBCASE("example 2")
    {
        auto nums = std::vector<int> { 5, 4, -1, 7, 8 };
        REQUIRE_EQ(leet::max_subarray(nums), 23);
    }
}

TEST_CASE("max_product_subarray()")
{
    SUBCASE("example 1")
    {
        auto nums = std::vector<int> { 2, 3, -2, 4 };
        REQUIRE_EQ(leet::max_product_subarray(nums), 6);
    }

    SUBCASE("example 2")
    {
        auto nums = std::vector<int> { -2, 0, -1 };
        REQUIRE_EQ(leet::max_product_subarray(nums), 0);
    }
}

TEST_CASE("sum_triplets()")
{
    SUBCASE("example 1")
    {
        auto nums = std::vector<int> { -1, 0, 1, 2, -1, -4 };
        auto triplets = leet::sum_triplets(nums, 0);
        REQUIRE_EQ(triplets[0], std::make_tuple(-1, -1, 2));
        REQUIRE_EQ(triplets[1], std::make_tuple(-1, 0, 1));
    }

    SUBCASE("example 2")
    {
        auto nums = std::vector<int> { };
        auto triplets = leet::sum_triplets(nums, 0);
        REQUIRE(triplets.empty());
    }

    SUBCASE("example 3")
    {
        auto nums = std::vector<int> { 0 };
        auto triplets = leet::sum_triplets(nums, 0);
        REQUIRE(triplets.empty());
    }
}

TEST_CASE("max_area()")
{
    SUBCASE("example 1")
    {
        auto nums = std::vector<int> { 1, 8, 6, 2, 5, 4, 8, 3, 7 };
        REQUIRE_EQ(leet::max_area(nums), 49);
    }

    SUBCASE("example 2")
    {
        auto nums = std::vector<int> { 1, 1 };
        REQUIRE_EQ(leet::max_area(nums), 1);
    }
}

TEST_CASE("missing_number()")
{
    SUBCASE("example 1")
    {
        auto nums = std::vector<int> { 3, 0, 1 };
        REQUIRE_EQ(leet::missing_number(nums), 2);
    }

    SUBCASE("example 2")
    {
        auto nums = std::vector<int> { 0, 1 };
        REQUIRE_EQ(leet::missing_number(nums), 2);
    }

    SUBCASE("example 3")
    {
        auto nums = std::vector<int> { 9, 6, 4, 2, 3, 5, 7, 0, 1 };
        REQUIRE_EQ(leet::missing_number(nums), 8);
    }
}

TEST_SUITE_END();

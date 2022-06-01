#include "binary.h"
#include "doctest.h"

TEST_SUITE_BEGIN("binary");

TEST_CASE("binary_sum()")
{
    SUBCASE("example 1")
    {
        REQUIRE_EQ(leet::binary_sum(1, 2), 3);
    }

    SUBCASE("example 2")
    {
        REQUIRE_EQ(leet::binary_sum(2, 3), 5);
    }

    SUBCASE("example 3")
    {
        REQUIRE_EQ(leet::binary_sum(218498, 32165), 250663);
    }
}

TEST_CASE("hamming_weight()")
{
    SUBCASE("example 1")
    {
        // 12 -> 1100
        REQUIRE_EQ(leet::hamming_weight(12), 2);
    }

    SUBCASE("example 2")
    {
        // 52 -> 0110100
        REQUIRE_EQ(leet::hamming_weight(52), 3);
    }

    SUBCASE("example 3")
    {
        // 84980498 -> 0101000100001011001100010010
        REQUIRE_EQ(leet::hamming_weight(84980498), 10);
    }
}

TEST_CASE("count_bits()")
{
    SUBCASE("example 1")
    {
        REQUIRE_EQ(leet::count_bits(2), std::vector<int> { 0, 1, 1 });
    }

    SUBCASE("example 2")
    {
        REQUIRE_EQ(leet::count_bits(5), std::vector<int> { 0, 1, 1, 2, 1, 2 });
    }
}

TEST_CASE("reverse_bits()")
{
    SUBCASE("example 1")
    {
        auto n = 43261596; // 00000010100101000001111010011100
        REQUIRE_EQ(leet::reverse_bits(n), 964176192); // expected 00111001011110000010100101000000
    }

    SUBCASE("example 2")
    {
        auto n = 4294967293; // 11111111111111111111111111111101
        REQUIRE_EQ(leet::reverse_bits(n), 3221225471); // expected 10111111111111111111111111111111
    }
}

TEST_SUITE_END();

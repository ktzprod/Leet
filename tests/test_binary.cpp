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

TEST_SUITE_END();

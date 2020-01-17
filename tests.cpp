#include "gtest/gtest.h"
#include "lib.h"

TEST(check_polindrom, expected_yes_or_not) {
EXPECT_EQ(check_polindrom("12321"), true);
EXPECT_EQ(check_polindrom("afafafa"), true);
EXPECT_EQ(check_polindrom("18721"), false);
EXPECT_EQ(check_polindrom("afg"), false);
EXPECT_EQ(check_polindrom("ab  ba"), true);
}


int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}



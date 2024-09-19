#include <gtest/gtest.h>
#include "reverse.h"

TEST(ReverseTest, CheckEmptyString) {
    EXPECT_EQ(reverse(""), "");
}

TEST(ReverseTest, CheckEvenLengthString) {
    EXPECT_EQ(reverse("abcd"), "dcba");
}

TEST(ReverseTest, CheckOddLengthString) {
    EXPECT_EQ(reverse("abc"), "cba");
}


int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

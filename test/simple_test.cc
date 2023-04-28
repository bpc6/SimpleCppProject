#include "gtest/gtest.h"
#include "simple.h"

TEST(SimpleTest, GetValue) {
    Simple simpleObject;
    EXPECT_EQ(simpleObject.getValue(), 42);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

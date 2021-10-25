#include "gtest/gtest.h"
#include "../header/rectangle.hpp"

TEST(ConstructorTest, Width_2_Height_4) {
	Rectangle rec(2,4);
	EXPECT_EQ(8, rec.area());
	EXPECT_EQ(12, rec.perimeter());
}

TEST(ConstructorTest, Width_0_Height_0) {
        Rectangle rec(0,0);
        EXPECT_EQ(0, rec.area());
        EXPECT_EQ(0, rec.perimeter());
}

TEST(ConstructorTest, DefaultConstructor) {
        Rectangle rec;
        EXPECT_EQ(0, rec.area());
        EXPECT_EQ(0, rec.perimeter());
}

TEST(ConstructorTest, Width_4_Height_10) {
        Rectangle rec(4,10);
        EXPECT_EQ(40, rec.area());
        EXPECT_EQ(28, rec.perimeter());
}

TEST(AreaTest, Width_1_Height_1) {
        Rectangle rec(1,1);
        EXPECT_EQ(1, rec.area());
}



int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}i

#include "gtest/gtest.h"
#include "../header/rectangle.hpp"
#include <iostream>

using namespace std;

TEST(ConstructorTest, Width_2_Height_4) {
	Rectangle rec(2,4);
	EXPECT_EQ(2, rec.getWidth());
	EXPECT_EQ(4, rec.getHeight());
}

TEST(ConstructorTest, Width_0_Height_0) {
        Rectangle rec(0,0);
        EXPECT_EQ(0, rec.getWidth());
        EXPECT_EQ(0, rec.getHeight());
}

TEST(ConstructorTest, Width_7_Height_9) {
        Rectangle rec(7,9);
        EXPECT_EQ(7, rec.getWidth());
        EXPECT_EQ(9, rec.getHeight());
}

TEST(ConstructorTest, DefaultConstructor) {
        Rectangle rec;
        EXPECT_EQ(0, rec.getWidth());
        EXPECT_EQ(0, rec.getHeight());
}

TEST(AreaTest, Width_1_Height_1) {
        Rectangle rec(1,1);
        EXPECT_EQ(1, rec.area());
}

TEST(AreaTest, Width_0_Height_1) {
        Rectangle rec(0,1);
        EXPECT_EQ(0, rec.area());
}

TEST(AreaTest, Width_1_Height_0) {
        Rectangle rec(1,0);
        EXPECT_EQ(0, rec.area());
}

TEST(AreaTest, Default) {
        Rectangle rec;
        EXPECT_EQ(0, rec.area());
}

TEST(PerimeterTest, Width_1_Height_1) {
        Rectangle rec(1,1);
        EXPECT_EQ(4, rec.perimeter());
}

TEST(PerimeterTest, Width_0_Height_0) {
        Rectangle rec(0,0);
        EXPECT_EQ(0, rec.perimeter());
}

TEST(PerimeterTest, Width_5_Height_10) {
        Rectangle rec(5,10);
        EXPECT_EQ(30, rec.perimeter());
}

TEST(PerimeterTest, Default) {
        Rectangle rec;
        EXPECT_EQ(0, rec.perimeter());
}


int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

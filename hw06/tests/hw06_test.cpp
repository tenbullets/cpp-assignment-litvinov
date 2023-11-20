#include <hw06.h>
#include <gtest/gtest.h>

TEST(Tests, Test_1)
{
    MyIntVector vec(5);
    vec.push_back(23);

    int expected = 23;
    int res = vec.get(5);

    EXPECT_EQ(res, expected);
}

TEST(Tests, Test_2)
{
    MyIntVector vec;
    vec.push_back(12);
    vec.push_back(76);

    int expected = 12;
    int res = vec.get(0);

    EXPECT_EQ(res, expected);
}

TEST(Tests, Test_3)
{
    MyIntVector vec;
    vec.push_back(100);
    vec.push_back(101);
    vec.set(1, 99);

    int expected = 99;
    int res = vec.get(1);

    EXPECT_EQ(res, expected);
}

TEST(Tests, Test_4)
{
    MyIntVector vec(10);
    
    vec.resize(25);

    int expected = 25;
    int res = vec.size();

    EXPECT_EQ(res, expected);
}

TEST(Tests, Test_5)
{
    MyIntVector vec(10);
    
    vec.resize(25);

    int expected = 25;
    int res = vec.cap();

    EXPECT_EQ(res, expected);
}

TEST(Tests, Test_6)
{
    MyIntVector vec(10);

    vec.resize(25);
    vec.push_back(3);

    int size = vec.size();
    int capacity = vec.cap();

    ASSERT_FALSE(size == capacity);
}

TEST(Tests, Test_7)
{
    MyIntVector vec(10);

    vec.resize(25);
    vec.push_back(3);
    vec.shrink_to_fit();

    int size = vec.size();
    int capacity = vec.cap();

    ASSERT_TRUE(size == capacity);
}

TEST(Tests, Test_8)
{
    MyIntVector vec(10);

    vec.resize(25, 4);

    int expected = 4;
    int res = vec.get(24);
    
    EXPECT_EQ(res, expected);
}


TEST(Tests, Test_9)
{
    MyIntVector vec(10);
    vec.resize(0);

    int res = vec.cap();
    int expected = 10;

    EXPECT_EQ(res, expected);
}

TEST(Tests, Test_10)
{
    MyIntVector vec(10);

    vec.reserve(50);

    int res = vec.cap();
    int expected = 50;

    EXPECT_EQ(res, expected);
}


int main(int argc, char** argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
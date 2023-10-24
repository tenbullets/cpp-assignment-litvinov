#include <hw05.h>
#include <gtest/gtest.h>

TEST(Hw05Tests, Test1)
{
    VecOfStr input{"madam", "radar", "anagram", "rotor"};
    auto expected = VecOfStr{"madam", "radar", "rotor"};
    auto actual = hw05(input);
    EXPECT_EQ(actual, expected);
}

TEST(Hw05Tests, Test2)
{
    VecOfStr input{"Madam, in Eden, I'm Adam"};
    auto expected = VecOfStr{"Madam, in Eden, I'm Adam"};
    auto actual = hw05(input);
    EXPECT_EQ(actual, expected);
}

TEST(Hw05Tests, Test3)
{
    VecOfStr input{"Red roses run no risk, sir, on Nurse's order"};
    auto expected = VecOfStr{"Red roses run no risk, sir, on Nurse's order"};
    auto actual = hw05(input);
    EXPECT_EQ(actual, expected);
}

TEST(Hw05Tests, Test4)
{
    VecOfStr input{"Won't lovers revolt now?"};
    auto expected = VecOfStr{"Won't lovers revolt now?"};
    auto actual = hw05(input);
    EXPECT_EQ(actual, expected);
}

TEST(Hw05Tests, Test5)
{
    VecOfStr input{"A man, a plan, a canal, Panama!", "SIMPLETEXT"};
    auto expected = VecOfStr{"A man, a plan, a canal, Panama!"};
    auto actual = hw05(input);
    EXPECT_EQ(actual, expected);
}

TEST(Hw05Tests, Test6)
{
    VecOfStr input{"bbs", "tenet", "Hi, taxi, ixat , ih"};
    auto expected = VecOfStr{"tenet", "Hi, taxi, ixat , ih"};
    auto actual = hw05(input);
    EXPECT_EQ(actual, expected);
}

TEST(Hw05Tests, Test7)
{
    VecOfStr input{"tenet, T.E.N..E.T"};
    auto expected = VecOfStr{"tenet, T.E.N..E.T"};
    auto actual = hw05(input);
    EXPECT_EQ(actual, expected);
}

TEST(Hw05Tests, Test8)
{
    VecOfStr input{"Was it a car or a cat I saw?", "Do geese see God?", "It's not New York"};
    auto expected = VecOfStr{"Was it a car or a cat I saw?", "Do geese see God?"};
    auto actual = hw05(input);
    EXPECT_EQ(actual, expected);
}

TEST(Hw05Tests, Test9)
{
    VecOfStr input{"......9........nb/.,,,.,.,.,21.12bn.9"};
    auto expected = VecOfStr{"......9........nb/.,,,.,.,.,21.12bn.9"};
    auto actual = hw05(input);
    EXPECT_EQ(actual, expected);
}

TEST(Hw05Tests, Test10)
{
    VecOfStr input{"123, 454, 321", "11111 111111,2, 11111111111"};
    auto expected = VecOfStr{"123, 454, 321", "11111 111111,2, 11111111111"};
    auto actual = hw05(input);
    EXPECT_EQ(actual, expected);
}

int main(int argc, char** argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
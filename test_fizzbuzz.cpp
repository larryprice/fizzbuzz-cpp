#include "gtest/gtest.h"
#include "gmock/gmock.h"
#include <vector>
#include <string>

using namespace std;

vector<string> fizzbuzz(int count);

TEST (FizzbuzzTest, NegativeCountReturnsEmpty) {
  EXPECT_EQ(0, fizzbuzz(-5).size());
}

TEST (FizzbuzzTest, ZeroCountReturnsEmpty) {
  EXPECT_EQ(0, fizzbuzz(0).size());
}

TEST (FizzbuzzTest, FifteenCountReturnsWordList) {
  vector<string> fb = fizzbuzz(15);
  EXPECT_THAT(fb, testing::ElementsAreArray({"1", "2", "fizz", "4", "buzz", "fizz", "7", "8", "fizz", "buzz", "11", "fizz", "13", "14", "fizzbuzz"}));
}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}

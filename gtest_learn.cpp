#include <gtest/gtest.h>
#include <iostream>
#include "cat.h"

// The fixture for testing class Foo.
class CatTest : public ::testing::Test {
 protected:
  // You can remove any or all of the following functions if their bodies would
  // be empty.

  CatTest() {
     // You can do set-up work for each test here.
  }

  ~CatTest() override {
     // You can do clean-up work that doesn't throw exceptions here.
  }

  // If the constructor and destructor are not enough for setting up
  // and cleaning up each test, you can define the following methods:

  void SetUp() override {
     // Code here will be called immediately after the constructor (right
     // before each test).
  }

  void TearDown() override {
     // Code here will be called immediately after each test (right
     // before the destructor).
  }

  Cat cat;

  // Class members declared here can be used by all tests in the test suite
  // for Foo.
};

// Tests that the Foo::Bar() method does Abc.
TEST_F(CatTest, sleepTest) {
  cat.putToSleep();
  EXPECT_EQ(cat.getSleep(), true); //explodes
}

TEST_F(CatTest, wakeTest) {
  cat.wake();
  EXPECT_EQ(cat.getSleep(), false);
}

TEST_F(CatTest, eatTest) {
  EXPECT_EQ(cat.getWeight(), 10);
  cat.eat(10);

  EXPECT_EQ(cat.getWeight(), 20);
}

TEST_F(CatTest, throwUpTest) {
//   cat.throwUp()
  EXPECT_EQ(cat.throwUp(), 9);
}


int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}

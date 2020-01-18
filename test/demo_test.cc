#include "gtest/gtest.h"
#include "src/lib/demo.h"

TEST(demo, HelloWorld) {
    demo *d = new demo();
    std::string actual = d->helloWorld();
    std::string expected = "hello, world";
    EXPECT_EQ(expected, actual);
}
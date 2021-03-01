#ifndef TESTS_H
#define TESTS_H
#include <gtest/gtest.h>

extern "C" {
#include "myfunc.h"
}

TEST(mytest, num0) {
    double x1, x2;
    ASSERT_EQ(sqr_my(1,-6,5,&x1,&x2),2);
    if(x1<x2)
    {
        double tmp;
        tmp = x1;
        x1 = x2;
        x2 = tmp;
    }
    ASSERT_EQ(x1, 5);
    EXPECT_EQ(x2, 1);
}

TEST(mytest, greather2) {
    double x1,x2;
    ASSERT_EQ(sqr_my(1,-4,4,&x1,&x2),1);
    ASSERT_EQ(x1, 2);
}

TEST(mytest, negative) {
    double x1,x2;
    ASSERT_EQ(sqr_my(1,2,5,&x1,&x2),0);
}

#endif // TESTS_H

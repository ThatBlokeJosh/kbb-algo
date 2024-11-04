#include <cmath>
#include <gtest/gtest.h>
#include "eea.h"
#include "sam.h"

TEST(EEA_TEST, GCD) {
  EXPECT_EQ(eea(47, 14).gcd, 1);
  EXPECT_EQ(eea(277, 194).gcd, 1);
  EXPECT_EQ(eea(6, 3).gcd, 3);
};

TEST(EEA_TEST, INVERSE) {
  EXPECT_EQ(findInverse(47, 14), 37);
  EXPECT_EQ(findInverse(277, 194), 10);
  EXPECT_EQ(findInverse(7, 3), 5);
};

TEST(SAM_TEST, POW) {
  EXPECT_EQ(sam(2, 15), 32768);
  EXPECT_EQ(sam(6, 9), 10077696);
  EXPECT_EQ(sam(3, 12), 531441);
  EXPECT_EQ(sam(2, 3), 8);
}

#define BOOST_TEST_MODULE My Test
#include <boost/test/included/unit_test.hpp>
#include "../src/component1/myComp1.hpp"

BOOST_AUTO_TEST_CASE(first_test) {
  BOOST_TEST(myComp1(64) == true);
  BOOST_TEST(myComp1(3) == false);
}

#ifndef TESTCALCULATOR_H_
#define TESTCALCULATOR_H_

#include <cxxtest/TestSuite.h>

#include "Calculator.h"

class TestCalculator : public CxxTest::TestSuite
{
public:
	void setUp() {
		// objects used in test cases are created in this method
		// that is executed before all the other test methods
	}

	void test_global_Calculator_Calculator() {
		Calculator c;
		TS_ASSERT_EQUALS(c.getValue(), 0);
	}

	void test_global_Calculator_Calculator_int() {
		Calculator c(3);
		TS_ASSERT_EQUALS(c.getValue(), 3);
	}

	void testSum() {
		Calculator c(4);
		c.sum(3);
		TS_ASSERT_EQUALS(c.getValue(), 7);
	}

	void testSubtract() {
		Calculator c(5);
		c.subtract(3);
		TS_ASSERT_EQUALS(c.getValue(), 2);
	}

	void testMul() {
		Calculator c(7);
		c.mul(2);
		TS_ASSERT_EQUALS(c.getValue(), 14);
	}
	

};

#endif /*TESTCALCULATOR_H_*/

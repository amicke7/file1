/*
 * Calculator.h
 *
 *  Created on: 21/mar/2015
 *      Author: bertini
 */

#ifndef CALCULATOR_H_
#define CALCULATOR_H_

class Calculator {
public:
	Calculator();  // set value to 0
	Calculator(int v);

	int sum(int x); // if x<0 invert it before summing
	int subtract(int x); // if x<0 invert it before subtracting
	int mul(int x);

	int getValue() const {
		return value;
	}

	void setValue(int v) {
		value = v;
	}

private:
	int value;
};

#endif /* CALCULATOR_H_ */

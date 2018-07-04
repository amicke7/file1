#include"Calculator.h"
Calculator::Calculator():value(0){}// set value to 0
Calculator::Calculator(int v):value(v){}
int Calculator:: sum(int x){
    if (x<0)
        x=-x;
    value=value +x;
    return value;
} // if x<0 invert it before summing
int Calculator:: subtract(int x){
    if (x<0)
        x=-x;
    value=value -x;
    return value;
} // if x<0 invert it before subtracting

int Calculator:: mul(int x){
    value= value*x;
    return value;
}
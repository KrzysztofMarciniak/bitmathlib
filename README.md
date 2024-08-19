# bitmathlib

to use just include:

```c++
#include "bitmathlib.h"
```


Example usage:


```c++
#include "bitmathlib.h"
#include <iostream>

int main() {
    int a = 15;
    int b = 5;

    std::cout << "Addition: " << bitmathlib::bitwise_add(a, b) << std::endl;
    std::cout << "Subtraction: " << bitmathlib::bitwise_subtract(a, b) << std::endl;
    std::cout << "Multiplication: " << bitmathlib::bitwise_multiply(a, b) << std::endl;
    std::cout << "Division: " << bitmathlib::bitwise_divide(a, b) << std::endl;
    std::cout << "Square Root: " << bitmathlib::bitwise_sqrt(25) << std::endl;
    std::cout << "Exponentiation: " << bitmathlib::bitwise_exponent(2, 3) << std::endl;

    return 0;
}
```


## Functions

### `int bitwise_add(int a, int b)`

Performs bitwise addition of two integers.

### `int bitwise_subtract(int a, int b)`

Performs bitwise subtraction of one integer from another.

### `int bitwise_multiply(int a, int b)`

Performs bitwise multiplication of two integers.

### `int bitwise_divide(int dividend, int divisor)`

Performs bitwise division of one integer by another. Throws an `std::invalid_argument` exception if the divisor is zero.

### `int bitwise_sqrt(int n)`

Computes the integer square root of a non-negative integer using bitwise operations.

### `int bitwise_exponent(int base, int exponent)`

Computes the power of a base raised to an exponent using bitwise operations.

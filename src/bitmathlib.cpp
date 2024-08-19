#include "bitmathlib.h"
#include <stdexcept>

namespace bitmathlib {

    int bitwise_add(int a, int b) {
        while (b != 0) {
            int carry = a & b;
            a = a ^ b;
            b = carry << 1;
        }
        return a;
    }

    int bitwise_subtract(int a, int b) {
        return bitwise_add(a, bitwise_add(~b, 1));
    }

    int bitwise_multiply(int a, int b) {
        int result = 0;
        while (b != 0) {
            if (b & 1) {
                result = bitwise_add(result, a);
            }
            a <<= 1;
            b >>= 1;
        }
        return result;
    }

int bitwise_divide(int dividend, int divisor) {
    if (divisor == 0) {
        throw std::invalid_argument("Division by zero");
    }

    int quotient = 0;
    int bit = 1 << 30;
    while (bit > dividend) {
        bit >>= 2;
    }
    while (bit != 0) {
        if (dividend >= bitwise_add(divisor, bit)) {
            dividend = bitwise_subtract(dividend, bitwise_add(divisor, bit));
            quotient = bitwise_add(quotient, bit);
        }
        bit >>= 2;
    }
    return quotient;
}

    int bitwise_sqrt(int n) {
        int result = 0;
        int bit = 1 << 30;

        while (bit > n) {
            bit >>= 2;
        }

        while (bit != 0) {
            if (n >= bitwise_add(result, bit)) {
                n = bitwise_subtract(n, bitwise_add(result, bit));
                result = bitwise_add(result >> 1, bit);
            } else {
                result >>= 1;
            }
            bit >>= 2;
        }
        return result;
    }


    int bitwise_exponent(int base, int exponent) {
        int result = 1;
        while (exponent > 0) {
            if (exponent & 1)
                result = bitwise_multiply(result, base);
            base = bitwise_multiply(base, base);
            exponent >>= 1;
        }
        return result;
    }
}

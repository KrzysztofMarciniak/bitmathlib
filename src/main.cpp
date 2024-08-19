#include <iostream>
#include <iomanip>
#include <bitset>
#include "bitmathlib.h"

void display_operation(const std::string& operation, int a, int b, int result) {
    const std::size_t binaryLength = 8;
    std::cout << operation << ": 0x" << std::hex << result << " (decimal: " << std::dec << result << ", binary: " << std::bitset<binaryLength>(result) << ")\n";
}

int main() {
    using namespace bitmathlib;
    int a = 0xF, b = 0x5;
    std::cout << "Input: a = 0x" << std::hex << a << " (decimal: " << std::dec << a
              << "), b = 0x" << std::hex << b << " (decimal: " << std::dec << b << ")\n";
    display_operation("Addition", a, b, bitwise_add(a, b));
    display_operation("Subtraction", a, b, bitwise_subtract(a, b));
    display_operation("Multiplication", a, b, bitwise_multiply(a, b));
    display_operation("Division", a, b, bitwise_divide(a, b));
    display_operation("Exponent", a, b, bitwise_exponent(a, b));
    return 0;
}

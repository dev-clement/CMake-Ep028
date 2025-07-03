#include <stdexcept>
#include "calculator.hpp"

int Calculator::add(int a, int b) {
    return a + b;
}

int Calculator::sub(int a, int b) {
    return a - b;
}

int Calculator::mul(int a, int b) {
    return a * b;
}

int Calculator::div(int a, int b) {
    if (b == 0) {
        throw std::runtime_error{"Cannot divide by 0"};
    }
    return a / b;
}

int Calculator::mod(int a, int b) {
    if (b == 0) {
        throw std::runtime_error{"Cannot divide by 0"};
    }
    return a % b;
}
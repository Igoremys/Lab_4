#include "complex_number.h"

ComplexNumber::ComplexNumber() : String() {}

ComplexNumber::ComplexNumber(const char* s) : String(s) {}

ComplexNumber::ComplexNumber(const ComplexNumber& other) : String(other) {}

ComplexNumber::~ComplexNumber() {}

ComplexNumber& ComplexNumber::operator=(const ComplexNumber& other) {
    String::operator=(other);
    return *this;
}

bool ComplexNumber::operator==(const ComplexNumber& other) const {
    // Реализация заполнителя для сравнения на равенство
    return false;
}

ComplexNumber ComplexNumber::operator*(const ComplexNumber& other) const {
    // Реализация заполнителя для умножения
    return ComplexNumber();
}

#ifndef COMPLEX_NUMBER_H
#define COMPLEX_NUMBER_H

#include "string.h"

class ComplexNumber : public String {
public:
    ComplexNumber();
    ComplexNumber(const char* s);
    ComplexNumber(const ComplexNumber& other);
    ~ComplexNumber();
    
    ComplexNumber& operator=(const ComplexNumber& other);
    bool operator==(const ComplexNumber& other) const;
    ComplexNumber operator*(const ComplexNumber& other) const;
};

#endif // COMPLEX_NUMBER_H

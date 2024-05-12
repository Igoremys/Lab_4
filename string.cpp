#include "string.h"
#include <cstring>

String::String() : str(nullptr), length(0) {}

String::String(const char* s) : str(nullptr), length(0) {
    if (s) {
        length = strlen(s);
        str = new char[length + 1];
        strcpy(str, s);
    }
}

String::String(char c) : str(nullptr), length(1) {
    str = new char[2];
    str[0] = c;
    str[1] = '\0';
}

String::String(const String& other) : str(nullptr), length(other.length) {
    if (other.str) {
        str = new char[length + 1];
        strcpy(str, other.str);
    }
}

String::~String() {
    delete[] str;
}

int String::getLength() const {
    return length;
}

void String::clear() {
    delete[] str;
    str = nullptr;
    length = 0;
}

String& String::operator=(const String& other) {
    if (this != &other) {
        delete[] str;
        length = other.length;
        if (other.str) {
            str = new char[length + 1];
            strcpy(str, other.str);
        } else {
            str = nullptr;
        }
    }
    return *this;
}

bool String::operator==(const String& other) const {
    return (length == other.length) && (strcmp(str, other.str) == 0);
}

String String::operator*(const String& other) const {
    // Реализация заполнителя для умножения
    return String();
}

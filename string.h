#ifndef STRING_H
#define STRING_H

#include <iostream>

class String {
protected:
    char* str;
    int length;
public:
    String();
    String(const char* s);
    String(char c);
    String(const String& other);
    virtual ~String();
    
    int getLength() const;
    void clear();
    
    String& operator=(const String& other);
    bool operator==(const String& other) const;
    virtual String operator*(const String& other) const;
};

#endif // STRING_H

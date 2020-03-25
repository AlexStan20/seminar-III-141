#ifndef _VECTOR_H_
#define _VECTOR_H_

#include "fraction.h"
#include <iostream>

class Vector {
    Fraction *array;
    unsigned size, max_size;
public:
    Vector (const unsigned = 1);
    void push (const Fraction f);
    ~Vector();
    Fraction& operator[] (const unsigned i) const;
    friend std::ostream& operator << (std::ostream&, const Vector&);
    Vector& operator=(const Vector&);
};

#endif //_VECTOR_H_
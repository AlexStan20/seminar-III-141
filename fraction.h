#ifndef _FRACTION_H_
#define _FRACTION_H_

#include <iostream>

class Fraction {
    int numarator, numitor;
    void simplify();
public:
    Fraction(const int = 0, const int = 1);
    Fraction operator+(const Fraction&) const;
    Fraction operator-(const Fraction&) const;
    Fraction operator*(const Fraction&) const;
    Fraction operator/(const Fraction&) const;
    friend std::ostream& operator<< (std::ostream&, Fraction);
};

#endif //_FRACTION_H_

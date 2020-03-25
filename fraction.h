#ifndef _FRACTION_H_
#define _FRACTION_H_

class Fraction {
    int numarator, numitor;
    void simplify();
public:
    Fraction(const int = 0, const int = 1);
    Fraction operator+(const Fraction&) const;
    Fraction operator-(const Fraction&) const;
    Fraction operator*(const Fraction&) const;
    Fraction operator/(const Fraction&) const;
};

#endif //_FRACTION_H_

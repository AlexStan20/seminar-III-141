#include "fraction.h"


int cmmdc (int a, int b) {
    while (b > 0) {
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}

int cmmc (int a, int b) {
    return (a * b) / cmmdc(a, b); 
}

void Fraction::simplify ( ) {
    int c = cmmdc(numarator, numitor);
    numarator = numarator / c;
    numitor = numitor / c;
}

Fraction::Fraction(const int n, const int m) : numarator(n), numitor (m) {
    simplify();
}

Fraction Fraction::operator+ (const Fraction& f) const {
    int n, m;
    if (numitor != f.numitor) {
        m = cmmc(numitor, f.numitor);
    } else {
        m = numitor;
    }
    n = numarator * m / numitor + f.numarator * m / f.numitor;

    Fraction result(n, m);
    return result;
}


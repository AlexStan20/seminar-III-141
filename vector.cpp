#include "vector.h"
#include <stdexcept>

using namespace std;

Vector::Vector(const unsigned s) : max_size (s), size(0) {
    array = new Fraction[max_size];
}


void Vector::push (const Fraction f) {
    if (size == max_size) {
        max_size += 5;
        Fraction *aux = new Fraction(max_size);

        for (unsigned i = 0; i < size; i++) {
            aux[i] = array[i];
        }
        delete [] array;
        array = aux;
    }
    array[size++] = f;
}

Vector::~Vector() {
    delete [] array;
    max_size = size = 0;
}

Fraction& Vector::operator[] (const unsigned i) const {
    if (i >= size) {
        throw out_of_range("index indexistent");
    }
    return array[i];
}

ostream& operator<< (ostream& out, const Vector& v) {
    for (unsigned i = 0; i < v.size; i++) {
        out << v[i];
    }
    out << endl;
    return out;
}

Vector& Vector::operator=(const Vector& v) {
    if (this == &v) {
        return *this;
    }
    if (max_size < v.size) {
        delete [] array;
        array = new Fraction[v.max_size];
        max_size = v.max_size;
        size = v.size;
    }
    for (unsigned i = 0; i < size; i++) {
        array[i] = v.array[i]; //v[i];
    }
    return *this;
}
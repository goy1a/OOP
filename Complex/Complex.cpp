#include "Complex.h"
#include <cmath>

using namespace std;

Complex::Complex() : re(), im() {}
double Complex::module() const {
    return sqrt(re * re + im * im);
}
Complex Complex::operator+ (Complex num) const {
    Complex temp;
    temp.re = re + num.re;
    temp.im = im + num.im;
    return temp;
}
Complex Complex::operator*(double x) const {
    Complex temp;
    temp.re = re * x;
    temp.im = im * x;
    return temp;
}
Complex Complex::operator* (Complex num) const {
    Complex temp;
    temp.re = re * num.re - im * num.im;
    temp.im = re * num.im + num.re * im;
    return temp;
}
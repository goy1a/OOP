#ifndef PUKIPUK2_COMPLEX_H
#define PUKIPUK2_COMPLEX_H

class Complex {
public:
    double re;
    double im;
    Complex();
    double module() const;
    Complex operator+ (Complex num) const;
    Complex operator* (double x) const;
    Complex operator* (Complex num) const;
};

#endif //PUKIPUK2_COMPLEX_H

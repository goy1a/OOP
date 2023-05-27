#ifndef LAB2_CRATIONAL_H
#define LAB2_CRATIONAL_H

namespace CPredictEx {
    class CRational {
    public:
        CRational(int numerator, int denominator) : m_numerator(numerator), m_denominator(denominator) {}

        bool operator<(const CRational& other) const {
            return (m_numerator * other.m_denominator) < (other.m_numerator * m_denominator);
        }

        bool operator==(const CRational& other) const {
            return (m_numerator * other.m_denominator) == (other.m_numerator * m_denominator);
        }

        CRational operator+(const CRational& other) const {
            int numerator = m_numerator * other.m_denominator + other.m_numerator * m_denominator;
            int denominator = m_denominator * other.m_denominator;
            return {numerator, denominator};
        }

    private:
        int m_numerator;
        int m_denominator;
    };
}

#endif //LAB2_CRATIONAL_H

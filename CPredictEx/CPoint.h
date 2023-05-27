#ifndef LAB2_CPOINT_H
#define LAB2_CPOINT_H

namespace CPredictEx {
    class CPoint {
    public:
        CPoint(double x, double y) : m_x(x), m_y(y) {}

        bool operator<(const CPoint& other) const {
            return m_x < other.m_x || (m_x == other.m_x && m_y < other.m_y);
        }

    private:
        double m_x;
        double m_y;
    };

}
#endif //LAB2_CPOINT_H
#include "Hexagon.h"

using namespace std;

float Hexagon::Square() {
    square_Hexagon = ((3 * sqrt(3)) / 2 * pow(a, 2));
    return square_Hexagon ;
}

float Hexagon::perimetr() {
    per_Hexagon = a_Hexagon * 6;
    return per_Hexagon;
}

};
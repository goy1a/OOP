#include "Common.h"
#include <cmath>
#include <iostream>

using namespace std;
void Common::menu(){

    cout << " 1 - The total area of all figures."<< endl;
    cout << " 2 - The total perimeter of all figures." << endl;

};
void Common::line(){
    cout << "--------------------------------\n" ;
}

void Common::start() {
    Geometric_fig x;
    bool While = true;
    while (While) {
        menu();
        cin >> a;
        switch (a) {
            case 1:
                line();
                x.common_square();
                line();
                break;
            case 2:
                line();
                x.common_per();
                line();
                break;
            case 0:
                line();
                cout << "The program has been closed.\nGood luck!\n";
                line();
                While = false;
                break;
            default:
                line();
                cout << "There is no such command.\n";
                line();
                break;

        }
    }
}
int a_triangle, a_Hexagon;
void Common::input_triangle(){
    cout << "Enter the side of the triangle: ";
    cin >> a_triangle;
};
void Common::input_Hexagon(){
    cout << "Enter the side of the hexagon: ";
    cin >> a_Hexagon;

};
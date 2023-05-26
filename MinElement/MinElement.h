
#ifndef PUKIPUK4_MINELEMENT_H
#define PUKIPUK4_MINELEMENT_H

#include "iostream"
#include <cmath>

class minElem {
public:
    template<typename T>
    static T min(T a, T b){
        if (a > b){
            return b;
        }else{
            return a;
        }
    }

};

#endif //PUKIPUK4_MINELEMENT_H

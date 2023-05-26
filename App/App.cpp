#include "App.h"
#include "iostream"

int arr[]{1 ,2 , 4 ,9};

void App::run() {
    std::cout << MaxElement::max(arr) << std::endl;
    std::cout << MinElement::min(6, 8) << std::endl;

}
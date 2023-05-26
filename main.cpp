#include <iostream>
#include "consoleService.cpp"

using namespace std;

int main(int argc, char *argv[]){
    if (argc == 0){
        (new ConsoleService())->run();
    }
    else if (argc == 1){
        string filename = argv[0];
        (new ConsoleService(filename))->run();
    }
    return 0;
}
#ifndef PUKIPUK_CONSOLESERVICE_H
#define PUKIPUK_CONSOLESERVICE_H

#include "writeFileStream.cpp"

class ConsoleService {
private:
    WriteFileStream fileStream;
    bool processAction();
public:
    ConsoleService();
    ConsoleService(std::string);
    void run();
};

#endif //PUKIPUK_CONSOLESERVICE_H

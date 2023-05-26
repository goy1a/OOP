#ifndef PUKIPUK_WRITEFILESTREAM_H
#define PUKIPUK_WRITEFILESTREAM_H
#include <iostream>
#include <string>
#include <fstream>

class WriteFileStream {
private:
    std::fstream file;
    std::string name;
public:
    WriteFileStream();

    explicit WriteFileStream(std::string);

    void open();

    void close();

    bool isFileOpened();

    void write(const std::string&);

    void write(int);

    void write(float);

    void setName(std::string);

    ~WriteFileStream();
};

#endif //PUKIPUK_WRITEFILESTREAM_H

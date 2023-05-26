#include "writeFileStream.h"
#include <iostream>
#include <utility>

WriteFileStream::WriteFileStream(std::string fileName) : name(std::move(fileName)) {}

void WriteFileStream::open() {
    file.open(name, std::ios::app);
}

void WriteFileStream::close() {
    file.close();
}

bool WriteFileStream::isFileOpened() {
    return file.is_open();
}

void WriteFileStream::write(const std::string& str) {
    file << str;
}

void WriteFileStream::write(int number) {
    file << number;
}

void WriteFileStream::write(float number) {
    file << number;
}

void WriteFileStream::setName(std::string fileName){
    name = std::move(fileName);
}

WriteFileStream::~WriteFileStream() {
    close();
};
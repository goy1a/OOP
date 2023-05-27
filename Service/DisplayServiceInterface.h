
#ifndef LAB2_DISPLAYSERVICEINTERFACE_H
#define LAB2_DISPLAYSERVICEINTERFACE_H

#include <exception>

namespace Service {
    class DisplayServiceInterface {
    public:
        virtual void displayError(std::exception const &e) = 0;
        virtual void displayInformation(const char* message, ...) = 0;
    };
}

#endif //LAB2_DISPLAYSERVICEINTERFACE_H

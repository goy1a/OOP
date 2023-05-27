#ifndef LAB2_APP_H
#define LAB2_APP_H

#include "Service/DisplayServiceInterface.h"

class App {
private:
    Service::DisplayServiceInterface* displayService;
public:
    explicit App(
            Service::DisplayServiceInterface* displayService
    );
    int start();
    static App* create(Service::DisplayServiceInterface* displayService);
};

#endif //LAB2_APP_H

#include "App.h"
#include "Service/ConsoleDisplayService.h"

int main() {
    return App::create(
            new Service::ConsoleDisplayService()
    )->start();
}
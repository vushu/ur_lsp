#include <iostream>
#include "server.hpp"
static Server server;
int main() {
    server.start();
    std::cout << "hej" << std::endl;

    return 0;
}

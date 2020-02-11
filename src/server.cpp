#include "server.hpp"

void Server::start() {
    CppHttpLibServerConnector http_server(rpc_server, 8484);
    std::cout << "Starting http server: " << std::boolalpha << http_server.StartListening() << "\n";
}

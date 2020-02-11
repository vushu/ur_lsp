#pragma once
#include <jsonrpccxx/server.hpp>
#include "cpphttplibconnector.hpp"
#include <iostream>

class Server  {
    private:
        jsonrpccxx::JsonRpc2Server rpc_server;
    public:
        void start();
};

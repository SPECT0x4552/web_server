//
// Created by spect0x4552 on 10/29/24.
//

#ifndef BINDING_SOCKET_HPP
#define BINDING_SOCKET_HPP

#include <stdio.h>
#include "simple_socket.hpp"

namespace HDE {
    class binding_socket : public simple_socket {
    public:
        binding_socket(int domain, int service, int protocol,
            int port, u_long interface) : simple_socket(domain, service,
                protocol, port, interface);

        int init_connection(int sock, struct sockaddr_in address);
    };
}




#endif //BINDING_SOCKET_HPP
//
// Created by spect0x4552 on 10/29/24.
//

#ifndef CONNECTING_SOCKET_HPP
#define CONNECTING_SOCKET_HPP

#include <stdio.h>
#include "simple_socket.hpp"

namespace HDE {
    class connecting_socket : public simple_socket {
    public:
      connecting_socket(int domain, int service, int protocol,
          int port, u_long interface);

        int init_connection(int sock, struct sockaddr_in address);

    };
}

#endif //CONNECTING_SOCKET_HPP

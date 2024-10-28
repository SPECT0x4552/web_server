//
// Created by spect0x4552 on 10/28/24.
//

#ifndef simple_socket_hpp
#define simple_socket_hpp



#include <stdio.h>
#include <sys/socket.h>
#include <netinet/in.h>


namespace HDE {
    class simple_socket {

    private:
        struct sockaddr_in address;
        int connection;
    public:
        simple_socket(int domain, int service, int protocol, int port, u_long interface);
    };

}

#endif
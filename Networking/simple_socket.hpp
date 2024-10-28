//
// Created by spect0x4552 on 10/28/24.
//

#ifndef simple_socket_hpp
#define simple_socket_hpp



#include <stdio.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <iostream>


namespace HDE {
    class simple_socket {

    private:
        struct sockaddr_in address;
        int sock;
        int connection; // result of init_connection() call
    public:
        // constructor
        simple_socket(int domain, int service, int protocol, int port, u_long interface);
        virtual int init_connection(int sock, struct sockaddr_in address) = 0;


        // function to test sockets and connections
        void test_connection(int);

        // getter functions
        struct sockaddr_in get_address();
        int get_sock();
        int get_connection();

        // setter functions
        void set_connection(int domains);
    };

}

#endif
//
// Created by spect0x4552 on 10/29/24.
//


#include "connecting_socket.hpp"


// constructor


HDE::connecting_socket::connecting_socket(int domain, int service, int protocol,
    int port, u_long interface) : simple_socket(domain, service, protocol,
        port,interface) {
        set_connection(init_connection(get_sock(), get_address()));
        test_connection(get_connection());
}

// definition of init_connection() virtual function
int HDE::connecting_socket::init_connection(int sock, struct sockaddr address) {
    return connect(sock, (struct sockaddr*)&address, sizeof(address));
}
//
// Created by spect0x4552 on 10/29/24.
//

#include "binding_socket.hpp"

HDE::binding_socket::binding_socket(int domain, int service, int protocol,
    int port, u_long interface) :
    simple_socket(domain, service, protocol, port, interface) {
    set_connection(init_connection(get_sock(),get_address()));
    test_connection(get_connection());
}

int HDE::binding_socket::init_connection(int sock, struct sockaddr_in address) {
    return bind(sock, (struct sockaddr*)&address, sizeof(address));
}

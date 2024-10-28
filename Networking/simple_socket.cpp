//spect0x4552


#include "simple_socket.hpp"

HDE::simple_socket::simple_socket(int domain, int service, int protocol, int port, u_long interface) {

    // Defining address structure
    address.sin_family = domain;
    address.sin_port = htons(port); // htons - set the network endianness (initially using local endianness)
    address.sin_addr.s_addr = htonl(interface);

    // Connect to the socket
    connection = socket(domain, service, protocol); // just for reference, not for user manipulation
}
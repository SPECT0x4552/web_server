//spect0x4552


#include "simple_socket.hpp"


// Default constructor

HDE::simple_socket::simple_socket(int domain, int service, int protocol, int port, u_long interface) {

    // Defining address structure
    address.sin_family = domain;
    address.sin_port = htons(port); // htons - set the network endianness (initially using local endianness)
    address.sin_addr.s_addr = htonl(interface);

    // Connect to the socket
    sock = socket(domain, service, protocol); // just for reference, not for user manipulation
    test_connection(sock); // Test the socket


    // Establish network connection
    connection = init_connection(sock, address);
    test_connection(connection);
}


// Test connection virtual function
void HDE::simple_socket::test_connection(int property) {

    // If connection fails, exit
    if(property < 0) {
        perror("Failed to connect\n");
        exit(EXIT_FAILURE);
    }
}

// Getter functions


struct sockaddr_in HDE::simple_socket::get_address() {
    return address;
}

int HDE::simple_socket::get_sock() {
    return sock;
}


int HDE::simple_socket::get_connection() {
    return connection;
}


//setter function
void HDE::simple_socket::set_connection(int con) {
    connection = con;
}

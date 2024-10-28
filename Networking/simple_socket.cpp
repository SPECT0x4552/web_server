//spect0x4552


#include "simple_socket.hpp"

HDE::simplesocket::simplesocket(int domain, int service, int protocol) {
    int connection = socket(domain, service, protocol); // just for reference, not for user manipulation
}
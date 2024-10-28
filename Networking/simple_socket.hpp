//
// Created by spect0x4552 on 10/28/24.
//

#ifndef simple_socket_hpp
#define simple_socket_hpp



#include <stdio.h>
#include <sys/socket.h>


namespace HDE {
    class simplesocket {

    private:
        int connection;
    public:
        simplesocket(int domain, int service, int protocol);
    };

}

#endif
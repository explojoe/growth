#include <iostream>
#include <stdio.h>

#include "network.hpp"

int main( int argc, const char* argv[] )
{
    Network* net = new Network(2);
    net->add_layer(5);
    net->add_layer(5);
    //delete net;
    printf( "\nHello1 World\n\n" );
}

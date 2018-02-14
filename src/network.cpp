#include <iostream>

#include "network.hpp"
#include "layer.hpp"

Network::Network(){}

Network::Network(int n){
    numInputs = n;
    numLayers = 0;
}

void Network::add_layer(int numNeurons){
    numLayers++;
    layers.resize(numLayers);
    layers[numLayers].initialize(numNeurons);



}

#ifndef _NETWORK_
#define _NETWORK_


#include <vector>

#include "neuron.hpp"
#include "layer.hpp"

class Network {
    private:
        std::vector<Layer> layers;
        int numInputs;
        int numLayers;

    public:
        Network();
        Network(int);

        void add_layer(int);
        float* run(float*);
};
#endif

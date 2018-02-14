#ifndef _NETWORK_
#define _NETWORK_


#include <vector>

#include "neuron.hpp"
#include "layer.hpp"

class Network {
    private:
        std::vector<Layer> layers;
        int numInputs;

    public:
        Network();
        Network(int);

        void add_layer(int n_neurons);
        float* run(float*);
};
#endif

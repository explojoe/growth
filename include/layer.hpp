#ifndef _LAYER_
#define _LAYER_

#include "neuron.hpp"

class Layer {
    private:
        Neuron* neurons;
        
    public:
        int numNeurons;
        float* values;

        Layer();
        
        void initialize(int);
        void process();
};
#endif

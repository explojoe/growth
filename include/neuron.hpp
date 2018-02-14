#ifndef _NEURON_
#define _NEURON_ 

class Neuron
{
    private:
        float* weights;

    public:
        Neuron();
        float process(float*,int);
        void setWeights(int);
};
#endif

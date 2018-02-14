#include <iostream>
#include <cstdlib>
#include <math.h>

#include "neuron.hpp"
#include "layer.hpp"

Neuron::Neuron(){}

void Neuron::setWeights(int n){

}

float Neuron::process(float* prevLayer, int num){
    float sum = 0;
    for(int i = 0; i < num; i++){
        sum += (prevLayer[i]*weights[i]);
    }
    sum = sum/num;
    return sum/(sum+abs(sum));
}

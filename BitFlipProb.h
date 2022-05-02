#ifndef BITFLIPPROB_H
#define BITFLIPPROB_H
#include "Mutator.h"
class BitFlipProb :public Mutator{
    public:
        BitFlipProb(double prob);
        Individual* mutate(Individual* indiv, int k);
        double prob;
};

#endif
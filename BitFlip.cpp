#include "BitFlip.h"
Individual* BitFlip::mutate(Individual* indiv, int k){
    // Individual offspring = indiv;
    // int index = k%offspring.getLength();
    // offspring.flipBit(index);
    // return offspring;
    int index = (k-1)%indiv->getLength();
    indiv->flipBit(index);
    return indiv;
}
// big o proof 

// recursion 
// recursive call 

//node 
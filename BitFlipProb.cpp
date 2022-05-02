#include "BitFlipProb.h"
#include <iostream>
#include <ctime>
#include <cstdlib>

BitFlipProb::BitFlipProb(double prob){
    if(prob>=1||prob<=0){
        std::cout<<"Error PROBABILITY"<<std::endl;
    }
    this->prob=prob;
}

Individual* BitFlipProb::mutate(Individual* indiv, int k){
    srand(time(0));
    double probability = this->prob*100;
    for(int i = 0; i < indiv->getLength(); i++){
        int randnum = rand()%100;   //0-99
        if(randnum>probability){
        }else if(randnum<probability){
            indiv->flipBit(i);
        }
    }
    return indiv;
}
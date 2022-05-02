#ifndef INDIVIDUAL_H
#define INDIVIDUAL_H
#include <string>

class Individual{
    public:
        //std::string binaryString;      Not sure about access modifier 
        Individual(int length);
        Individual(std::string list);
        std::string getString();
        int getBit(int pos);
        void flipBit(int pos);
        int getMaxOnes();
        int getLength();
    private:
        std::string binaryString;
};

#endif
#include <iostream>
#include "Individual.h"

// A constructor that takes in the length of the binary DNA and creates the binary string. 
// Each binary value in the list should be given a value of 0 by default.
Individual::Individual(int length){
    for(int i = 0; i < length; i++){
        this->binaryString = this->binaryString + "0";
    }
}

// A constructor that takes in a binary string and creates a new Individual with an iden!cal list.
Individual::Individual(std::string list){
    this->binaryString = list;
}

// outputs a binary string representa!on of the bitstring list (e.g.“01010100”).
std::string Individual::getString(){
    return binaryString;
}

// returns the bit value at posi!on pos. It should return -1 if pos is out of bound.
int Individual::getBit(int pos){
    if(pos<0||pos>(binaryString.length()-1)){
        return -1;
    }
    return binaryString[pos] - '0'; //minus a character change to int convert ascii to decimal 
}

// takes in the posi!on of the certain bit and flip the bit value.
void Individual::flipBit(int pos){
    if(pos<0||pos>(binaryString.length()-1)){
        std::cout<<"OUT OF RANGE"<<std::endl;
        return;
    }
    if(binaryString[pos]=='1'){
        binaryString[pos]='0';
    }else if(binaryString[pos]=='0'){
        binaryString[pos]='1';
    }else{
        std::cout<<"ERROR BINARY NUMBER"<<std::endl;
    }
    return;
}

// returns the longest consecu!ve sequence of ‘1’ digits in the list
int Individual::getMaxOnes(){
    //std::cout<<"something";
    int count = 0;
    int max = 0;
    int temp_index=0;
    for(int i = 0; i < binaryString.length(); i++){
        count=0;
        if(binaryString[i]=='1'){
            count++;
            temp_index=i+1;
            while(binaryString[temp_index]=='1'){
                //std::cout<<"1more";
                count++;
                temp_index++;
            }
            if(count>max){
                //std::cout<<"Count is :"<<count;
                max=count;
            }
        }
    }
    return max;
}

// returns the length of the list
int Individual::getLength(){
    return binaryString.length();
}





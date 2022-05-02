#include "Rearrange.h"
#include <iostream>
Individual* Rearrange::mutate(Individual* indiv, int k){
    if(k>indiv->getLength()||k<0){
        std::cout<<"ERROR FOR K";
        return indiv;
    }
    int index = k-1;
    std::string parent_list = indiv->getString();
    std::string substr_head = parent_list.substr(index, parent_list.length());
    std::string substr_tail = parent_list.substr(0, index);
    std::string offspring_list = substr_head + substr_tail;
    for(int i = 0; i < parent_list.length(); i++){
        //std::cout<<offspring_list[i]<<"&"<<indiv.getBit(i)<<std::endl;
        if(offspring_list[i]-'0'!=indiv->getBit(i)){
            indiv->flipBit(i);
        }
    }
    //std::cout<<"res: \n"<<offspring_list<<std::endl;
    return indiv;
}
//1001110
//0111010


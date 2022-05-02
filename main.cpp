#include <iostream>
#include "Individual.h"
#include "BitFlip.h"
#include "BitFlipProb.h"
#include "Rearrange.h"

using namespace std;
Individual * execute(Individual * indPtr, Mutator * mPtr, int k){
    return mPtr->mutate(indPtr, k);
}

int main(){
    BitFlip* b1 = new BitFlip();
    Rearrange* r1 = new Rearrange();
    string binarystr1 = "";
    string binarystr2 = "";
    int k1, k2;
    cin>>binarystr1;
    cin>>k1;
    cin>>binarystr2;
    cin>>k2;

    Individual* indiv1 = new Individual(binarystr1);
    Individual* indiv2 = new Individual(binarystr2);
    
    Individual* res1 = execute(indiv1, b1, k1);
    Individual* res2 = execute(indiv2, r1, k2);
    cout<<res1->getString()<<" ";
    cout<<res2->getString()<<" ";
    // cout<<execute(indiv1, b1, k1)->getString()<<" ";
    // cout<<execute(indiv2, r1, k2)->getString()<<" ";
    cout<<res2->getMaxOnes()<<std::endl;


    return 0;
}
// BitFlip mutation and Rearrange mutation are invoked on the first and the second Individual with index k1 and k2 respectively 
// by calling the execute function with the appropriate arguments. 
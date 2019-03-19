#include <iostream>
#include "functions.hpp"
#include <vector>
using namespace std;

int teller(const vector<int> & numbers, const int & x){
    int teller = 0;
    for(unsigned int i=0; i<numbers.size(); i++){
        if(numbers[i] == x){
            teller++;
        }
    }return teller;
}
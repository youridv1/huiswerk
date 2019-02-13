#include <iostream>
#include <vector>
#include "functions.hpp"
using namespace std;

float minimum(const vector<float> & cijfers){
    float laagste = cijfers[0];
    for(unsigned int i=1; i < cijfers.size(); i++){
        if(cijfers[i] < laagste){
            laagste = cijfers[i];
        }
    }
    return laagste;
}
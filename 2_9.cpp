#include<iostream>
#include<string>
#include"functions.hpp"
#include <vector>
using namespace std;

float sprong(const vector<float> & cijfers){
    float verschil;
    float grootsteverschil = 0.0;
    for(unsigned int i = 1; i < cijfers.size(); i++){
        verschil = cijfers[i] - cijfers[i-1];
        if(verschil<0){
            verschil = verschil * - 1.0;
        }
        if(verschil > grootsteverschil){
            grootsteverschil = verschil;
        }
    }
    return grootsteverschil;
}
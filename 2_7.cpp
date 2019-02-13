#include<iostream>
#include<string>
#include"functions.hpp"
#include <vector>
using namespace std;

int amplitud(const vector<int> & cijfers){
    int laagste = cijfers[0];
    int hoogste = cijfers[0];
    for(unsigned int i=1; i < cijfers.size(); i++){
        if(cijfers[i] < laagste){
            laagste = cijfers[i];
        }
        if(cijfers[i] > hoogste){
            hoogste = cijfers[i];
        }
    }
    return hoogste - laagste;
}
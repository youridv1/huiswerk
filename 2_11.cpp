#include<iostream>
#include<string>
#include"functions.hpp"
#include<vector>
using namespace std;

vector<float> SumVectoren(const vector<float> & cijfers, const vector<float> & nummers){
    vector<float> som;
    int grens;
    if(cijfers.size() > nummers.size()){
        grens = cijfers.size();
    }else{
        grens = nummers.size();
    }
    for(unsigned int i = 0; i < grens; i++){
        som.push_back(cijfers[i] + nummers[i]);
    }
    return som;
}
#include<iostream>
#include<string>
#include"functions.hpp"
#include<vector>
using namespace std;

bool sortcontrole(vector<int> & victor){
    for(unsigned int i = 1; i < victor.size(); i++){
        if(victor[i-1] > victor[i]){
            return false;
        }
    }
    return true;
}
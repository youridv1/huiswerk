#include <iostream>
#include <string>
#include "functions.hpp"
#include <vector>
using namespace std;

int vektor(){
    vector<bool> waarheden = {1, 0, 1, 1, 1, 0, 0, 1, 1, 1, 1, 0, 1, 1, 1, 0, 0};
    int tel = 0;
    int count = 0;
    for(int i=0; i < waarheden.size(); i++){
        if(waarheden[i] == 1){
            tel++;
        }else{
            if(tel > count){
                count = tel;
                tel = 0;
            }
        }
    }
    if(tel>count){
        count=tel;
    }
    cout << count;
}
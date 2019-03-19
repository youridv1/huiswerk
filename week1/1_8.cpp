#include <iostream>
#include <string>
#include "functions.hpp"

using namespace std;

int driehoek(){
    cout << "Geef een hoogte: ";
    int hoogte;
    cin >> hoogte;
    for(int i = 0; i < hoogte; i++){
        for(int j = 0; j < i + 1; j++){
            cout << " #";
        }cout << endl;
    }
}
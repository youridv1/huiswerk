#include <iostream>
#include <string>
#include "functions.hpp"

using namespace std;

int piramide(){
    cout << "Geef een formaat: ";
    int formaat;
    cin >> formaat;
    for(int i = 0; i < formaat; i++){
        for(int j = 0; j < i + 1; j++){
            cout << " #";
        }cout << endl;
    }
    for(int k = 1; k < formaat; k++){
        for(int l = 0; l < formaat - k; l++){
            cout << " #";
        }cout << endl;
    }
}
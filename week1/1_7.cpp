#include <iostream>
#include <string>
#include "functions.hpp"

using namespace std;

int vierkant(){
    cout << "Geef een formaat: ";
    int formaat;
    cin >> formaat;
    for(int i=0; i < formaat; i++){
        for(int j=0; j < formaat; j++){
            cout << " #" ;
        }cout << endl;
    }
}
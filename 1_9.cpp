#include <iostream>
#include <string>
#include "functions.hpp"

using namespace std;

int omgekeerdedriehoek(){
    int hoogte;
    cout << "Geef een hoogte: ";
    cin >> hoogte;
    for(int i=0; i<hoogte; i++){
        for(int j=0; j<hoogte-i; j++){
            cout << "# ";
        }cout << endl;
    }
}
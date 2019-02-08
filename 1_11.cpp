#include <iostream>
#include <string>
#include "functions.hpp"

using namespace std;

int omgekeerdepiramide(){
    int formaat;
    cout << "Geef een formaat: ";
    cin >> formaat;
    formaat = formaat+1;
    for(int i=1; i < formaat; i++){
        for(int j=0; j < formaat; j++){
            if(j < formaat - i){
                cout << "  ";
            }else{
                cout << " #";
            }
        }cout << endl;
    }
    for(int i=1; i < formaat; i++){
        for(int j=formaat; j > 0; j--){
            if(j < formaat - i){
                cout << " #";
            }else{
                cout << "  ";
            }
        }cout << endl;
    }
}
#include <iostream>
#include <string>
#include "functions.hpp"

using namespace std;

int piramide2(){
    cout << "Geef een formaat: ";
    int formaat;
    cin >> formaat;
    int i = 1;
    while(i < formaat + 1){
        int j = 0;
        while(j < i){
            cout << "# ";
            j++;
        }
        cout << endl;
        i++;
    }
}

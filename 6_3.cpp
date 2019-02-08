#include <iostream>
#include <string>
#include "functions.hpp"

using namespace std;

int hollowsquare(){
    cout << "Geef een afmeting: ";
    int length;
    cin >> length;
    for(int i = 0; i < length; i++){
        if(i == 0 || i == length-1){
            for(int j = 0; j < length; j++){
                cout << "# ";
            }
        }else{
            for(int k = 0; k < length; k++){
                if(k == 0 || k == length-1){
                    cout << "# ";
                }else{
                    cout << "  ";
                }
            }
        }cout << endl;
    }
}

#include <iostream>
#include <string>
#include "functions.hpp"

using namespace std;
int testing() {
    int nummer;
    cout << "Geef een radius:";
    cin >> nummer;
   for(int i = 0; i < 2*nummer + 1; i++){
       for(int j = 0; j < 2*nummer + 1; j++){
           if(abs(nummer-i)*abs(nummer-i) + abs(nummer-j)*abs(nummer-j) > 0.94*nummer*nummer && abs(nummer-i)*abs(nummer-i) + abs(nummer-j)*abs(nummer-j) <1.06*nummer*nummer){
               cout << " #";
           }else{
               cout << "  ";
           }
       }cout << endl;
   }
}
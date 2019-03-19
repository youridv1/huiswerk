#include<iostream>
#include<string>
#include"functions.hpp"
#include<vector>
#include <numeric>
using namespace std;

void Vectorinput(){
    vector<int> lijst;
    while (true){
        cout << "Geef een getal: ";
        int temp = 0;
        cin >> temp;
        if(temp < 0){
            break;
        }else{
            lijst.push_back(temp);
        }
    }
    if(sortcontrole(lijst) == 1){
        cout << "De lijst is gesorteerd." << endl;
    }else{
        cout << "De lijst is niet gesorteerd." << endl;
    }
    cout << "De gemiddelde waarde is: " << accumulate(lijst.begin(), lijst.end(), 0.0)/lijst.size() << endl;
    cout << "De lijst bevat " << lijst.size() << " getal(len).";
}

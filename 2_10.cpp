#include<iostream>
#include<string>
#include"functions.hpp"
#include<vector>
using namespace std;

void eennulvoorwaarde(const vector<int> & binair){
    int nullen = teller(binair, 0);
    int eenen = teller(binair, 1);
    int foutcode = -1;
    if(eenen <= nullen){
        cout << "Deze vector bestaat niet voor de meerderheid uit eenen!" << endl;
        foutcode = 0;
    }
    if(nullen > 12){
        cout << "Er zitten meer dan 12 nullen in deze vector!" << endl;
        foutcode = 0;
    }
    if(foutcode == -1){
        cout << "Deze vector voldoet aan de voorwaarden!";
    }
}
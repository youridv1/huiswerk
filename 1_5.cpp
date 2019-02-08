#include <iostream>
#include <string>
#include "functions.hpp"

using namespace std;

int hoofdletterding() {
    char letter;
    char outputc;
    int outputi;
    cout << "Geef een character: ";
    cin >> letter;
    outputc = letter + 32;
    outputi = letter + 32;
    cout << letter << " + 32 = " << outputi << "\n";
    cout << letter << " + 32 = " << outputc;
}


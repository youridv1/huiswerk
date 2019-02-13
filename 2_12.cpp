#include<iostream>
#include<string>
#include"functions.hpp"
using namespace std;

int omdraaier(){
    char temp;
    string str;
    cout << "Voer een string in: ";
    getline(cin, str);
    unsigned int j = str.size() - 1;
    for (unsigned int i = 0; i < j; i++,j--){
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
    cout << "Omgekeerd: " << str;
}
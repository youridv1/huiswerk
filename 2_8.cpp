#include<iostream>
#include<string>
#include"functions.hpp"
using namespace std;

int muggenzifter(){
    string een;
    string twee;
    cout << "Geef een zin: ";
    getline(cin, een);
    cout << "Geef een tweede zin: ";
    getline(cin, twee);
    int index = -1;
    int lengteen = een.size();
    int lengtwee = twee.size();
    int grens;
    if(lengteen > lengtwee){
        grens = lengteen;
    }else{
        grens = lengtwee;
    }
    for(unsigned int i=0; i < grens; i++){
        if(een[i] != twee[i]){
            index = i;
            cout << "Het eerste verschil zit op index: " << index << endl;
            break;
        }
    }
    if(index == -1){
        cout << "De zinnen zijn identiek!";
    }
}
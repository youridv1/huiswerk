#include <iostream>
#include <string>
#include "1_6.h"
using namespace std;

int leetspeakgenerator() {
    string sentence;
    cout << "Geef een zin: ";
    getline(cin, sentence);
    int sentencint;

    for(int i=0; i < sentence.size(); i++){
        sentencint = sentence[i];
        if(sentence[i]=='e'){
            sentence[i] = '3';
        }else if(sentence[i]=='l'){
            sentence[i] = '1';
        }else if(sentence[i]=='t'){
            sentence[i] = '7';
        }else if(sentence[i]=='o'){
            sentence[i] = '0';
        }else if(sentencint > 90){
            sentence[i] = sentence[i] - 32;
        }else{
            continue;
        }
    }
    cout << sentence;
}

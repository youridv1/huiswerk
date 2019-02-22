#include <iostream>
#include <bitset>

using namespace std;

char reverse(char & ch){
    char result = (ch & 1);
    cout << bitset<8>(ch) << endl;
    cout << bitset<8>(result) << endl;

    for(int i=0; i<7; i++){
        result <<= 1;
        ch >>= 1;
        result |= (ch & 1);
        cout << bitset<8>(result) << endl;
    }
    return result;
}
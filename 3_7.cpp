#include <iostream>
#include <bitset>

using namespace std;

int getBit(uint8_t b, int n){
    uint8_t mask = 1;
    n = n - 1; // wij beginnen met tellen bij 1, de computer bij 0, dus een -1 zodat men bij het invoeren kan tellen vanaf 1
    mask = mask << n;
    uint8_t result = b & mask;
    result = result >> n;
    return result;
}
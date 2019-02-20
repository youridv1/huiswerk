#include <iostream>
#include <bitset>

using namespace std;

int getBit(uint8_t b, int n){
    uint8_t mask = n;
    mask = mask << 1; // wij beginnen met tellen bij 1, de computer bij 0. Ik moet de mask dus 1 plekje shiften om de setbit op de juiste plek te krijgen.
    uint8_t result = b & mask;
    result = result >> n;
    return result;
}
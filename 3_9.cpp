#include <iostream>
#include "stdlib.h"
#include <vector>
#include <ctime>

using std::vector;
using std::cout;
using std::endl;


void improveLoveMessage(char & message){
    vector<int> indexes;
    srand(time(NULL));
    for (int i = 0; i < 3 ; ++i) {
        int index = rand() % 7;
        cout << index << endl;
        indexes.push_back(index);
    }
    for(size_t j = 0; j < indexes.size(); j++) {
        message = message ^ (1 << indexes[j]);
    }
    cout << message;
}
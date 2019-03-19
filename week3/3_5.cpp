#include <iostream>
#include <vector>

using namespace std;

float victormean(const vector<int> & victor){
    int total = 0;
    int count = 0;
    for(size_t i = 0; i < victor.size(); i++){
        total += victor[i];
        count += 1;
    }
    float result = total / count;
    return result;
}
#include <iostream>
#include <vector>

using namespace std;

float victorvictormean(const vector<vector<int>> & cijfers){
    float total = 0;
    float count = 0;
    for(size_t i = 0; i < cijfers.size(); i++){
        for(size_t j = 0; j < cijfers[i].size(); j++){
            total += cijfers[i][j];
            count++;

        }
    }
    return total / count;
}
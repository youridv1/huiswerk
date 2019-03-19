#include <iostream>
#include <vector>

using std::vector;

vector<int> frequentiekolom(const vector<vector<int>> & cijfers, const int & n){
    vector<int> result;
    for(size_t i = 0; i < cijfers.size(); i++){
        int frequentie = 0;
        for (size_t j = 0; j < cijfers[i].size(); ++j) {
            if(cijfers[i][j] == n){
                frequentie++;
            }
        }
        result.push_back(frequentie);
    }
    return result;
}
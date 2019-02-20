#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> getIndexes(const vector<vector<char>> & charMatrix, const char & c){
    vector<vector<int>> result;
    for (size_t i = 0; i < charMatrix.size(); i++) {
        for (size_t j = 0; j < charMatrix[i].size(); j++) {
        if(charMatrix[i][j] == c){
            int x = i;
            int y = j;
            result.push_back({x, y});
        }
        }
    }
    return result;
}
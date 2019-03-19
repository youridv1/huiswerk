#include <iostream>
#include <vector>

using std::vector;
using std::cout;
using std::endl;

void transpose(vector<vector<int>> & m){
    int tmp;
    for(size_t i = 0; i < m.size(); i++){
        for(size_t j = 0; j < i+1; j++){
            tmp = m[i][j];
            m[i][j] = m[j][i];
            m[j][i] = tmp;
        }
    }
    for(size_t k = 0; k < m.size(); k++){
        for(size_t l = 0; l < m[k].size(); l++){
            cout << m[k][l] << ", ";
        }
        cout << endl;
    }
}

int main() {
	vector<vector<int>> team = { {1,2,3},
				     {4,5,6},
				     {7,8,9}};
	transpose(team);
}

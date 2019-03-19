#include<iostream>
#include<string>
#include<vector>

using namespace std;

void print(){
    vector<vector<int>> mat = { {-1, 0,-1,-1,-1,-1,-1,-1,-1,-1,-1},
                                {-1, 0,-1, 0, 0, 0,-1,-1, 0,-1,-1},
                                {-1, 0,-1, 0,-1,-1,-1, 0, 0, 1,-1},
                                {-1, 0, 0, 0, 0, 0, 0, 0,-1,-1,-1},
                                {-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1}};
    for(unsigned int i = 0; i < mat.size(); i++){
        for(unsigned int j = 0; j < mat[i].size();j++){
            if(mat[i][j] == -1){
                cout << 'x';
            }else{
                cout << mat[i][j];
            }
        }
        cout << endl;
    }
}

int main(){
  print();
}

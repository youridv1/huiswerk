#include <iostream>
#include <vector>

using std::vector;

vector<float> somkolom(const vector<vector<float>> & cijfers){
    vector<float> sommen;
    for(size_t i = 0; i < cijfers.size(); i++){
        float som = 0.0;
        for(size_t j = 0; j < cijfers[i].size(); j++){
            som += cijfers[i][j];
        }
        sommen.push_back(som);
    }
    return sommen;
}
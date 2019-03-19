#include <iostream>
#include <vector>
using namespace std;

float sum(const vector<int> victor, int i){
	if(i == 0){
		return (float) victor[0]/(float)victor.size();
	}
	//cout << (float) victor[i] << " / " << victor.size() << " + " << sum(victor, i-1) << endl;
	return (float) (victor[i]/(float)victor.size()) + sum(victor, i-1);
}

int main(){
	vector<int> victor = {1, 2, 3, 4, 5, 6, 7};
	cout << sum(victor, victor.size()-1) << endl;
}

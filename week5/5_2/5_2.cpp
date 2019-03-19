#include <iostream>
#include <vector>
using namespace std;

int m(vector<int> numbers, int size){
	if(numbers.size() <= 0 || size <= 0){
		cout << "De rij is leeg.";
		exit(0);
	}
	if(size == 1){
		return numbers[0];
	}

	int mmm = m(numbers, size-1);
	if (mmm < numbers[size-1]){
		return mmm;
	}else{
		return numbers[size-1];
	}
}

int main(){
	vector<int> numbers = {6,3,7,3,8,4,34};
	int CTD = m(numbers, numbers.size());
	cout << CTD;
}

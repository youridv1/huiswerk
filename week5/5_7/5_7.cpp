#include <iostream>
#include <vector>
using std::cout;
using std::endl;
using std::vector;


bool gesorteerd(vector<float> lijst, size_t n){
	if(n == 0){
		return 1;
	}else if(gesorteerd(lijst, n-1) == 1 && lijst[n] > lijst [n-1]){
		return 1;
	}else{
		return 0;
	}
}

int main(){
	vector<float> lijst = {1,2,3,4,5,6,7,8,9};
	if(gesorteerd(lijst, lijst.size()-1) == 1){
			cout << "De lijst is gesorteerd" << endl;
	}else{
		cout << "De lijst is niet gesorteerd" << endl;
	}
}

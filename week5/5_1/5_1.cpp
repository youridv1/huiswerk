#include <iostream>
using std::cout;
using std::endl;


int ears(int n_rabbits){
	if(n_rabbits <= 1){
		return n_rabbits * 2;
	}else{
		return 2 + ears(n_rabbits-1);
	}
}

int main(){
	cout << ears(3) << endl;
}

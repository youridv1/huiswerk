#include <iostream>
using namespace std;


int findGCD(int a, int b){
	cout << ".";
	if(a == b){
		return a;
	}
	else if(a>b){
		return findGCD(a-b,b);
	}else{
		return findGCD(a,b-a);
	}
}

int main(){
	int a = 900;
	int b = 280;
	findGCD(a, b);
}

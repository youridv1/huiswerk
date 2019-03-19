#include <iostream>
#include <bitset> 
using namespace std;

char cycle(char ch, int n){
	char r;
	if(n >= 0){
		char a = ch << n;
		char b = ch >> 8-n;
		r = a | b;
	}else{
		char a = ch >> abs(n);
		char b = ch << (8-abs(n));
		r = a | b;
		}
	return r;
}

int main(){
	char letter;
	cout << "Geef character: ";
	cin >> letter;
	int nummer;
	cout << "Geef shift: ";
	cin >> nummer;
	cout << bitset<8>(letter) << endl;
	cout << bitset<8>(cycle(letter, nummer)) << endl;
}

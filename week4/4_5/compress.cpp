#include <fstream>
#include <string>
#include <iostream>

using namespace std;

bool lettercheck(char c){
	string lower = "abcdefghijklmnopqrstuvwxyz";
	string upper = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	for(size_t j = 0; j < 26; j++){
		if(c == lower[j]){
			return 1;
		}
		if(c == upper[j]){
			return 1;
		}
	}
	return 0;
}

void compress(string src_filename, string des_filename) {
	string line;
	string result;
	int index;
	int length;
	ofstream outfile;
	outfile.open(des_filename, ofstream::app);
	ifstream myfile (src_filename);
	if (myfile.is_open()) {
		while (getline (myfile, line)){
			if(line.size() < 2){
				continue;
			}
			for(size_t i=0; i < line.size(); i++) {
				if(lettercheck(line[i]) == 1){
						index = i;
						length = line.size() - (index);
						result = line.substr(index, length);
						break;
				}
			}
			outfile << result << endl;
		}
	}else{
		cout << "Unable to open file" << endl;
	}
	myfile.close();
	outfile.close();
}


int main() {
	compress("source.txt", "destination.txt");
}

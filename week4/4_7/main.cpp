#include <iostream>
#include <string>
#include <vector>
using namespace std;


struct student{
	string naam;
	int leeftijd;
	vector<float> cijfers;
	string huisdier;
};

struct klas{
	string naam;
	vector<student> studenten;
	vector<string> docenten;
};

float klassengemiddelde(const klas & klaas){
	float total = 0;
	float studentaverage = 0;
	float average;
	for(size_t i = 0; i < klaas.studenten.size(); i++){
		studentaverage = 0;
		for(size_t j = 0; j < klaas.studenten[i].cijfers.size(); j++){
			studentaverage += klaas.studenten[i].cijfers[j];
		}
		studentaverage /= klaas.studenten[i].cijfers.size();
		average += studentaverage;
	}
	average /= klaas.studenten.size();
	return average;
}



int main(){
	student stu1 = {"youri", 20, {7, 8, 9}, "geen"};
	student stu2 = {"merel", 18, {7, 8, 9}, "geen"};

	klas kla1 = {"klaas", {stu1, stu2}, {"docent1", "docent2"}};
	cout << klassengemiddelde(kla1) << endl;
}

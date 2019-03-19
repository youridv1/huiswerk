#include <string>
#include <vector>
#include <fstream>
using namespace std;

struct ingredient{
	string name;
	int amount;
};

struct tosti{
	string name;
	vector<ingredient> ingredients;
	int amount;
};

void Tostis2File(vector<tosti> tostis, string fName){
	ofstream tostiFile;
	tostiFile.open(fName, ofstream::app);
	for(unsigned int i=0; i < tostis.size(); i++){
		tostiFile << tostis[i].name << ", ";
		tostiFile << "(";
		for(unsigned int j=0; j < tostis[i].ingredients.size(); j++){
			tostiFile << "[" << tostis[i].ingredients[j].amount;
			tostiFile << "x" << tostis[i].ingredients[j].name << "]";
		}
		tostiFile << "), ";
		tostiFile << tostis[i].amount << "\n";
	}
	tostiFile.close();
}

int main(){
	ingredient cheese	 = {	"kaas"		, 	 4	}	;
	ingredient bread	 = {	"brood"		, 	 2	}	;
	ingredient herring	 = {	"haring"	, 	 1	}	;
	ingredient coffee	 = {	"koffiebonen"	, 	 4	}	;
	ingredient chocolat	 = {	"hagelslag"	, 	50	}	;

	vector<tosti> tostis = {{"Tosti Haring",{bread, cheese, herring}, 0}};
	tostis.push_back({"Tosti koffie", {bread, cheese, coffee}, 2});
	tostis.push_back({"Tosti hagelslag", {bread, chocolat}, 4});

	tostis[2].ingredients.push_back(cheese);
	tostis[0].ingredients[0].amount = 3;
	tostis[0].amount = 1;

	Tostis2File(tostis, "tosti.txt");
}

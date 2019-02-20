#include <iostream>
#include <string>
#include "functions.hpp"
#include <vector>

using namespace std;

int main() {
    //leetspeakgenerator();
    //hoofdletterding();
    //testing();
    //hollowsquare();
    //vierkant();
    //driehoek();
    //omgekeerdedriehoek();
    //piramide();
    //omgekeerdepiramide();
    //vektor();

    //vector<int> n = {1, 2, 3, 4, 5, 6, 7, 4, 4, 8, 9, 4, 4, 4, 0, 0, 4};
    //int number_of_int = teller(n, 4);
    //cout << "Het zijn er " << number_of_int << "\n";

    //vector<float> n = {3.2, 4.3, 16.9, 2.0, 1.9, 14.2, 900.34};
    //float laagste_vd_vector = minimum(n);
    //cout << "De laagste waarde is: " << laagste_vd_vector << "\n";

    //vector<int> n = {1, 2, 3, 4, 5, 6, 7, 4, 4, 8, 9, 4, 4, 4, 0, 0, 4};
    //int verschil = amplitud(n);
    //cout << "Het verschil tussen de hoogste en de laagste waarde is: " << verschil << "\n";

    //muggenzifter();

    //vector<float> n = {3.2, 4.3, 16.9, 2.0, 1.9, 14.2, 900.34, 1};
    //float waardesprong = sprong(n);
    //cout << "Het grootste verschil in deze vector is: " << waardesprong << endl;

    //vector<int> n = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    //eennulvoorwaarde(n);

    //vector<float> n = {3.2, 4.3, 16.9, 2.0, 1.9, 14.2, 900.34};
    //vector<float> m = {3.2, 4.3, 16.9, 2.0, 1.9, 14.2, 900.34};
    //vector<float> uitkomst = SumVectoren(n, m);
    //for(unsigned int i = 0; i < uitkomst.size(); i++){
      //  cout << uitkomst[i] << ", ";
    //}
    //cout << endl;
    //omdraaier();

    //vector<int> n = {1, 2, 3, 4, 5, 6, 7, 4, 4, 8, 9, 4, 4, 4, 0, 0, 4};
    //cout << sortcontrole(n);
    //Vectorinput();
    //piramide2();
    //print();
    //vector<int> n = {1, 2, 3, 4, 5};
    //cout << victormean(n);
    vector<vector<int>> n = {{1, 2, 3, 4, 5},
                     {1, 2, 5, 4, 5},
                     {1, 2, 3, 4, 5},
                     {1, 2, 3, 4, 5},
                     {1, 2, 3, 4, 5}};
    cout << victorvictormean(n);
}
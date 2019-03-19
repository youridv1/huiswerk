#include <iostream>
#include <string>

using namespace std;
void piramide2(){
    cout << "Geef een formaat: ";
    int formaat;
    cin >> formaat;
    int i = 1;
    while(i < formaat + 1){
        int j = 0;
        while(j < i){
            cout << "# ";
            j++;
        }
        cout << endl;
        i++;
    }
    i = 1;
    while(i < formaat + 1){
        int j = 0;
        while(j < formaat - i){
            cout << "# ";
            j++;
        }
        cout << endl;
        i++;
    }
}

int main(){
  piramide2();
}

#include <iostream>

using namespace std;

int stappen() {
    uint64_t count = 0;
    uint64_t getal;
    uint64_t grootste = 0;
    for(uint64_t i = 100000000000; i < 999999999999999999999999999999999999; i++) {
        count = 0;
        getal = i;
        while(getal > 1){
            count++;
            if(getal % 2 == 0){
                getal = getal / 2;
            }else{
                getal = 3 * getal + 1;
            }
        }
        if(count > grootste){
        cout << i << "      " << count << endl;
        grootste = count;
        }
    }
}
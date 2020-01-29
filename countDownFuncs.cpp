#include "countdownFuncs.h"
#include <iostream>
#include <cstdlib>

using namespace std;

Picker::Picker(){
    for(int i = 0; i < 20; i++)
        smallOnes[i] = 1;
    for(int i = 0; i < 4; i++)
        largeOnes[i] = 1;
    // int s = 1;
    // for(int i = 0; i < 20; i++){
    //     smallOnes[i] = s;
    //     s++;
    //     if(s > 10) s = s % 10;
    // }
    // s = 25;
    // for(int i = 0; i < 4; i++){
    //     largeOnes[i] = s;
    //     s+=25;
    // }
};
int* Picker::pickNumbers(int small, int large){
    // srand(time(0));
    // for(int i = 0; i < large; i++){
    //     int l = (rand() % (4 - 1 + 1)) + 1;
    //     cout<<largeOnes[l-1]<<" "; 
    // }
    // for (int i = 0; i < small; i++){
    //     int s = (rand() % (20 - 1 + 1)) + 1;
    //     if(i == small - 1) cout<<smallOnes[s-1]<<endl;
    //     else cout<<smallOnes[s-1]<<" ";
    // }
    int stub[6] = new int{1,1,1,1,1,1};
    return stub;
};
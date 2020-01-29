#ifndef COUNTDOWNFUNCS_H
#define COUNTDOWNFUNCS_H
#include <iostream>
#include <cstdlib>

using namespace std;

class Picker{
    public:
    Picker();
    int* pickNumbers(int small, int large);
    private:
    int smallOnes[20];
    int largeOnes[4];    
};
class Player{
    public:
    
}
class Generator{
    public:
    void createTarget();
};

#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int main(){
    int number, range;
    cin >> number >> range;

    for(int i=0; i<=range; i++)
        cout << pow(number, i) << " ";
    
    return 0;
}
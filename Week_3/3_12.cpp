#include <iostream>
using namespace std;

int main() {
    int num=13, temp=num;

    for(int i=0; i<4; i++){
        
        for(int j=0; j<4; j++){
            cout << num << " ";
            num++;
        }
        cout << endl;
        num=temp-4;
        temp=num;
    }
}
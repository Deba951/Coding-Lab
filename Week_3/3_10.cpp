/*
9 10 11 12
6 7 8
4 5
3
*/

#include <iostream>
using namespace std;

int main() {
    int num=9, n=3, temp=num;

    for(int i=0; i<4; i++){
        
        for(int j=0; j<=n; j++){
            cout << num << " ";
            num++;
        }
        
        num=temp-n;
        n--;
        temp=num;
        cout << endl;
    }
    
    return 0;
}
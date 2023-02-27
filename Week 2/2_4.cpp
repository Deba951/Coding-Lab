#include <iostream>
using namespace std;

int main(){
    int n, p=65;
    cin >> n;

    for(int i=0; i<n; i++){
        if(p>=90)
            p=65;
        cout << char(p) << char(p+1) << char(p) << " ";
        p ++;
    }
}
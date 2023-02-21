#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int n, c=65;
    cin >> n;

    for(int i=0; i<n; i++){
        cout << char(c) << pow(2,i) << " ";
        c++;
        if(c>90)
            c=65;
    }
    return 0;
}
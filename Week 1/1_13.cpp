#include<iostream>
using namespace std;

int main(){
    int n, c=65, d=1;
    cin >> n;

    for(int i=0; i<n; i++){
        cout << char(c) << d << " ";
        c++, d++;

        if(c>90)
            c=65;
        if(d>26)
            d=1;
    }
    return 0;
}
#include<iostream>
using namespace std;

int main(){
    int n, c=65;
    cin >> n;

    for(int i=1; i<=n; i++){
        cout << 'B' << 'C' << char(c) << i << " ";
        c++;
        if(c>90)
            c=65;
    }
}
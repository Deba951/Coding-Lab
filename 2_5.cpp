#include <iostream>
using namespace std;

int main(){
    int n, temp, c=0;
    cin >> n;

    while(n!=0){
        temp=n%10;
        n=n/10;
        c++;
    }
    cout << c;
}
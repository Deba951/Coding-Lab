#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;

int main(){
    int n;
    cin >> n;

    for(int i=0; i<n; i++)
        cout << pow(2, i) << " ";

    return 0;
}
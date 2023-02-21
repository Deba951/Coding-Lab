#include<iostream>
using namespace std;

int main(){
    int n, p=9;
    cin >> n;

    for(int i=0; i<n; i++){
        if(i%2==0)
            cout << "21" << " ";

        else{
            cout << p << " ";
            p+=2;
        }
    }
    return 0;
}
#include<iostream>
using namespace std;

int main(){
    int cnt=3;

    for(int i=1; i<=4; i++){
        
        for(int j=1; j<=i; j++){
            cout << cnt << " ";
            cnt++;
        }
        cout << endl;
    }
}
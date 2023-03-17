#include<iostream>
using namespace std;

int main(){
    int cnt=10;

    for(int i=4; i>0; i--){
        
        for(int j=1; j<=i; j++){
            cout << cnt << " ";
            cnt--;
        }

        cout << endl;
    }
}
#include <iostream>
using namespace std;

int main(){
    int n=7;

    int cnt=1;
        
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            

            if(j<=cnt || j>=n-cnt+1)
                cout << "* ";

            else
                cout << "  ";
        }
        
        if(i<=n/2)
            cnt++;
        
        else
            cnt--;
        
        cout << endl;
    }
}
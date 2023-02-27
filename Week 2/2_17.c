#include <stdio.h>

int isPrime(int x){
    int cnt=0;
    if(x < 2) 
        return 0;

    for(int i=2; i<x; i++){
        if(x%i == 0)
            cnt++;
    }

    if (cnt == 0)
        return 1;
    else 
        return 0;
}

int main(){
    int n, c, d, cnt=0;
    scanf("%d",&n);

    for(int i=2; i<(n+1)/2; i++){
        c = isPrime(i);
        d = isPrime(n-i);

        if (c==1 && d==1){
            printf("%d = %d + %d\n", n, i, n-i);
            cnt++;
        }
    }

    if(cnt==0)
            printf("%d cannot be expressed as sum of two prime numbers.\n",n);
    return 0;
}
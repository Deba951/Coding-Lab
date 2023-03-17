/*
Program 3:A prime number is a whole number greater than 1, whose only two whole-number factorsare 1 and itself. The first few prime numbers are 2, 3, 5, 7, 11 and 13.Given two integers, print the sum of all prime numbers between n1 and n2 (both inclusive).Input: The first line of the input contains an integer t, number of test cases next t lines follow with each line containing two integers n1 and n2OutputFor each test case print the answer in a new line.ExampleInput:

2
1 6
6 6
Output:
10
0
Test Cases:
---------------
1. Valid Input:a) Only integer will be given as input.Constraints:1 < t <= 100 < n1 <= n2 <= 100
2. Invalid inputs:
    a) Negative number (t, n1, or n2)
    b) Fraction
    c) String
3. You should generate output as follows:a) For right output print just the sum to STDOUT without any other text.b) If any error: print 'ERROR' to the STDOUT without any other text.
*/

#include<stdio.h>

int main(){
    int t;
    scanf("%d",&t);

    while(t--){
        int n1, n2;
        scanf("%d %d", &n1, &n2);

        int sum=0;

        if(n1==0)
            n1=n1+2;

        else if(n1==1)
            n1=n1+1;
        
        for(int i=n1; i<=n2; i++){
            int cnt=0;

            for(int j=2; j<i; j++){
                if(i%j==0 ){
                    cnt=1;
                    break;
                }
            }

            if(cnt==0){
                sum+=i;
            }
        
        }
        printf("%d",sum);
    }
    return 0;
}
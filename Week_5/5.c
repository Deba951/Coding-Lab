/*
C Program to find sum of series 1 + 1/2 + 1/3 + 1/4 +... + 1/n.
The value n is positive integer passed to the program as the first command line parameter. 
Write the output to stdout formatted as a floating point number rounded to EXACTLY 2 decimal precision WITHOUT any other additional text. 
Scientific format (such as 1.00E+5) should NOT be used while printing theoutput. 
You may assume that the inputs will be such that the output will not exceed the largestpossible real number that can be stored in a float type variable.
Example
Input:  1
Output: 1
Input:  2
Output: 1.5
Test Cases:--------------
1. VALID INPUTS:
    a) Only positive integer will be given as input through command line argument.
2. INVALID INPUTS:
    a) No command line argument.
    b) More than 1 command line arguments
    c) String
    d) Fraction
    e) Negative number as input argument
3. OUTPUT:
    a) Write the output to stdout formatted as a floating point number rounded toEXACTLY 2 decimal precision WITHOUT any other additional text.For example[./a.out 2] => 1.5b) In case of invalid input print 'ERROR' to the STDOUT without any other additionaltext and terminate.
*/

#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    float sum=0;

    for(int i=1; i<=n; i++)
        sum=sum+(1.0/i);
    
    printf("%.2f", sum);
    return 0;
}
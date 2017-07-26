Given an unsigned integer, swap the adjacent bits in the binary representation of the number, and print the new number formed after swapping. 

Input Format

First line of input contains T - number of test cases. Each of the next T lines contains an unsigned integer N. 

Constraints

1 <= T <= 10000 
0 <= N <= 4*109 

Output Format

For each test case, print the new integer formed after swapping adjacent bits, separated by new line. 

Sample Input

2
10
7

Sample Output

5
11

Explanation

Self Explanatory


#include <iostream>

using namespace std;

int main()
{
    int T;
    cin>>T;
     unsigned int bin;
    for(int i=0;i<T;i++)
    {   unsigned  int X;
        cin>>X;
        bin=0;

        for(int j=0,k=1;(j<31)&&(k<32);j+=2,k+=2)
        {           if((1<<j)&X)
                    if(!((1<<k)&X)){

                    bin=(1<<k)+bin;}
                    if(!((1<<j)&X))
                    if((1<<k)&X){

                    bin=bin+(1<<j);}
                    if((1<<j)&X)
                    if(((1<<k)&X)){

                    bin=(1<<k)+bin+(1<<j);}
        }
        cout<<bin<<endl;

    }
    return 0;
}

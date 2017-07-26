Reverse the bits of a given unsigned integer.

Input Format

First line of input contains T - number of test cases. Each of the next T lines contains an unsigned integer N. 

Constraints

1 <= T <= 10000 
0 <= N <= 4*109 

Output Format

For each test case, print the new integer with the bits reversed, separated by new line.

Sample Input

3
4
6
4000000000

Sample Output

536870912
1610612736
1365623

Explanation

Self Explanatory


 #include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int T,flag;
    cin>>T;
    unsigned int sum=0;
    unsigned int x;
    for(int i=0;i<T;i++)
    {   cin>>x;
        for(int j=0;j<32;j++)
        {
            if((1<<j)&x){
                    flag=1<<(31-j);
                sum=sum+flag;
                }
        }
        cout<<sum<<"\n";
        sum=0;
    }
    return 0;
}

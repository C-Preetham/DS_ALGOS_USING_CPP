#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<climits>
using namespace std;
int test(string o,int s)
{
    int max=INT_MIN;
    for(int j=0;j<s;j++)
    {   int m=1;
        for(int q=j-1,w=j+1;(q>=0)&&(w<s);q--,w++)
        {
            if(o[q]==o[w])
                m+=2;
            else
                break;
        }
        if(max<m)
         {//cout<<"value of m and o[j] and j  "<<m<<"  "<<o[j]<<"  "<<j<<endl;
            max=m;}
    }
    for(int j=0,l=1;l<s-1;j++,l++)
    { 
        int w=j,q=l,n=1;
        if(o[l]==o[j])
            n+=1; w--;q++;
        while((w>=0)&&(q<=s-1))
        {
            
            if(o[q]==o[w]){
                n+=2;w--;q++;}
            else
                break;
        }
        if(max<n){//cout<<"value of n ,o[j] , o[l] and j and l  "<<n<<"  "<<o[j]<<"  "<<"  "<<o[l]<<"  "<<j<<"  "<<l<<endl;
            max=n;}
    }
    return max;
    
}

int main() {
     int T;
    cin>>T;
    for(int i=0;i<T;i++)
    {
        int size;
        cin>>size;
        string o;
        cin>>o;
        cout<<test(o,size)<<endl;
    }
    return 0;
}

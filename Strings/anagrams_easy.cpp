#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<cstring>
using namespace std;
 int a[26];
     int b[26];
string  test(string o,string t)
{       for(int j=0;j<26;j++)
       {
        a[j]=0;b[j]=0;
        }
     if(o.length()!=t.length())
     return "False";
    
     for(int j=0;j<o.length();j++)
     a[o[j]-97]++;
     
     for(int j=0;j<t.length();j++)
     b[t[j]-97]++;
     
      for(int j=0;j<26;j++){
      if(a[j]!=b[j]){
      
      return "False";
      }
      }
     return "True";
    
}

int main() {
    int T;
    cin>>T;
    for(int i =0;i<T;i++)
    {
        string o,t;
        cin>>o;
        cin>>t;
      
        cout<<test(o,t)<<endl;
        
        
    }
    return 0;
}

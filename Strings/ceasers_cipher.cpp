  #include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int k;
    cin >> k;
    for(int i=0;i<n;i++)
    {

        if(((s[i]>=65)&&(s[i]<=90))||((s[i]>=97)&&(s[i]<=122)))
        {  // cout<<s[i]<<" "<<(int)s[i]<<endl;
            for(int j=0;j<k;j++)
            {   if(s[i]>=122)
                s[i]=97;
                else if((s[i]<97)&&(s[i]>=90))
                s[i]=65;
                else
                s[i]++;
               // cout<<s[i]<<endl;
            }
        }

        cout<<s[i];

    }
    return 0;
}

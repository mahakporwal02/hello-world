#include <bits/stdc++.h>
#include <string.h>
using namespace std;

int main()
{
    long long int t,n,x,l=INT_MAX,h=INT_MIN;
    string str;
     cin>>t;
    while(t--)
    {
        cin>>n>>x;
        l=INT_MAX;
        h=INT_MIN;
        cin>>str;
        for(int i=0;i<n;i++)
        {
            if(x>=h)
            h=x;
            if(l>=x)
            l=x;
            if(str[i]=='L')
            x--;
            else
            x++;
        }
        if(x>=h)
        h=x;
        if(l>=x)
        l=x;
        cout<<h-l+1<<endl;
    }
    return 0;
}

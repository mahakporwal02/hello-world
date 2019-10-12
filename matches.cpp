#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a[100],x=100;
        for(int i=0;i<100;i++)cin>>a[i];
        sort(a,a+100);
        
        for(int i=0;i<100;i++)
        {if(a[i]>30)
            {x=i;break;}
        }
        if(x>=60)
        cout<<"yes"<<endl;
        else 
        cout<<"no"<<endl;
    }
    return 0;
}

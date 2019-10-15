#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t!=0)
    {
        int n,i=0,j,d=0,f=0,k;
        cin >> n;
        if(n<=100&&n>=7)
        {
            int p[n];
            for(k=0;k<n;k++)
                cin >> p[k];
            for(j=0;j<n;j++)
            {
                f=0;
                if(j==0)
                    f=5;
                if(j==1)
                    f=4;
                if(j==2)
                    f=3;
                if(j==3)
                    f=2;
                if(j==4)
                    f=1;
                for(i=j>4?j-5:0;i<j;i++)
                {
                    if(p[j]<p[i])
                        f++;
                            
                }
                    if(f==5)
                    d++;
            }
            
            cout <<d<<endl;
        }
        t--;
    }
	return 0;
}

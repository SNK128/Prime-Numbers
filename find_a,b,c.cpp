//https://codeforces.com/problemset/problem/1294/C


#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        
        int a=n,b=n,c=n;
        for(int i=2;i*i<=n;i++)
        {
            if(n%i==0)
            {
                a=i;
                break;
            }
        }
        n=n/a; //32
        for(int i=2;i*i<=n;i++)
        {
            if(n%i==0)
            {
                if(i!=a)
                b=min(b,i);
                
                if((n/i)!=i)
                {
                    if((n/i)!=a)
                    b=min(b,(n/i));
                }
            }
            
        }
        c=n/b;
        
        if(a!=b&&b!=c&&c!=a&&c!=1&&c!=0)
       { 
           cout<<"YES"<<endl;
        cout<<a<<" "<<b<<" "<<c;
           
       }
        else
        cout<<"NO";
        cout<<endl;
    }
    return 0;
}
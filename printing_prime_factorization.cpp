#include <bits/stdc++.h>
using namespace std;

 int N=1000000;
 vector<int> prime(N+1,0);



void createSieve()
{
    for(int i=0;i<=N;i++)
    prime[i]=i;
    
    
    for(int i=2;i*i<=N;i++)
    {
        if(prime[i]==i)
        {
            for(int j=i*i;j<=N;j+=i)
            {
                if(prime[j]==j)
                prime[j]=i;
            }
        }
    }
}

int main()
{
    createSieve();
    int q;
    cin>>q;
    
    while(q--)
    {
        int n;
        cin>>n;
        
        while(n!=1)
        {
            cout<<prime[n]<<" ";
            n/=prime[n];
        }
        cout<<endl;
        
    }

    return 0;
}
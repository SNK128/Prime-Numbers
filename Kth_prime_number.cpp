#include<bits/stdc++.h>
using namespace std;

int N=1000000;
vector<bool> prime(N+1,true);
vector<int> k;

void createSieve()
{
    prime[0]=prime[1]=false;
    for(int i=2;i*i<=N;i++)
    {
        if(prime[i])
        {
            for(int j=i*i;j<=N;j+=i)
            prime[j]=false;
        }
    }

    for(int i=0;i<N;i++)
    if(prime[i])
    k.push_back(i);


}

int main()
{
    createSieve();
    int n;
    cin>>n;

    cout<<k[n-1];

}
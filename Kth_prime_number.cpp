#include<bits/stdc++.h>
using namespace std;


//to find the index of last prime(5*10^6)

// int limit=5*1000000;
// int cnt=0;
// int size=1;
// for(int i=2;;i++)
// {
//     if(sieve[i])
//     cnt++;
    
//     if(cnt==limit)
//     {
//         size=i;
//         break;
//     }
// }
// cout<<size;

//int N=100000000;
int N=86028121;
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
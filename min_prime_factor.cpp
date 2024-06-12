#include<bits/stdc++.h>
using namespace std;

int N=1000000;
vector<int> prime(N+1,1);

void createSieve(){
    prime[0]=prime[1]=false;

    for(int i=2;i*i<=N;i++)
    {
        if(prime[i]==1){
            for(int j=i*i;j<=N;j+=i)
        {
            if(prime[j]!=0);
            prime[i]++;
            
             prime[j]=0;
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

        cout<<prime[n]<<endl;
    }
    
    return 0;
}
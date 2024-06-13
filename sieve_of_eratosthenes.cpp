#include<bits/stdc++.h>
using namespace std;

int n=1000000;
vector<bool> prime(n+1,true);

// //brute force
// void createSieve()
// {
//      prime[0]=prime[1]=false;
//     for(int i=2;i<=n;i++)
//     {
//         if(prime[i]){
//             for(int j=2*i;j<=n;j+=i)
//             prime[j]=false;
//         }
//     }
// }

void createSieve()
{
    prime[0]=prime[1]=false;
    for(int i=2;i*i<=n;i++)
    {
        if(prime[i]){
            for(int j=i*i;j<=n;j++)
            prime[j]=false;
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
  
   if(prime[n]==true)
   cout<<"Prime number";
   else
   cout<<"Not Prime Number";
   }
    return 0;
}
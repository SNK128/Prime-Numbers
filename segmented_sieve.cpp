/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <bits/stdc++.h>
using namespace std;

int N=1000000;
vector<bool> prime(N+1,true);

void createSieve(){
    prime[0]=prime[1]=false;
    for(int i=2;i*i<=N;i++)
    {
        if(prime[i])
        {
            for(int j=i*i;j<=N;j+=i)
            prime[j]=false;
        }
    }
}
vector<int> generatePrimes(int n)
{
    vector<int> ans;
    for(int i=2;i<=n;i++)
    if(prime[i])
    ans.push_back(i);
    
    return ans;
}

int main()
{
    createSieve();
    int q;
    cin>>q;
    while(q--)
    {
        int l,r;
        cin>>l>>r;
        //step 1
        //generate all prime till sqrt(r);
        vector<int> primes=generatePrimes(sqrt(r));
        
        //step 2
        //create a dummy array of size r-l+1 and make every element  1
        vector<int> dummy(r-l+1);
        for(int i=0;i<(l-r+1);i++)
        dummy[i]=1;
        
        //step 3
        //for all prime number ,mark its multiples as false
        for(auto pr:primes) {
            int firstMultiple=(l/pr)*pr;
            
            if(firstMultiple<l)
            firstMultiple+=pr;
            
            
            for(int j=max(firstMultiple,pr*pr);j<=r;j+=pr)
            dummy[j-l]=0;
        }
        
        //step 4
        //get all the primes
        for(int i=l;i<=r;i++)
        if(dummy[i-l]==1)
        cout<<i<<" ";
        
        cout<<endl;
        
    }
    return 0;
}
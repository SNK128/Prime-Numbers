


#include<bits/stdc++.h>
using namespace std;

long long factorSum(int n)
    {
        // Your code goes here  
        if(n==1)
        return 1;
        
        long long ans=0;   //1+30+2+15+3+10+5+6
        for(int i=1;i*i<=n;i++)
        {
            if(n%i==0){
                ans+=i;
            
            if(n/i!=i)
            ans+=(n/i);
            }
            
            
        }
        return ans;
        
    }

int main()
{ 
    

    int q;
    cin>>q;
    while(q--)
    {
        int n;
        cin>>n;
        cout<<factorSum(n)<<endl;
       
    }
    
    return 0;
}
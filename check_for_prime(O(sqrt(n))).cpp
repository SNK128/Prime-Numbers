#include<bits/stdc++.h>

using namespace std;


//TC O(sqrt(n)*log(n)) as sqrt() take extra log(n) in every iteration
bool check_prime(int n)//51
{
    if(n<=1)
    return false;
    
    for(int i=2;i<=sqrt(n);i++)
    if(n%i==0)
    return false;
    
    return true;
}

//TC O(sqrt(n)) as i*i is used
bool check_prime1(int n)
{
    int c=0;
    
    for(int i=1;i*i<=n;i++)
    {
        if(n%i==0)
        {
            c++;
            if((n/i)!=i)
            c++;
        }
    }
    if(c==2)
    return true;
    else 
    return false;
}


int main()
{
    int n;
    cin>>n;


    cout<<"TC O(sqrt(n)*log(n)) as sqrt() take extra log(n) in every iteration"<<endl;
    if(check_prime(n))
    cout<<"YES";
    else
    cout<<"NO";
    cout<<endl;
    
    cout<<"TC O(sqrt(n)) as i*i is used"<<endl;
    if(check_prime1(n))
    cout<<"YES";
    else
    cout<<"NO";
    cout<<endl;
    return 0;
}
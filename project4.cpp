#include<iostream>
using namespace std;
bool check(int n);
int main()
{
    int n,i;
    bool flag=false;
    cout<<"Enter a positive integer: ";
    cin>>n;
    for(i=2;i<=n/2;++i)
    {
        if(check(i))
        {
            if(check(n-i))
            {
                cout<<n<<"="<<i<<"+"<<n-i<<endl;
                flag=true;
            }
        }
    }
    if(!flag)
    {
        cout<<n<<" can't be expressed as sum of two prime numbers.";
    }
    return 0;
}
bool check(int n)
{
    int i;
    bool is=true;
    if(n==0||n==1)
    {
        is=false;
    }
    else
    {
        for(i=2;i<=n/2;++i)
        {
            if(n%i==0)
            {
                is=false;
                break;
            }
        }
    }
    return is;
}

#include<iostream>
using namespace std;

int main()
{
    int c,i,f,d;
    c=sizeof(char);
    i=sizeof(int);
    f=sizeof(float);
    d=sizeof(double);
    cout<<"Size of char is "<<c<<" bytes.\n";
    cout<<"Size of int is "<<i<<" bytes.\n";
    cout<<"Size of float is "<<f<<" bytes.\n";
    cout<<"Size of double is "<<d<<" bytes.\n";
    return 0;
}

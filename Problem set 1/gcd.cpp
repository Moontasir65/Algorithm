#include<iostream>
using namespace std;
int main()
{
    int n,m,r,gcd;
    cout<<"input first number: ";
    cin>>n;
    cout<<"input second number: ";
    cin>>m;

    while(m!=0)
    {

          r=n%m;
          n=m;
          m=r;

    }
    cout<<n;
}

#include<iostream>
using namespace std;
int main()
{
    int n,m,r,gcd;

    cout<<"input first number: ";
    cin>>n;
    cout<<"input second number: ";
    cin>>m;
    int x=n;
    int y=m;

    while(y!=0)
    {

          r=x%y;
          x=y;
          y=r;

    }
  int lcm=float(n*m)/x;
  cout<<lcm;
}

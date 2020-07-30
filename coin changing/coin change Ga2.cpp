#include<iostream>
using namespace std;
void Sort(int ara[],int n)
{
    int i,j,p;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            if(ara[i]>ara[i-1])
            {
                p=ara[i+1];
                ara[i+1]=ara[i];
                ara[i]=p;
            }
        }
    }
}
void coin_change(int coins[], int n, int m)
{
   int cnt[n],i;
   for(i=0;i<n;i++)cnt[i]=0;
   for(i=n-1;i>=0;i--)
   {
       if(coins[i]<=m)
       {
           cnt[i]=m/coins[i];
           m=m%coins[i];
       }
   }
   if(m!=0)
        cout<<"Change is not possible"<<endl;
   else
   {
      cout<<"Coin need:"<<endl;
       for(i=n-1;i>=0;i--)
       {
           if(cnt[i]!=0)
               cout<<" coin :"<<coins[i] << " times "<<cnt[i]<<endl;
       }
   }
}

int main()
{
    int n=5,change=12;
    int coins[]={2,5,3,4,6};
    Sort(coins,n);
    coin_change(coins,n,change);
    return 0;
}

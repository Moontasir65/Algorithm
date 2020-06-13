#include<iostream>
using namespace std;
int main()
{
   int temp,i,n,j,a[4]={4,2,65,7};
   for(i=1;i<4;i++)
   {
      temp=a[i];
      j=i-1;
    while(j>=0&&a[j ]>temp)
    {
       a[j+1]=a[j];
       j--;
    }
    a[j+1]=temp;
   }

   for(i=0;i<4;i++)
      {
         cout<<a[i]<<" ";
      }

   }

   //worst case o(n2)

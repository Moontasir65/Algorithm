#include<iostream>
using namespace std;
int main()
{
   int min,n,a[10],i,j;

   for(i=0;i<10;i++)
   {
      cin>>a[i];
   }

   for(i=0;i<10;i++)
   {
      min=i;
      for(j=i+1;j<10;j++)
      {

        if(a[i]>a[j])
       {
         min=j;
         swap(a[i],a[j]);
       }
      }
   }

   for(i=0;i<10;i++)
   {
      cout<<a[i]<<" ";
   }
}


 //worst case o(n2s)

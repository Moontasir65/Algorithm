#include<iostream>
using namespace std;
int main()
{
   int mid,a[100],data,first=0,last,i,n;
   cout<<"how much number you want to take: ";
   cin>>n;
   for(i=0;i<n;i++)
   {
      cout<<"input array number in index "<<i<<":";
      cin>>a[i];
   }
   cout<<"the number you want to search: ";
   cin>>data;
   while(first<=last)
   {
      last=n-1;
   mid=(first+last)/2;
      if(data==a[mid])
      {
         cout<<"index number is: "<<mid;
          break;
      }
      else if(data>a[mid])
      {
         first=mid+1;
      }
      else
      {
            last=mid-1;

      }

   }
   if(first>last)
   {
      cout<<"the number is not in array";
   }

}

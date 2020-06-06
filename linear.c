#include<stdio.h>
int main()
{
   int a[100],i,n,m;
   int found=0;
   printf("enter the array size:");
   scanf("%d",&n);
   printf("enter the array:\n");
   for(i=0;i<n;i++)
   {
scanf(" %d",&a[i]);
   }
   printf("enter the value for see index number: ");
   scanf("%d",&m);
   for(i=0;i<n;i++)
   {
      if(a[i]==m)
      {
         printf("the index number is:%d",i);
     found=-1;
     break;
      }
   }
   if(found==0)
      {
         printf("  Not found  ");
      }
}


     /*
     best case:o(1)
     worst case:o(n)
     */

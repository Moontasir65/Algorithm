#include<stdio.h>
int main()
{
   int a[100],temp,i,n,m,f=0;
   printf("enter the array size:");
   scanf("%d",&n);
   printf("enter the array:\n");
   for(i=0;i<n;i++)
   {
   scanf("%d",&a[i]);
   }
for(i=0;i<n-1;i++)
{
   for(m=0;m<n-1-i;m++)
   {
      if(a[m]>a[m+1])
      {
      temp=a[m];
      a[m]=a[m+1];
      a[m+1]=temp;
   f=1;
      }
   }
   if(f=0)
   {
      break;
   }
}
for(i=0;i<n;i++)

   printf("%d ",a[i]);

}
/*
best case =o(n)
worst case= o(n2)
*/

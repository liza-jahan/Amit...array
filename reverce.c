// reverse array...task 2
 #include<stdio.h>
 int main()
 {

   int a[100] ,b,c,i,j;
   scanf("%d",&b) ;
   for(i=1;i<=b;i++)
   {
       scanf("%d",&a[i]);
   }

   for(i=b;i>=1;i--)
   {
       printf(" %d ",a[i]);
   }




 }

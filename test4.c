#include <stdio.h>
#include<conio.h>
void main()
{
    int n;float x[10];float y[10];int i;int k=0;float sum=0.0;float f,p,d,s;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%f",&x[i]);
    }
    for(i=1;i<=n;i++)
        scanf("%f",&y[i]);
    scanf("%f",&f);
   float  h=x[2]-x[1];
   d=y[1];
   p=1.0;
   s= (f-x[1])/h;
   printf("%f\n",d);
   for(i=1;i<n;i++)
   {
          printf("%f\n",d);
       int j;
       for(j=1;j<=n-i;j++)
        y[j]=y[j+1]-y[j];
       p=p*(s-i+1)/i;
       d=d+p*y[1];
   }
   printf("%f",d);
   }

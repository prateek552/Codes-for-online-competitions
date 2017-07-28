#include <stdio.h>
#include<conio.h>
void main()
{
    int n,x[10];int y[10];int i;int k=0;float sum=0.0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&x[i]);
        scanf("%d",&y[i]);
    }
    float h=x[1]-x[0];
    n=n-1;
    sum=sum+y[0];
    for(i=1;i<n;i++)
    {
        if(k==0)
        {
            sum=sum+4*y[i];
            k=1;

        }
        else
        {

            sum=sum+2*y[i];
            k=0;
        }

    }
    sum=sum+y[i];
    sum=sum*(h/3);
    printf("%f",sum);

}

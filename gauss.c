#include <stdio.h>
#include<conio.h>
int main()
{
    int n;float a[10][10];int i,j,k;float sum,c;float b[10];;
    printf("input n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=(n+1);j++)
            scanf("%f",&a[i][j]);
    }
    for(j=1;j<=(n);j++)
        for(i=1;i<=(n);i++)
    {
        if(i>j)
        {
        c=a[i][j]/a[j][j];
        for(k=1;k<=n+1;k++)
            a[i][k]=a[i][k]-(c*a[j][k]);
    }}
    b[n]=a[n][n+1]/a[n][n];
    for(i=n-1;i>=1;i--)
    {sum=0.0;
        for(j=i+1;j<=n;j++)
            {sum=sum+a[i][j]*b[j];}
        b[i]=(a[i][n+1]-sum)/a[i][i];
    }
    for(i=1;i<=n;i++)
        printf("%f\n",b[i]);

}

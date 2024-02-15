#include<stdio.h>
void main()
{
    printf("Enter a number \n");
    int a,i,j,k,l,digit,temp;
    scanf("%d", &a);
    int dig[4];
    int combinations[24];
    temp=a;
    for(i=0;i<4;i++)
    {
        dig[i]=temp%10;
        temp/=10;
    }
    int q=0;
    int c=0;
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            for(k=0;k<4;k++)
            {
                for(l=0;l<4;l++)
                {
                        if(i==j || i==k || i==l || j==k || j==l || k==l || k==i ) continue;
                        else
                        {
                        combinations[q]=(1000*dig[i])+(100*dig[j])+(10*dig[k])+dig[l];
                        q++;
                        }
                }
            }
        }
    }
    int h=1;
    for(int w=0;w<24;w++)
    {
        int rep=0;
        for(int e=w+1;e<24;e++)
        {
            if(combinations[w]==combinations[e])
            {rep++;}
        }
        if((combinations[w]>=1000) && (combinations[w]<=9999))
        {
        if(rep==0)
        {
             printf("%d\t%d\n",h, combinations[w]);
             h++;
        }
        }
    }
}
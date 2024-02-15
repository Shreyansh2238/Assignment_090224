#include<stdio.h>
void main()
{
    int num,i,count=0,count2=0,j,s=0;
    printf("Enter the number: ");
    scanf("%d",&num);
    for(i=num;i>0;i=i/10)
    count++; 
    printf("Number of digits :%d\n",count);
    int d[10];
    for(i=0;i<count;i++)
    {
        d[i]=num%10;
        num=num/10;
    }
    for(i=0;i<count;i++)
    {
        int ele=d[i];
        count2=0;
        for(j=i;j<count;j++)
        {
            if(d[j]==ele)
            count2++;
        }
        if(count2==1)
        s=s+ele;
    }
    printf("\nSum of the unique digits of the number: %d",s);
}
#include<stdio.h>
void main()
{
    int num,s=0;
    char ch;
    for(ch='Y';ch!='N'&&ch!='n';scanf(" %c",&ch))
    {
        if(ch=='Y'||ch=='y')
        {
        printf("Provide the number \n");
        scanf("%d",&num);
        if(num%2==0)
        s=s+num;
        }
        else
        printf("Not a valid Input \n");
        printf("Do you want to continue(Y/N): ");
    }
    printf("The Sum is: %d",s);
}
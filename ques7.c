#include<stdio.h>
void main()
{
    int arr[10],i,j,temp;
    for(i=0;i<10;i++)
    {
        printf("Enter the integer of the array:\n");
        scanf("%d",&arr[i]);
    }
    for(i=0;i<10;i++)
    {
        for(j=0;j<10-i-1;j++)
        {
            if(arr[j]>=arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    printf("Sorted array: \n");
    for(i=0;i<10;i++)
    printf("%d\t",arr[i]);
}
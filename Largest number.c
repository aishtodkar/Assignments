/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
//without sorting method
/*
#include <stdio.h>
main()
{
    int a[5],i,l,l2;
    printf("Enter the array elements:\n");
    for(i=0;i<5;i++)
        scanf("%d",&a[i]);
    if(a[0]>a[1])
    {
        l=a[0];
        l2=a[1];
    }
    else
    {
        l=a[1];//l=6
        l2=a[0];//l2=5
    }
    
    for(i=2;i<5; i++)
    {
        if(a[i]>l)//a[2]=20>6//a[3]=1<20//a[4]=3<20
        {
            l2=l;//l2=6
            l=a[i];//l=20
        }
        else if(a[i]>l2)//a[3]=1//a[4]=3<6
        l2=a[i];
    }
    printf("Second largest number:%d\n",l2);//l2=6
}
*/
//using ternary operator
#include<stdio.h>
main()
{
      int a[5],i,l,l2;
    printf("Enter the array elements:\n");
    for(i=0;i<5;i++)
        scanf("%d",&a[i]);
    
    a[0]>a[1]?(l=a[0],l2=a[1]):(l=a[1],l2=a[0]);
    
    for(i=2;i<5; i++)
    {
        a[i]>l?(l2=l,l=a[i]):(a[i]>l2?(l2=a[i]):(a[i]=a[i]));
    }
    printf("Second largest number:%d\n",l2);
}
    


/*
int main()
{
	int arr[5];
	printf("enter 5 elements :");
	for(int j=0;j<5;j++)
	scanf("%d",&arr[j]);
	for(int j=0;j<5;j++)
	{
		for(int n=0;n<4-j;n++)
		{
			if(arr[n]>arr[n+1])
			{
			  int temp=arr[n];
			  arr[n]=arr[n+1];
			  arr[n+1]=temp;
			}
		}
	}
		printf("%d",arr[3]);
}
*/

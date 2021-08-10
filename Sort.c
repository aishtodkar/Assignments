/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

//Insertion Sort

#include<stdio.h>
#define SIZE 5
main()
{
    int ary[SIZE],i,j,temp,k;
    printf("Enter the array elements:\n");
    for(i=0; i<SIZE; i++)
        scanf("%d",&ary[i]);
    
    for(i=1; i<SIZE; i++)
    {
        temp=ary[i];
        for(j=i-1; j>=0&&ary[j]>temp; j--)
            ary[j+1]=ary[j];
        ary[j+1]=temp;
    }
    
    printf("Sorted Array:\n");
    for(i=0; i<SIZE; i++)
        printf("%d\t",ary[i]);
}


/*
//Bubble Sort on Array
#include <stdio.h>
#define SIZE 5
main()
{
    int ary[SIZE],i,j,temp;
    printf("Enter the array elements:\n");
    for(i=0; i<SIZE; i++)
        scanf("%d",&ary[i]);
    
    for(i=SIZE-1; i>=0; i--)
    {
        for(j=0; j<i; j++)
        {
            if (ary[j]>ary[j+1])
            {
                temp=ary[j];
                ary[j]=ary[j+1];
                ary[j+1]=temp;
            }
        }
    }
    
    printf("Sorted Array:\n");
    for(i=0; i<SIZE; i++)
        printf("%d\t",ary[i]);
}
*/

/*
//Selection Sort
#include<stdio.h>
#define SIZE 5
main()
{
    int ary[SIZE],i,j,temp;
    printf("Enter the array elements:\n");
    for(i=0; i<SIZE; i++)
        scanf("%d",&ary[i]);
    
    for(i=1; i<SIZE; i++)
    {
        for(j=0; j<=i; j++)
        {
            if(ary[j]>ary[i])
             {
                temp=ary[j];
                ary[j]=ary[i];
                ary[i]=temp;
             }
        }
    }
    
    printf("Sorted Array:\n");
    for(i=0; i<SIZE; i++)
        printf("%d\t",ary[i]);
}
*/
/*
//Quick Sort

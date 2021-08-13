/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
/*
//Q.1
//swapping numbers
#include<stdio.h>
void swap_num(int *, int *);
main()
{
    int num1,num2;
    printf("Enter the numbers:\n");
    scanf("%d%d",&num1,&num2);
    
    printf("Before swap:\nnum1=%d\tnum2=%d\n",num1,num2);
    swap_num(&num1,&num2);
    printf("After swap:\nnum1=%d\tnum2=%d\n",num1,num2);
}

void swap_num(int *n1, int *n2)
{
    int temp;
    temp=*n1;
    *n1=*n2;
    *n2=temp;
}
*/
/*
//Q.2.
// copying elements from one array to another
#include <stdio.h>
void array_copy(int*,int*,int);
main()
{
    int a[5],b[5],i;

    printf("Enter the array elements:\n");
    for(i=0; i<5; i++)
        scanf("%d",&a[i]);
    array_copy(b,a,5);
    
    printf("Source Array a:\n");
    for(i=0;i<5;i++)
    printf("%d\t",a[i]);

    printf("\nDestination Array b:\n");
    for(i=0;i<5;i++)
    printf("%d\t",b[i]);
    
}

void array_copy(int *b, int *a, int n)
{
    int i;
    for(i=0; i<n; i++)
        b[i]=a[i];
}
*/
/*
//Q.3.
//copying string
#include <stdio.h>
void string_copy(char*,char*);
main()
{
    char s1[10],i;

    printf("Enter the string:\n");
        scanf("%s",s1);
    for(i=0; s1[i]; i++);
    char s2[i];
    string_copy(s2,s1);
    
    printf("Source Array: %s\n",s1);
    printf("\nDestination Array: %s\n",s2);
    
}

void string_copy(char *b, char *a)
{
    int i;
    for(i=0; a[i]; i++)
        b[i]=a[i];
    b[i]=0;
}
*/
/*
//Q.4
//sorting an array using pointer
#include<stdio.h>
#define SIZE 4
void sort_array(int *);
main()
{
    int a[SIZE],i;
    printf("Enter the array element for sort:\n");
    for(i=0; i<SIZE; i++)
        scanf("%d",&a[i]);
    sort_array(a);
    
    printf("\nSorted Array:\n");
    for(i=0; i<SIZE; i++)
        printf("%d\t",a[i]);

}
void sort_array(int *ary)
{
      int i,j,temp;
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

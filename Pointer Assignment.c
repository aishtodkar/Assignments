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
/*
//Q.5
//Add 2d Array

#include<stdio.h>
#include<stdlib.h>
void add_matrix(int **,int **,int ,int);
main()
{
    int r1,c1,r2,c2,i,j;
    int **a,**b;
printf("Enter the number of rows and columns for 1st matrix:\n");
scanf("%d%d",&r1,&c1);
printf("Enter the number of rows and columns for 2nd matrix:\n");
scanf("%d%d",&r2,&c2);
if(r1!=r2 && c1!=c2)
printf("Addition is not possible\n");
else
{
    a=malloc(r1*sizeof(int*));
    for(i=0; i<r1; i++)
        a[i]=malloc(c1*sizeof(int));
    
    b=malloc(r1*sizeof(int*));
    for(i=0; i<r1; i++)
        b[i]=malloc(c1*sizeof(int));

     printf("Enter matrix 1:\n");
    for(i=0; i<r1; i++)
        for(j=0; j<c1; j++)
            scanf("%d",&a[i][j]);

    printf("Enter matrix 2:\n");
    for(i=0; i<r1; i++)
        for(j=0; j<c1; j++)
            scanf("%d",&b[i][j]);
     
 add_matrix(a,b,r1,c1);
}

}
void add_matrix(int **a,int **b, int r1,int c1)
{
    int i,j;
    
    printf("matrix 1:\n");
    for(i=0; i<r1; i++)
        for(j=0; j<c1; j++)
            printf("%d\t",a[i][j]);
    
    
    printf("\nmatrix 2:\n");
    for(i=0; i<r1; i++)
        for(j=0; j<c1; j++)
            printf("%d\t",b[i][j]);
    
    
    int c[r1][c1];
    for(i=0; i<r1; i++)
        for(j=0; j<c1; j++)
        c[i][j]=a[i][j]+b[i][j];
    
    printf("\nAddition of matrix:\n");
    for(i=0; i<r1; i++)
        for(j=0; j<c1; j++)
        printf("%d\t",c[i][j]);
    
    printf("\n");
}
*/
/*
//Q.6
//checking sequence
#include<stdio.h>
#include<stdlib.h>

int check_sequence(int*, int);
main()
{
    int i,n,*a,res;
    printf("Enter the number of elements:\n");
    scanf("%d",&n);
    a=malloc(sizeof(int)*n);
    printf("Enter the sequence:\n");
    for(i=0; i<n; i++)
        scanf("%d",&a[i]);
    res=check_sequence(a,n);
    if(res==1)
        printf("valid\n");
    else
        printf("Invalid\n");
    
}
int check_sequence(int *a, int n)
{
    int i,j,temp,count=0;

    for(i=0; i<n; i++)
    {
        if(a[i]==temp)
        continue;
        
        temp=a[i];
        for(j=i; j<n; j++)
        {
            if(a[i]==a[j])
            count++;
        }
        if(count==a[i])
        {
            count=0;
            continue;
        }
        else
        break;
    }
    if(i==n)
        return 1;
    else 
        return 0;
    
}
*/

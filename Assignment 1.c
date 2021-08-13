/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
//Assignment 1
//finding area and circumference of circle
/*
#include<stdio.h>
#define PI 3.14
main()
{
    float rad, area, circ;
    printf("Enter the radius in cm:\n");
    scanf("%f",&rad);
    area=PI*rad*rad;
    circ=2*PI*rad;
    printf("Area=%f sq.cm\nCircumference=%f cm\n",area,circ);
}
*/
/*
// data types
#include<stdio.h>
main()
{
    printf("size of char:%lu\n",sizeof(char));
    printf("size of int:%lu\n",sizeof(int));
    printf("size of float:%lu\n",sizeof(float));
    printf("size of double:%lu\n",sizeof(double));
    printf("size of short int:%lu\n",sizeof(short int));
    printf("size of long int:%lu\n",sizeof(long int));
    printf("size of long double:%lu\n",sizeof(long double));
}
Output:
size of char:1
size of int:4
size of float:4
size of double:8
size of short int:2
size of long int:8
size of long double:16
*/
/*
#include<stdio.h>
main()
{
    int i=-1;
    char ch=255;
    unsigned char u_ch=255;
    unsigned int u_i=-1;
     printf("signed=%d\t Unsigned=%u\n",ch,u_ch);
     printf("signed=%d\t Unsigned=%u\n",i,u_i);
}
Output:
signed=-1        Unsigned=255
signed=-1        Unsigned=4294967295
*/
/*
//Storage class
//auto
#include<stdio.h>
main()
{
    int a=10;
    printf("In main 1:%d\n",a);
    {
        int a=20;
        printf("In loop:%d\n",a);
    }
    printf("In main 2:%d\n",a);
}
*/
/*
//static
#include<stdio.h>
void print();
main()
{
    print();
    print();
}
void print()
{
    static int i=10;
    i--;
    printf("i=%d\n",i);
}
Output:
i=9
i=8
*/


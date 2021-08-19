/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

/*
// checking LSB is set or not
#include <stdio.h>
main()
{
    int num,pos;
    printf("Enter the number:\n");
    scanf("%d",&num);
    
    printf("Printing number in binary form:\n");
    for(pos=31; pos>=0; pos--)
        printf("%d ",num>>pos&1);
        
    if(num&1)
        printf("\nSet\n");
   else
        printf("\nNot\n");
}
*/


/*
// checking MSB is set or not
#include <stdio.h>
main()
{
    int num,pos;
    printf("Enter the number:\n");
    scanf("%d",&num);
    
    printf("Printing number in binary form:\n");
    for(pos=31; pos>=0; pos--)
        printf("%d ",num>>pos&1);
        
    if(num>>31&1)
        printf("\nSet\n");
   else
        printf("\nNot\n");
}
Output:
Enter the number:

2147483648

Printing number in binary form:

1 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 

Set
*/


/*
// getting nth bit of number
#include <stdio.h>
main()
{
    int num,pos,n;
    printf("Enter the number:\n");
    scanf("%d",&num);
    
    printf("Printing number in binary form:\n");
    for(pos=31; pos>=0; pos--)
        printf("%d ",num>>pos&1);
    
    printf("\nEnter the position:\n");
    scanf("%d",&n);
    
    if(num>>n&1)
        printf("\nSet\n");
   else
        printf("\nClear\n");
}
*/


/*
// Setting a nth bit of a number
#include <stdio.h>
main()
{
    int num,pos,n;
    printf("Enter the number:\n");
    scanf("%d",&num);
    
    printf("Printing number in binary form:\n");
    for(pos=31; pos>=0; pos--)
        printf("%d ",num>>pos&1);

    printf("\nEnter the position of bit to set:\n");
    scanf("%d",&n);
    num=num|(1<<n);

    printf("Printing number in binary form:\n");
    for(pos=31; pos>=0; pos--)
        printf("%d ",num>>pos&1);
    
    printf("\nNew number=%d\n",num);
}
*/


/*
// Clearing a nth bit of a number
#include <stdio.h>
main()
{
    int num,pos,n;
    printf("Enter the number:\n");
    scanf("%d",&num);
    
    printf("Printing number in binary form:\n");
    for(pos=31; pos>=0; pos--)
        printf("%d ",num>>pos&1);

    printf("\nEnter the position of bit to clear:\n");
    scanf("%d",&n);
    num=num&(~(1<<n));

    printf("Printing number in binary form:\n");
    for(pos=31; pos>=0; pos--)
        printf("%d ",num>>pos&1);
    
    printf("\nNew number=%d\n",num);
}
*/


/*
// Toggling a nth bit of a number
#include <stdio.h>
main()
{
    int num,pos,n;
    printf("Enter the number:\n");
    scanf("%d",&num);
    
    printf("Printing number in binary form:\n");
    for(pos=31; pos>=0; pos--)
        printf("%d ",num>>pos&1);

    printf("\nEnter the position of bit for toggleing:\n");
    scanf("%d",&n);
    num=num^(1<<n);

    printf("Printing number in binary form:\n");
    for(pos=31; pos>=0; pos--)
        printf("%d ",num>>pos&1);
    
    printf("\nNew number=%d\n",num);
}
*/


//Swapping two numbers using bitwise ooperators
#include<stdio.h>
main()
{
    int num1,num2;
    printf("Enter the numbers for swapping:\n");
    scanf("%d%d",&num1,&num2);
    printf("Before Swap:\nnum1=%d\tnum2=%d\n",num1,num2);
    num1=num1^num2;
 //   printf("num1=%d\tnum2=%d\n",num1,num2);
    num2=num1^num2;
 //   printf("num1=%d\tnum2=%d\n",num1,num2);
    num1=num1^num2;
    printf("num1=%d\tnum2=%d\n",num1,num2);
}

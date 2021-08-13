/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
/*
//Q.1
// copying elements from one array to another
#include <stdio.h>

main()
{
    int a[5],b[5],i;

    printf("Enter the array elements:\n");
    for(i=0; i<5; i++)
        scanf("%d",&a[i]);
    for(i=0; i<5; i++)
        b[i]=a[i];
    
    printf("Source Array a:\n");
    for(i=0;i<5;i++)
    printf("%d\t",a[i]);

    printf("\nDestination Array b:\n");
    for(i=0;i<5;i++)
    printf("%d\t",b[i]);
    
}
*/
//Q.4
// finding min and max number from Array
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
    
    printf("Minimum Num:%d\n",ary[0]);
    printf("Maximum Num:%d\n",ary[SIZE-1]);
    
}
*/
/*
//Q.5
//string is palindrome or not
#include<stdio.h>
main()
{
    char s[10];
    int i,j;
    
    printf("Enter the string:\n");
    scanf("%s",s);
    
    for(i=0; s[i]; i++);
    printf("%d\n",i);
    for(j=0,i=i-1; j<i; j++,i--)
    {
        if(s[i]!=s[j])
        break;
    }
    if(i==j)
    printf("String is palindrome.\n");
    else 
    printf("Not\n");
}
*/
//Q.6
// finding first occurance of world
#include<stdio.h>
char* search_word(char*,char*);
main()
{
    char s1[]="hello world data new data",s2[]="data";
     printf("output=%s\n",search_word(s1,s2));
   
}
char* search_word(char*s1, char*s2)
{
 int i,j,k;
    for(i=0; s1[i]; i++)
    {
        for(j=0; s2[j]; j++)
        {
            if(s2[j]==s1[i])
            {
                for(k=i; s2[j]; j++,k++)
                {
                    if(s1[k]!=s2[j])
                        break;
                }
                if(s2[j]==0)
                    return &s1[i];
            }
        }
    }
return 0;
}
*/
/*
//Q.7
//concating two strings 
#include<stdio.h>
main()
{
    char s2[10],s1[25];
    int i,j;
    
    printf("Enter the strings:\n");
    scanf("%s%s",s1,s2);
    
    for(i=0; s1[i]; i++);
    for(j=0;s2[j]; i++,j++)
        s1[i]=s2[j];
    s1[i]=s2[j];
    
    for(i=0; s1[i]; i++);
    printf("Concated string: %s\n",s1);
    printf("length of above string: %d\n",i);
}
*/



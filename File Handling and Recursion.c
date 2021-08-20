/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

//File Handling Assignment
/*
//WAP for create a file, write in it and close it.
#include <stdio.h>
main()
{
    FILE *fp;
    char s[20];
    int i;
    fp=fopen("file","w");
    printf("Enter the data for storing into a file:\n");
    gets(s);
    
    for(i=0; s[i]!=0; i++)
        fputc(s[i],fp);
    fclose(fp);
}
*/
/*
//WAP to read a contents and display on console.
#include <stdio.h>
main()
{
    FILE *fp;
    char ch;
    fp=fopen("file","r");
    if(fp==0)
    {
        printf("File is not present.\n");
        return 0;
    }

    while((ch=fgetc(fp))!=-1)
        printf("%c",ch);

    fclose(fp);
}
*/
/*
//WAP to appendcontent to a file.
#include <stdio.h>
main()
{
    FILE *fp;
    char ch, s[20];
    int i;
    fp=fopen("file","a");
    if(fp==0)
    {
        printf("File is not present.\n");
        return 0;
    }

    printf("Enter the data for appending:\n");
    gets(s);
    
    for(i=0; s[i]!=0; i++)
        fputc(s[i],fp);
    
    fclose(fp);
}
*/
/*
//WAP for copying contents of file1 to file2
#include <stdio.h>
main()
{
    FILE *fp,*fd;
    char ch;
    fp=fopen("file","r");
    if(fp==0)
    {
        printf("File is not present.\n");
        return 0;
    }
    
    fd=fopen("file_1","w");
    
    while((ch=fgetc(fp))!=-1)
        fputc(ch,fd);
    fclose(fd);
    fclose(fp);
}
*/
/*
//WAP for adding all natural numbers between 1-n using recursion

#include<stdio.h>
int add_rec(int);
main()
{
    int n,res;
    printf("Enter the upper limit for addition:\n");
    scanf("%d",&n);
    res=add_rec(n);
    printf("Result=%d\n",res);
}

int add_rec(int n)
{
    static int sum=0;
    if(n)
    {
     sum=sum+n;
     --n;
     add_rec(n);
    }
    else return sum;
}
*/
/*
//WAP for reversing a number using recursion
#include<stdio.h>
int reverse_num(int);
main()
{
    int num,res;
    printf("Enter the number:\n");
    scanf("%d",&num);
    res=reverse_num(num);
    printf("Reversed Number=%d\n",res);
}

int reverse_num(int num)
{
    static int sum=0;
   
    if(num)
    {
        sum=sum*10+num%10;
        reverse_num(num=num/10);
    }
    else return sum;
}
*/
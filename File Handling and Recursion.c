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
//Write a C program to count characters, words and lines in a text file
#include<stdio.h>
#include<stdlib.h>
main()
{
    FILE *fp;
    char ch, *word, *line;
    int count_ch=0, count_word=0, count_line=0;
    
    word=(char*)malloc(sizeof(char)*20);
    line=(char*)malloc(sizeof(char)*50);
    
    fp=fopen("file","r");
    if(fp==0)
    {
        printf("File is not present.\n");
        return 0;
    }
    while((ch=fgetc(fp))!=-1)
        count_ch++;
        
    fseek(fp, 0, SEEK_SET);
    
    while(fgets(line,50,fp))
    count_line++;
    
    rewind(fp);
    
    while(fscanf(fp,"%s", line)!=-1)
    count_word++;
    
    printf("Characters=%d\nWords=%d\nLines=%d\n",count_ch,count_word,count_line);
}
*/
/*
//WAP to compare two files.
#include<stdio.h>
main()
{
    FILE *fp,*fd;
    char ch,ch1;
    fp=fopen("file","r");
    fd=fopen("file_1","r");
    if(fp==0 ||fd==0)
    {
        printf("File is not present.\n");
        return 0;
    }
    while(((ch=fgetc(fp))!=-1)&&((ch1=fgetc(fd))!=-1))
    {
        if(ch!=ch1)
        break;
    }
    if((fgetc(fp)==-1)&&(fgetc(fd)==-1))
        printf("File contents are same.\n");
    else
        printf("Both are different files.\n");
    
    
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

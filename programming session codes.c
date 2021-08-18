/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
/*
//16-08-2021

//concating strings
#include <stdio.h>
main()
{
 //   char s1[50]="new",s2[10]="data";
    char s1[50],s2[10];
    int i,j;
    printf("Enter the 2 strings:\n");
    scanf("%s%s",s1,s2);
    for(i=0; s1[i]; i++);   //traversing till null of s1
    for(j=0; s2[j]; i++,j++)
        s1[i]=s2[j];        //copying s2 @ the end of s1
    s1[i]=s2[j];            //adding null @ the end of s1
    printf("string: %s\n",s1);
    for(i=0; s1[i]; i++);
    printf("length of string:%d\n",i);
}
*/

//18-08-2021
//WAP to read an input string from the user and return the total //number of consonants in the string - using pointer.

#include<stdio.h>
#include<stdlib.h>
int consonants_check(char*);
main()
{
    char *s;
    int res;
    s=(char*)malloc((sizeof(char))*40);
    printf("Enter the string:\n");
    scanf("%s",s);
    res=consonants_check(s);
    printf("count=%d\n",res);
}
int consonants_check(char *s)
{
    int i,count=0;
    for(i=0; s[i]; i++)
    {
        if((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z'))
        {
            if(s[i]!='a'&& s[i]!='e'&& s[i]!='o'&&s[i]!='u'&&s[i]!='i')
            count++;
        }
    }
 //   printf("%d\n",count);
    return count;
}
/*

//WAP to read an input string from the user and return the total //number of occurences of a given character (user input) in the //string - using pointer.

#include<stdio.h>
#include<stdlib.h>
int character_count(char*, char);
main()
{
    char *s,ch;
    int res;
    s=(char*)malloc((sizeof (char))*40);
    printf("Enter the strinng:\n");
    scanf("%s",s);
   
    printf("Enter the character:\n");
    scanf(" %c",&ch);
    res=character_count(s, ch);
    printf("count=%d\n",res);
}

int character_count(char *s, char ch)
{
    int i,count=0;
    for(i=0; s[i]; i++)
    {
        if(s[i]==ch)
            count++;
    }
    return count;
}
*/























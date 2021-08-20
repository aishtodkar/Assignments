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
            if(s[i]!='a'&& s[i]!='e'&& s[i]!='o'&&s[i]!='u'&&s[i]!='i')  
            count++;
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
//19-08-2021
/*
Program 2 : WAP for scenario let suppose. You hve a 8 bit temperature sensor . 
In that 0 to 255 data can store.0 indicates -20 and 255 indicates +20 temperature in degree celcius.
So WAP for it. perform some operation on it and get respective temperature in degree celcius.
*/
#include<stdio.h>
main()
{
    unsigned char temp;
    float deg;
    printf("Enter the temperature:\n");
    scanf("%d",&temp);
    deg=(temp/6.359)-20;
    printf("Temperature:%.2f degree celcius",deg);
}

//20-08-2021
//program to check if a number is even or odd and if even : divide it by 2 and if it is odd : double it 
//: only bitwise operators to be used : only positive numbers
/*
#include<stdio.h>
main()
{
    int num;
    printf("Enter the number:\n");
    scanf("%d",&num);
    
    if(num&1)
        num=num<<1;
    else
        num=num>>1;
    printf("Number=%d\n",num);
}
*/
/*
#include<stdio.h>
main()
{
    int num;
    printf("Enter the number:\n");
    scanf("%d",&num);
    
    (num&1)?printf("Number=%d",num<<1):printf("Number=%d\n",num>>1);
    printf("%d\n",num)
}
*/





















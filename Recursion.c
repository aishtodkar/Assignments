
/*
//1. converting decimal number into binary using recursion
#include <stdio.h>
void dec_binary(int );
main()
{
    int num;
    printf("Enter the number:\n");
    scanf("%d",&num);
    dec_binary(num);
//    printf("\n");
//    dec_binary(num);
}

void dec_binary(int num)
{
    static int pos=31;
    if(pos>=0)
    {
        printf("%d ",num>>pos&1);
        pos--;
        dec_binary(num);
    }
    else
        pos=31;
}
*/
/*
//2. program for factorial of number using recursion
#include<stdio.h>
int fact(int );
main()
{
    int num,res;
    printf("Enter the number:\n");
    scanf("%d",&num);
    res=fact(num);
    printf("Factorial of given number=%d\n",res);
}

int fact(int num)
{
    if(num==0)
        return 1;
    else
        return (num*fact(num-1));
}
*/

//3. fibanocci series
#include<stdio.h>
int fib(int );
int main()
{
	int n,num=0,i;
	printf("Enter the number of fibanocci elements:\n");
	scanf("%d",&n);
	for(i=0; i<n; num++,i++)
	printf("%d\t",fib(num));
	printf("\n");
	return 0;
}

int fib(int num)
{
	if (num==0 || num==1)
		return num;
	else
	return(fib(num-1)+fib(num-2));
}
/*
//4. Program for reversing the string using recursion.
#include<stdio.h>
#include<stdlib.h>
int str_len(char *);
//void str_rev(char*,int);
void str_rev(char*, char*);
int main()
{
	int len;
	char str[20],*q;
	q=(char*)malloc((sizeof(char))*20);
	printf("Enter the string:\n");
	scanf("%s",str);	
	len=str_len(str);
	q=(str+len-1);
//	str_rev(str, len-1);
	str_rev(str,q);
	printf("%s\n",str);
	return 0;
}

int str_len(char *s)
{
	if(*s)
	{
		return (1+str_len(s+1));
	}
	else
	return 0;
}
void str_rev(char *s, char *q)
{
	char temp;
	if(s<q)
	{
		temp=*s;
		*s=*q;
		*q=temp;
		str_rev(s+1, q-1);
	}
}
/*
void str_rev(char *s, int len) 
{
	static int i=0;
	char temp;
	if(i<=len)
	{
		temp=s[i];
		s[i]=s[len];
		s[len]=temp;
		i++;
		len--;
		str_rev(s,len);	
	}

}
*/

/*
//5. Program for checking wheather string is palindrome or not?
#include<stdio.h>
#include<stdlib.h>
int str_len(char *);
int str_pal(char*,char*);
//int str_pal(char*,int);
int main()
{
	int len,res;
	char str[20],*q;
	q=(char*)malloc((sizeof(char))*20);
	printf("Enter the string:\n");
	scanf("%s",str);	
	len=str_len(str);
	q=(str+len-1);
	res=str_pal(str, q);
//	res=str_pal(str, len-1);
	if(res==0)
	printf("String is not Palindrome\n");
	else
	printf("String is palindrome\n");
	return 0;
}

int str_len(char *s)
{
	if(*s)
	{
		return (1+str_len(s+1));
	}
	else
	return 0;
}

int str_pal(char *s, char *q) 
{

	if(*s==*q && s<q)
		str_pal(s+1, q-1);
	else if(s==q)
		return 1;
	else return 0;
	
}

/*
int str_pal(char *s, int len) 
{
	static int i=0;
	if(i<len)
	{
		if(s[i]==s[len])
		{
			i++;
			len--;
			str_pal(s,len);
		}	
		else return 0;
	}
	return 1;
	
}
*/

/*
//6. Program for finding first capital letter in the string using recursion.
#include<stdio.h>
#include<stdlib.h>
char str_cap(char*);
//int str_len(char*);
//char str_cap(char*, int);
int main()
{
//	int len;
	char str[20],ch;
	printf("Enter the string:\n");
	scanf("%s",str);
//	len=str_len(str);
//	ch=str_cap(str,len);
	ch=str_cap(str);
	printf("Capital Letter: %c\n",ch);
//	printf("%s\n",str_cap(str));
	return 0;
}

char str_cap(char *s)
{
	if((*s!=0)&&(*s>='A' && *s<='Z'))	
		return *s;
	else if(*s==0)
		return 0;
	else	str_cap(s+1);
}

/*
int str_len(char *s)
{
	if(*s)
	{
		return (1+str_len(s+1));
	}
	else
	return 0;
}
char str_cap(char *s, int len)
{
	static int i=0;
	if(i<len)
	{
		if(s[i]>='A' && s[i]<='Z')
			return s[i];
		else
		{
			i++;
			str_cap(s,len);
		}
	}
	else return 0;
}
*/



/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

//	Assignment No.:2
//Q.1
#include<stdio.h>
#define val 5
main()
{
    int i,j,k;
    printf("Pattern:\n");
    i=1;
    while(i<=val)
    {
        k=val;
        while(k>=i)
        {
            printf(" ");
            k--;
        }
        printf("/");
        j=0;
        while(j<(2*i))
        {
            if(i==val)
                printf("_");
            else
             printf(" ");
            j++;
        }
        printf("\\\n");
        i++;
    }
}


/*
//Q.2  
#include <stdio.h>
int main()
{
	double n1,n2,res;  
	char ch;
	printf("Enter the numbers for operation:
	scanf("%lf%lf",&n1,&n2);
	printf("n1=%lf\nn2=%lf\n",n1,n2);
	printf("Enter your choice:\n1. 'a' for Addition\n2. 's' for Substraction\n");
 	scanf(" %c",&ch);
	switch(ch)
	{
		case 'a':       res=n1+n2;
           			break;
   		case 's':		res=n1-n2;
     					break;
 	}
	if(ch=='a'||ch=='s')
 		printf("%lf\n",res);
	else
 		printf("Wrong choice\n");
}
Output:
Enter the numbers for operation:
23.5
3.14
n1=23.500000
n2=3.140000
Enter your choice:
1. 'a' for Addition
2. 's' for Substraction
a
26.640000

Enter the numbers for operation:
23.5
3.14
n1=23.500000
n2=3.140000
Enter your choice:
1. 'a' for Addition
2. 's' for Substraction
s
20.360000

Enter the numbers for operation:
23.5
3.14
n1=23.500000
n2=3.140000
Enter your choice:
1. 'a' for Addition
2. 's' for Substraction
j
Wrong choice



//Q.3
#include <stdio.h>
int main()
{
	float num,sum;
 	int n,i;
  	printf("Enter the count of numbers that we have to add:\n");
 	scanf("%d",&n);
   	for(i=0,sum=0; i<10 && i<n; i++)
  	{
  		printf("Enter number to add:\t");
  		scanf("%f",&num);
    		if(num<0)
     			continue;
    		sum=sum+num;
   //		num=0;
	}
  	printf("Addition of given numbers=%f\n",sum);
}

#include <stdio.h>
int main()
{
   	float num,sum; 
 	int n,i;
  	printf("Enter the count of numbers that we have to add:\n");
 	scanf("%d",&n);
  	i=0;
 	sum=0;
 	while(i<10 && i<n)
  	{
  		i++;
   		printf("Enter number to add:\t");
   	 	scanf("%f",&num);
   		if(num<0)
     			continue;
    		sum=sum+num;
  	//   	num=0;
	 };
	printf("Addition of given numbers=%f\n",sum);
}

Output:
Enter the count of numbers that we have to add:
5
Enter number to add:    1
Enter number to add:    2
Enter number to add:    -2
Enter number to add:    3
Enter number to add:    4
Addition of given numbers=10.000000

Enter the count of numbers that we have to add:
11
Enter number to add:    1
Enter number to add:    2
Enter number to add:    3
Enter number to add:    4
Enter number to add:    5
Enter number to add:    6
Enter number to add:    7
Enter number to add:    8
Enter number to add:    9
Enter number to add:    10
Addition of given numbers=55.000000



//Q.4
#include <stdio.h>
main()
{ 
 	int n,i,j;
  	printf("Enter the count of number:\n");
 	scanf("%d",&n);
 	for(i=1; i<=n; i++)
  		for(j=1; j<=i; j++)
  			printf("%d\t",i);
}
Output:
Enter the count of number:
4 
1       2       2       3       3       3       4       4       4       4



//Q.5
#include <stdio.h>
main()
{
	int i,e,o;
  	int even[100],
	odd[100];
   	for(i=0,e=0,o=0; i<=100; i++)
 	{	
  		if(i%2==0)
  		{
   			even[e]=i;
        		e++;
   		}
  		else
     		{
 			odd[o]=i;
    			o++;
     		}
 	}
 	printf("Even numbers:\n");
 	for(i=0; i<e; i++)
 		printf("%d\t",even[i]);
 	printf("\noddnumbers:\n");
 	for(i=0; i<o; i++)
 		printf("%d\t",odd[i]);
}

#include <stdio.h>
#include<stdlib.h>
main()
{ 
	int i,e,o; 
 	int *even,*odd;
 	even=(int*)malloc(sizeof(int));
  	odd=(int*)malloc(sizeof(int));
 	for(i=0,e=0,o=0; i<=100; i++)
  	{
  		if(i%2==0)
   		{
      		even=(int*)realloc(even,sizeof(int)*(e+1));
         		even[e]=i;
         		e++;
   		}
  		else
   		{
       		odd=(int*)realloc(odd,sizeof(int)*(o+1));
  			odd[o]=i;
			o++;   
 		}
 	}
 	printf("Even numbers:\n");
 	for(i=0; i<e; i++)
 		printf("%d\t",even[i]);
 	printf("\noddnumbers:\n");
	for(i=0; i<o; i++)
 		printf("%d\t",odd[i]);
}
Output:
Even numbers:
0       2       4       6       8       10      12      14      16      18      20      22      24      26      28      30      32    34       36      38      40      42      44      46      48      50      52      54      56      58      60      62      64      66    68       70      72      74      76      78      80      82      84      86      88      90      92      94      96      98      100
oddnumbers:
1       3       5       7       9       11      13      15      17      19      21      23      25      27      29      31      33    35       37      39      41      43      45      47      49      51      53      55      57      59      61      63      65      67    69       71      73      75      77      79      81      83      85      87      89      91      93      95      97      99
//-----------------------------------------------------------//

*/


   


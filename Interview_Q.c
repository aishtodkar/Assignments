/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

//Interview questions
/*
//Count the set bits in given number.
//Toggling particular bit.
//number is power of 2 or not?
#include <stdio.h>
int count_bit(int );
void toggle_bit(int *, int);
int power_num(int );
void main()
{
    int num,pos, count=0;
    printf("Enter the number:\n");
    scanf("%d",&num);
    count=count_bit(num);
    printf("\nCount of set bits: %d\n", count);
    
    //printf("Enter the position of bit for toggling:\n");
    //scanf("%d",&pos);
    //toggle_bit(&num,pos);
    //count=count_bit(num);
    //printf("\nCount of set bits: %d\n", count);
    
    printf("%d\n",num);
    if(power_num(num))
        printf("Number is power of 2\n");
    else
        printf("Not\n");
}

int count_bit(int num)
{
    int pos, count=0;
    for(pos=31; pos>=0; pos--)
    {
        printf("%d ", num>>pos&1);
        if(num>>pos&1)
            count++;
    }
    printf("\n");
    return count;
}

void toggle_bit(int *num, int pos)
{
    *num=*num^(1<<pos);
}

int power_num(int num)
{
    int c=count_bit(num);
    if(c==1)
        return 1;
    else return 0;
}
*/
/*
//Output prediction
#include<stdio.h>
#include<stdlib.h>
void modify(int *a)
{
    *a=10;
    a=NULL;
}

int main()
{
    int x=5;
    int *p=&x;//assume p=0XFFFF
    printf("%p %u\n",p,x);
    modify(p);
    printf("%p %u\n",p,x);
    printf("%u\n", *p);
    return 0;
}
//0XFFFF 5
//0XFFFF 10
*/
/*
#include<stdio.h>
#include<stdlib.h>
void modify(int **a)
{
    **a=10;
    *a=NULL;
}

int main()
{
    int x=5;
    int *p=&x;//assume p=0XFFFF
    printf("%p %u\n",p,x);
    modify(&p);
    //p=NULL;           //option 1 for modifying p as null pointer
    printf("%p %u\n",p,x);
    return 0;
}
//0XFFFF 5
//nil 10
*/
//diff between mutex and spinlock
//Assume like we have {7,8,9}; how many subsets we can write lin{7,8} 
//do all subsets xor operation 
/*
#include<stdio.h>
#include<stdlib.h>
void scan_array(int *, int);
void print_array(int *, int);
int xor_subset(int *, int);
void main()
{
    int n, *ary,temp;
    
    printf("Enter the number of array elements:\n");
    scanf("%d",&n);
    
    ary=(int*)malloc(sizeof(int)*n);
    scan_array(ary,n);
    print_array(ary,n);
    printf("\nxor=%d\n",xor_subset(ary,n));
}

void scan_array(int *ary, int n)
{
    printf("Enter the array Element:\n");
    for(int i=0; i<n; i++)
        scanf("%d", &ary[i]);
}

void print_array(int *ary, int n)
{
    printf("Array Elements:\n");
    for(int i=0; i<n; i++)
        printf("%d ", ary[i]);
}

//still working on this function

int xor_subset(int *a, int n)
{
    int i,j,*p,temp,k;
    int size=(1<<n)-1;
    p=(int*)malloc(sizeof(int)*size);
    for(i=0,k=0; i<n; i++)//i=0
    {
        temp=a[i];
        p[k]=temp;//k=0-1
        k++;        //k=1
        
        for(j=i+1; j<n; j++,k++)//k=1//2//
        {
           temp=temp^a[j];//1^2//1^2^3//
           p[k]=temp; 
        }
        for(j=i+2; j<n; j++,k++)//k=1//2//
        {
           temp=temp^a[j];//1^2//1^2^3//
           p[k]=temp; 
        }
    }
    print_array(p,size);
    temp=p[0];
    for(i=1; i<size; i++)
        temp=temp^p[i];
    return temp;
}
*/

//farana's interview questions
//Inserting elements in double linked list
/*
#include <stdio.h>
#include<stdlib.h>
	typedef struct double_linked_list
	{
		struct double_linked_list *prev;
		int num;
		struct double_linked_list *next;
	}DLL;

	main()
	{
		DLL *hp,*p,*temp;
		int n, i;
		printf("Enter the number of node:\n");
		scanf("%d",&n); 
		hp=malloc(sizeof(DLL));
		printf("Enter node number:\n");
		scanf("%d", &hp->num);
		hp->prev=0;
		hp->next=0;
		p=hp;
		for(i=1; i<n; i++)
		{
			temp=malloc(sizeof(DLL));
			printf("Enter node number:\n");
			scanf("%d", &temp->num);
			temp->next=0;
			p->next=temp;
			temp->prev=p;
			p=p->next;
		}
		p=hp;
		printf("Printing a nodes:\n");
		while(p)
		{
			printf("%d\n",p->num);
			p=p->next;
		}
	}
}
*/
//Code for reversing the linked list-- single linked list is used.
/*
#include <stdio.h>
#include<stdlib.h>
typedef struct single_linked_list	
{		
	int num;		
	struct single_linked_list *next;

}SLL;

	
main()
	
{
	
	SLL *hp,*p, *temp;
	int n, i;
	printf("Enter the number of node:\n");
	scanf("%d",&n); 
	hp=malloc(sizeof(SLL));
	printf("Enter node number:\n");
	scanf("%d", &hp->num);
	hp->next=0;
	p=hp;
	for(i=1; i<n; i++)
	{
		temp=malloc(sizeof(SLL));
        printf("Enter node number:\n");
		scanf("%d", &temp->num);
		temp->next=0;
		p->next=temp;
		p=p->next;
	}
	p=hp;
	printf("Printing a nodes:\n");		
	while(p)
	{
		printf("%d\n",p->num);
		p=p->next;
	}
}

void reverse_link(SLL **p)
{
    SLL **ptr, *temp;
    int c,i;
    c=count_node(*p);
    ptr=malloc(sizeof(SLL*)*c);
    for(i=0,temp=*p; temp; temp=temp->next, i++)
        ptr[i]=temp;
    //reversing a link
    ptr[0]->next=0;
    for(i=1; i<c; i++)
        ptr[i]->next=ptr[i-1];
    *p=ptr[i-1];
}
*/



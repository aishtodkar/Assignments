/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
//Single Linked List

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
	
	/*
	Output:
	Enter the number of node:
	3
	Enter node number:
	100
	Enter node number:
	200
	Enter node number:
	300
	Printing a nodes:
	100
	200
	300
    */
/*
//Double Linked list
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
    
    Output:
	Enter the number of node:
	3
	Enter node number:
	100
	Enter node number:
	2003
	Enter node number:
	3000
	Printing a nodes:
	100
	2003
	3000
    */
    /*
//Circular Linked List
	#include <stdio.h>
	#include<stdlib.h>			//malloc is declared here
	typedef struct circular_linked_list
	{
		char ch;
		struct circular_linked_list *next;
	}CLL;

	main()
	{
		CLL *hp,*p, *temp;
		int n, i;
		printf("Enter the number of node:\n");
		scanf("%d",&n); 
		hp=malloc(sizeof(CLL));
		printf("Enter node vowel:\n");
		scanf(" %c", &hp->ch);
		hp->next=hp;
		p=hp;
		for(i=1; i<n; i++)
		{
			temp=malloc(sizeof(CLL));
			printf("Enter node vowel:\n");
			scanf(" %c", &temp->ch);
			temp->next=hp;
			p->next=temp;
			p=p->next;
		}
		p=hp;

		if(p!=0)
		{
		printf("Printing a vowels:\n");
		do
		{
			printf("%c\n",p->ch);
			p=p->next;
		}while(p->next!=hp);
		else
		printf("Empty linked list");

	}
    
	Output:
	Enter the number of node:
	5
	Enter node vowel:
	a
	Enter node vowel:
	e
	Enter node vowel:
	i
	Enter node vowel:
	o
	Enter node vowel:
	u
	Printing a vowels:
	a
	e
	i
	o
	u
    */
	


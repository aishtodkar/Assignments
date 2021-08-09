/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include<stdio.h>
#define SIZE 5
typedef struct stack
{
	int data[SIZE];
	int top;
}stk;

void stack_init(stk*);
int check_full(stk*);
int check_empty(stk*);
void push_data(stk*);
void pop_data(stk*);
void print_stack(stk*);
main()
{
stk s;
int ch;
char op;
  	
stack_init(&s);
	do
 
   	{
  
  		printf("Enter your operation choice:\n1.push\n2.pop\n3.print\n");
   
 		scanf("%d",&ch);
   
 		switch(ch)
  
  		{
       
 			case 1: push_data(&s);
   
            				break;
      
  			case 2: pop_data(&s);
       
         				break;
   
     			case 3: print_stack(&s);
       
         				break;
   
     			default:
        
        				printf("You have entered a wrong choice:\n");
   
             				break;
  
  		}
  
  		printf("have you want to do any other opeartion on stack:\n1. if 'yes'press 'y/Y'.\n2. if 'no' press amy key\n");
  
  		scanf(" %c",&op);
  
  	}while(op=='y'|| op=='Y');


}
void stack_init(stk *s)
{
	s->top=-1;
}
int check_empty(stk *s)
{
	if(s->top==-1)
		return 1;
	return 0;
}

int check_full(stk *s)
{
	if(s->top==SIZE-1)
		return 1;
	return 0;
}

void push_data(stk *s)
{
	int num;
	if(check_full(s)!=1)
	{
		printf("Enter the data for stack:\n");
		scanf("%d",&num);
		s->top=s->top+1;
		s->data[s->top]=num;
	}
	else
		printf("Stack is full. Try next time.\n");
}

void pop_data(stk *s)
{
	int num;
	if(check_empty(s)!=1)
	{
		num=s->data[s->top];
		s->top=s->top-1;
		printf("Your stack data:%d\n",num);
	}
	else
		printf("Sorry, Stack is empty\n");
}

void print_stack(stk *s)
{
	int i;
	printf("Stack data:\n");
	for(i=s->top+1;i>=0; i--)
		printf("%d\n",s->data[i]);
}


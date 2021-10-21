/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/


//Detecting loop in sll and finding length of it.

#include <stdio.h>
#include<stdlib.h>
typedef struct single
{
    int num;
    struct single *next;
}sll;

void print_loop_sll(sll *,int );
int detect_loop(sll *);

void main()
{
    sll *hp=0,*temp,*p,*temp1,*loop;
    
    int n,i,l;
    printf("Enter the node number:\n");
    scanf("%d",&n);
    hp=(sll*)malloc(sizeof(sll));
    scanf("%d",&hp->num);
    hp->next=0;

    temp1=hp;
    loop=hp;
    for(i=1; i<n; i++)
    {
        temp=malloc(sizeof(sll));
        scanf("%d",&temp->num);
        temp->next=0;
        temp1->next=temp;
        temp1=temp1->next;
    }
    l=rand()%n;
    for(i=0; i<l; i++)
    loop=loop->next;
    temp1->next=loop;
    print_loop_sll(hp,n);
    printf("Length of loop=%d\n",detect_loop(hp));
}

void print_loop_sll(sll* p,int n)
{
    for(int i=0; i<(2*n); i++)
    {
        printf("%d\t",p->num);
        p=p->next;   
    }
    
}

int detect_loop(sll* p)
{
    int count=0,new,old;
    sll*temp,*temp1,*loop;
    temp=p,temp1=p->next;
    while(temp && temp1 && temp->next)
    {
        if(temp==temp1->next)
        {
            loop=temp;
            new=loop->next->num;
            while(loop!=temp1)
            {
                count++;
                old=new;
                new=loop->num;
                loop=loop->next;
            }
            printf("\nloop is detected between:%d and %d\n",new,old);
            return count;
        }
        temp=temp->next;
        temp1=temp1->next->next;
    }
    return 0;
}


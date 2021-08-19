
/*
//Checking platform is little/Big Endian
#include <stdio.h>
main()
{
    int i=10;
    char *p;
    p=&i;
    if(*p==10)
        printf("Little Endian.\n");
    else
        printf("Big Endian.\n");
}
*/

/*
//WAP declare array of struct with a char data type and initialize it with 'h''e''l''l''o'
//sort an array in alphabetical order--use malloc/calloc
#include<stdio.h>
#include<stdlib.h>
#define SIZE 5
struct data
{
    char ch;
};
void sort_array(struct data **);
main()
{
    struct data *p[SIZE];
    int i;
    for(i=0; i<SIZE; i++)
        p[i]=(struct data*)malloc(sizeof(struct data));
    
    printf("Enter the character:\n");
    for(i=0; i<SIZE; i++)
        scanf(" %c", &p[i]->ch);

    printf("\ncharacters:\n");
    for(i=0; i<SIZE; i++)
        printf("%c\t", p[i]->ch);
    
    sort_array(p);

    printf("\nSorted characters:\n");
    for(i=0; i<SIZE; i++)
        printf("%c\t", p[i]->ch);
}

void sort_array(struct data **p)
{
    int i,j;
    char temp;
    for(i=SIZE-1; i>=0; i--)
    {
        for(j=0; j<i; j++)
        {
            if((p[j]->ch)>(p[j+1]->ch))
            {
                temp=p[j]->ch;
                p[j]->ch=p[j+1]->ch;
                p[j+1]->ch=temp;
            }
        }
    }
}
/*
Output:
Enter the character:

h

e

l

l

o

characters:

h	e	l	l	o	

Sorted characters:

e	h	l	l	o	
*/


/*
//WAP for array of struct contaning student data-name branch cgpa
//and write student_count(),input_data(), print() functions

#include<stdio.h>
#include<stdlib.h>
typedef struct student
{
    char name[20];
    char branch[20];
    float cgpa;
}ST;
int student_count();
void input_data(ST **,int);
void print(ST **,int);
main()
{
    int count,i;
    count=student_count();
    ST *p[count];
    for(i=0; i<count; i++)
        p[i]=(ST*)malloc(sizeof(ST));
    
    input_data(p,count);
    print(p,count);
}

int student_count()
{
    int num;
    printf("Enter the number of students:\n");
    scanf("%d",&num);
    return num;
}

void input_data(ST **p, int n)
{
    int i;
    printf("Enter the student details one by one:\n");
    for(i=0; i<n; i++)
    {
        printf("Student %d:\t",i+1);
        scanf("%s%s%f", p[i]->name, p[i]->branch, &p[i]->cgpa);
    }    
}
void print(ST **p, int n)
{
    int i;
    printf("Student details:\n");
    for(i=0; i<n; i++)
    {
        printf("Student %d:\n",i+1);
        printf("%s\t%s\t%.2f\n", p[i]->name, p[i]->branch, p[i]->cgpa);
    }    
}
*/


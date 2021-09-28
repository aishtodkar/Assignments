
#include<stdio.h>
#include<pthread.h>
#include<unistd.h>
#include<stdlib.h>
typedef struct employee
{
	int id;
	char name[20];
}EMP;
pthread_t t[2];
void * thread_1(void *p)
{
	EMP *e=(EMP*)p;
	printf("Hello in thread:%s\n",(char*)p);
	printf("Thread1 ID:%ld\n",pthread_self());
	printf("Enter the employee details:\n");
	scanf(" %d%s",&e->id,e->name);
	pthread_exit(e);
}
void * thread_2(void *p)
{
	EMP *e=(EMP*)p;
	printf("Hello in thread:%s\n",(char*)p);
	printf("Thread2 ID:%ld\n",pthread_self());
	sleep(10);
	pthread_join(t[1], &e);
	printf("Employee details:\n");
	printf("ID=%d\nName=%s\n",e->id,e->name);
	pthread_exit(0);
}


int main()
{

	int td[2];
	EMP *e1;
	e1=malloc(sizeof(EMP));
	void *ret;
	td[0]=pthread_create(&t[0],0, &thread_1, e1);
	td[1]=pthread_create(&t[1],0, &thread_2, e1);
	printf("Thread created in process ID:%d\n",getpid());
	if(td[0]!=0)
	{
		perror("THREAD:");
		return 0;
	}
	printf("After thread creation\n");
	pthread_join(t[1], &ret);
	if(ret==0)
	printf("Thread terminated successfully:%ls\n",(int*)ret);
	else
	printf("Not");
	
	return 0;
}

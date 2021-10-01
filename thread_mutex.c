
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<pthread.h>

int ary[5]={1,2,3,4,5};
pthread_mutex_t mutex;

void display_ary();

void * thread_1(void *p)
{
	int ret;
	printf("Thread 1 ID:%ld\n",pthread_self());
	ret=pthread_mutex_lock(&mutex);
	if(ret!=0)
	{
		perror("THREAD 1 LOCK:");
		pthread_exit(0);
	}	
	for(int i=0; i<5; i++)
	{
		ary[i]=ary[i]*10;
	}
	ret=pthread_mutex_unlock(&mutex);
	if(ret!=0)
	{
		perror("THREAD 1 UNLOCK:");
		pthread_detach(pthread_self());
	}
	pthread_exit(0);
}

void * thread_2(void *p)
{
	int ret;
	printf("Thread 2 ID:%ld\n",pthread_self());
	ret=pthread_mutex_lock(&mutex);
	if(ret!=0)
	{
		perror("THREAD 2 LOCK:");
		pthread_exit(0);
	}	
	for(int i=0; i<5; i++)
	{
		ary[i]=ary[i]+1;
	}
	ret=pthread_mutex_unlock(&mutex);
	if(ret!=0)
	{
		perror("THREAD 2 UNLOCK:");
		pthread_detach(pthread_self());
	}
	pthread_exit(0);
}

void main()
{

	pthread_t t[2];
	int td[2];
	printf("Process ID:%d\n",getpid());
	printf("Array:\n");
	pthread_mutex_lock(&mutex);
	display_ary();
	pthread_mutex_unlock(&mutex);
	td[0]=pthread_create(&t[0],0,thread_1,0);
	td[1]=pthread_create(&t[1],0,thread_2,0);
	if((td[0]!=0) || (td[1]!=0))
	{
		perror("THREAD:");
		pthread_exit(0);
	}
	
	pthread_join(t[0],0);
	pthread_mutex_lock(&mutex);
	printf("Array:\n");
	display_ary();
	pthread_mutex_unlock(&mutex);
	
	pthread_join(t[1],0);
	pthread_mutex_lock(&mutex);
	printf("Array:\n");
	display_ary();
	pthread_mutex_unlock(&mutex);
	
	pthread_exit(0);
}

void display_ary()
{
	for(int i=0; i<5; i++)
		printf("%d\t",ary[i]);
	printf("\n");
}

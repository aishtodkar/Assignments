

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<pthread.h>

void* thread_1(void *p)
{
	int ret,i,j,count=0;
	printf("Thread ID:%ld\n",pthread_self());

	ret=pthread_detach(pthread_self());
	if(ret!=0)
	{
		perror("THREAD:");
		pthread_exit(NULL);
	}
	printf("Prime numbers:\n");
	for(i=0; i<50; i++)
	{
		for(j=2; j<i; j++)
		{
			if(i%j==0)
				break;
		}
		if(i==j)
		{
			count++;
			printf("%d\n",i);
		}
	}
	printf("Total prime numbers:%d\n",count);
}

void* thread_2(void *p)
{
	int ret,i=10;
	printf("Thread ID:%ld\n",pthread_self());
	ret=pthread_detach(pthread_self());
	if(ret!=0)
	{
		perror("THREAD:");
		pthread_exit(NULL);
	}
	while(i)
	{
		printf("%s\n",(char*)p);
		//sleep(5);
		i--;
	}
}


void main()
{
	pthread_t t[2];
	int tret[2];
	tret[0]=pthread_create(&t[0],0,thread_1,0);
	tret[1]=pthread_create(&t[1],0,thread_2,"Thread 2 Executing");
	if((tret[0]!=0)||(tret[1]!=0))
	{
		perror("THREAD:");
		exit(1);
	}
	printf("Process ID:%d\n",getpid());
	printf("Parent Process ID:%d\n",getppid());
	pthread_exit(NULL);	
}

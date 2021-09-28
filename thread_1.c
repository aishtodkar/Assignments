
#include<stdio.h>
#include<pthread.h>
#include<unistd.h>

void * thread_1(void *p)
{

	printf("Hello in thread:%s\n",(char*)p);
	pthread_exit(0);
}

int main()
{

	pthread_t t;
	int td;
	void *ret;
	td=pthread_create(&t,0, &thread_1, "Thread created");
	printf("thread created.\n");
	if(td!=0)
	{
		perror("THREAD:");
		return 0;
	}
	printf("After thread creation\n");
	pthread_join(t, &ret);
	if(ret==0)
	printf("Thread terminated successfully:%ls\n",(int*)ret);
	else
	printf("Not");
	
	return 0;
}

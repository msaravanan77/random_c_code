
#include <stdio.h>
#include <sys/types.h>
#include <sys/syscall.h>

void t1_func(void)
{
		printf("thread function pid :%d gettid :%d\n", getpid(), syscall(SYS_gettid));
		while(1);
		getchar();
		printf("user input done function\n");
}

void t2_func(void)
{
		printf("thread function pid :%d gettid :%d\n", getpid(), syscall(SYS_gettid));
		while(1);
		getchar();
		printf("user input done function\n");
}

int main()
{
		pthread_t t1, t2;
		int *p;
		printf("M: pid :%d\n", getpid());
		pthread_create(&t1, NULL, t1_func, NULL);
		pthread_create(&t2, NULL, t1_func, NULL);
		pthread_join(t1, &p);
		pthread_join(t2, &p);
		return 0;
}


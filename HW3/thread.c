#include <stdio.h>
#include <pthread.h>

void *thread(void *argp);


void *thread(void *argp)
{
	int *id = (int *)argp;
	int i;

	for (i = 1; i <= 10; i++)
	{
		printf("%d: %d\n", *id, i);
	}

	return;
}

void main()
{
	pthread_t tid1, tid2, tid3;
	int i1 = 1;
	int i2 = 2;
	int i3 = 3;

	pthread_create(&tid1, NULL, thread, (void *)&i1);
	pthread_create(&tid2, NULL, thread, (void *)&i2);
	pthread_create(&tid3, NULL, thread, (void *)&i3);

	pthread_join(tid1, NULL);
	pthread_join(tid2, NULL);
	pthread_join(tid3, NULL);

	printf("Application is finished.\n");
}


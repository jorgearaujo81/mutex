#include <stdio.h>
#include <pthread.h>

#define QTD_THREAD 10

void *increment(void *);

int count = 0;

int main(void)
{
    pthread_t threads[QTD_THREAD];

    for (int i = 0; i < QTD_THREAD; i++)
    {
        if (pthread_create(&threads[i], NULL, increment, NULL))
        {
            printf("thread %d not created", i);
        }
    }

    for (int i = 0; i < QTD_THREAD; i++)
    {
        pthread_join(threads[i], NULL);
        printf("Final Counter = %d\n", count);
    }

        printf("Hello, Word!");

    return 0;
}

void *increment(void *args)
{
    count = count + 1;
    printf("Counter = %d\n", count);
    return args;
}

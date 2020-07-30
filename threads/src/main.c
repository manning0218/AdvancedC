#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <unistd.h>

#define NUM_THREADS 10

int counter = 0; // shared variable 
pthread_mutex_t lock = PTHREAD_MUTEX_INITIALIZER;
pthread_mutex_t cond_lock = PTHREAD_MUTEX_INITIALIZER;
pthread_cond_t cond = PTHREAD_COND_INITIALIZER;

void *update_counter(void *msg) {
    int val = *((int *)(msg));
    if(val % 2 != 0) {
        pthread_cond_wait(&cond, &cond_lock);
        pthread_mutex_unlock(&cond_lock);
    }

    pthread_mutex_lock(&lock);
    printf("message: %d tid: %ld counter: %d\n", val, pthread_self(), counter);
    counter++;
    printf("message: %d tid: %ld counter: %d\n", val, pthread_self(), counter);
    pthread_mutex_unlock(&lock);

    if(counter == NUM_THREADS/2) {
        pthread_cond_broadcast(&cond);
    } 
}

int main() {
    pthread_t threads[NUM_THREADS];
    int vals[NUM_THREADS];

    for(int i = 0; i < NUM_THREADS; i++) {
        vals[i] = i + 1;
        if(pthread_create(&threads[i], NULL, update_counter, (void *) &vals[i]) != 0) {
            perror("Failed to create thread.\n");
            exit(1);
        }
    }

    for(int i = 0; i < NUM_THREADS; i++) {
        pthread_join(threads[i], NULL);
    }

    return 0;
}

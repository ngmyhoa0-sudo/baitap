#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void *thread_func(void *arg) {
    printf("Thread dang chay!\n");
    pthread_exit(NULL);
}

int main() {
    pthread_t tid;
    pthread_attr_t attr;

    /* Khoi tao thuoc tinh */
    pthread_attr_init(&attr);

    /* Set kich thuoc stack = 1MB */
    pthread_attr_setstacksize(&attr, 1024 * 1024);

    /* Set trang thai detach */
    pthread_attr_setdetachstate(&attr, PTHREAD_CREATE_DETACHED);

    /* Tao thread voi thuoc tinh tuy chinh */
    pthread_create(&tid, &attr, thread_func, NULL);

    /* Huy thuoc tinh sau khi dung */
    pthread_attr_destroy(&attr);

    sleep(1);
    return 0;
}

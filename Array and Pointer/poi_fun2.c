#include <stdio.h>

void show(int * param, int len)
{
    int i;
    for(i=0; i<len; i++)
        printf("%d ", param[i]);
    printf("\n");
}

void add(int * param, int len, int add)
{
    int i;
    for(i=0; i<len; i++)
        param[i] += add;
}

int main(void)
{
    int arr[3] = {1, 2, 3};
    add(arr, sizeof(arr) / sizeof(int), 1);
    show(arr, sizeof(arr) / sizeof(int));

    add(arr, sizeof(arr) / sizeof(int), 2);
    show(arr, sizeof(arr) / sizeof(int));

    add(arr, sizeof(arr) / sizeof(int), 3);
    show(arr, sizeof(arr) / sizeof(int));
    return 0;
}
#include <stdio.h>

int main()
{
    int arr[5];
    int *ptr = &arr[0];
    for (int i = 0; i < 5; i++) {
        printf("enter the value of array at place %d : ", i + 1);
        scanf("%d", ptr);
        ptr++;
    }
    for (int i = 0; i < 5; i++) {
        printf("value of array at place %d is %d\n", i + 1, *(ptr + i));
        // ptr++;
    }

    return 0;
}
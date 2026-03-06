/*#include<stdio.h>
int main()
{
    int x = 10;
    int *p = &x;
    int **q = &p;
    printf("%d\n", x);
    printf("%p\n", x);
    printf("%p\n", **q);
    return 0;
}*/
#include <stdio.h>

int main() {
    int *ptr = NULL;

    if (ptr == NULL) {
        printf("Pointer is NULL");
    } else {
        printf("Pointer is not NULL");
    }

    return 0;
}
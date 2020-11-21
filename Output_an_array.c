#include <stdio.h>

void main()
{
    int arr[10];
    int i, *p;

    for (i = 0; i<5; i++) scanf("%d", &arr[i]);

    printf("The array is:");
    printf("{");

    for (p = arr; p<(arr + 4); p++){
        printf("%d,", *p);
        }

    printf("%d",*p);
    printf("}");
}

#include <stdio.h>
int main() {
    int length, width;
    printf("Please input the size:");
    scanf_s("%d %d", &length, &width);
    double arr1[10][50], arr2[10][50],sum = 0,arr_sum[10][50];// Do not set the length and width over this number.
    for (int i = 0; i < length; i++) {
        for (int j = 0; j < width; j++) {
            scanf_s("%lf", &arr1[i][j]);
            scanf_s("%lf", &arr2[i][j]);
        }
    }


    double (*ptr1)[50] = arr1;
    double (*ptr2)[50] = arr2;
    double (*ptr3)[50] = arr_sum;
    for (int i = 0; i < length; i++) {
        for (int j = 0; j < width; j++) {
            *(*(ptr3+i)+j) = *(*(ptr1+i)+j) + *(*(ptr2+i)+j);
            sum += *(*(ptr1+i)+j) + *(*(ptr2+i)+j);
        }
    }
    printf("The sum of all number is : %g\n", sum);
    return 0;
}

#include "stdio.h"
int variables[2];
int a,b;
void sum1(int *ar){
    scanf_s("%d,%d",&a,&b);
    ar[0]=a;
    ar[1]=b;
    int total = ar[0]+ar[1];
    printf("The sum is %d",total);

}
int main(){
   sum1(variables);
}

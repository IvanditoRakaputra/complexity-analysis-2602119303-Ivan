#include <stdio.h>

int main(){
    int i;
    printf("Enter the number of terms in the series: ");
    scanf("%d", &i);

    int sum = 0;
    int a = 1;
    while (a <= i ) {
        sum += a;
        a++;
    }

    printf("The sum of the first %d terms is %d\n", i, sum);
    return 0;
}



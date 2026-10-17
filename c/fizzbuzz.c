#include<stdio.h>
#define MAX 10

int main() {
    int count = 0;
    while (count++ < MAX) {
        bool isdiv = false;
        if(count % 3 == 0) {
            printf("Fizz");
            isdiv = true;
        }
        if (count % 5 == 0) {
            printf("Buzz");
            isdiv = true;
        } else if(!isdiv) {
            printf("%d", count);
        }
        printf("\n");
    }
}

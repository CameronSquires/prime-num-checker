#include <stdio.h>
#include <stdbool.h>

int main() {
    int i, num;
    bool is_prime = true;
    
    printf("Please input an integer (0 Or positive integers only.) : ");
    scanf("%d",& num);

    if (num < 0) {
        main();
    }

    if (num == 0 || num == 1) {
        is_prime = true;
    }

    for (i = 2; i < num; i++) {
        if ((num % i) == 0) {
            is_prime = false;
            break;
        }
    }

    if (is_prime == true) {
        printf("This number is prime!\n");
    }

    else {
        printf("This number is not prime!\n");
    }

    return 0;
}
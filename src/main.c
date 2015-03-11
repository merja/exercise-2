#include <stdio.h>

int fib(unsigned n) {
    return n < 2 ? n : fib(n - 1) + fib(n - 2);
}

int main() {
    printf("%d\n", fib(10));
    printf("%d\n", fib(11));
}

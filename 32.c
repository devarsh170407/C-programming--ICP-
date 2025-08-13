#include <stdio.h>

int main() {
    int sum = 0;
    for (int i = 1; i <= 10; i++) {
        if (i % 2 == 0) {
            sum -= i;
        } else {
            sum += i;
        }
    }
    printf("The total of 1-2+3-4+5-6+7-8+9-10 is: %d\n", sum);
    return 0;
}

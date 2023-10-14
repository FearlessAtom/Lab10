#include <stdio.h>
int main() {
    double done = 0;
    for (double index = 1; index <= 10; index++) {
        double j = 1,result = 0;
        while (j <= 7) {
            double sum = (index + j) / (2 * j);
            result = result + sum;
            j++;}
        done = done + result;}
    printf("The complete result is : %.2lf\n", done);
    return 0;}
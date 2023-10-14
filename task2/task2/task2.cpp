#include <stdio.h>
int main() {
    double bull = 10, cow = 5, calf = 0.5, total;
    for (int bulls = 1; bulls <= 10; bulls++) {
        for (int cows = 1; cows <= 20; cows++) {
            for (int calves = 1; calves <= 200; calves++) {
                total = bull * bulls + cow * cows + calf * calves;
                if (total == 100) {
                    printf("Bulls: %d, Cows: %d, Calves: %d\n", bulls, cows, calves);}}}}
    return 0;}
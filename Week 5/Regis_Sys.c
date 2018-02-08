#include <stdio.h>

int main(void) {

    int age, weight, height, cond1 = 0, cond2 = 0, cond3 = 0, cond4 = 0;
    float avg_age = 0, avg_height = 0, avg_weight = 0;

    for (int i = 0; i < 50; i++) {
        scanf("%d %d %d", &age, &height, &weight);

        if (age >= 20 && height >= 160) cond1++;
        if (age < 20 && (height <= 180 || weight >= 60)) cond2++;
        if (age >= 30 && weight >= 40 && weight <= 80) cond3++;
        if (age < 40 && (weight < 85 || height <= 200)) cond4++;

        avg_age += age;
        avg_height += height;
        avg_weight += weight;

    }

    printf("Age >= 20 and Height >= 160: %d\n", cond1);
    printf("Age < 20 and Height <= 180 or Weight >= 60: %d\n", cond2);
    printf("Age >= 30 and Weight >= 40 and Weight <= 80: %d\n", cond3);
    printf("Age < 40 and Weight < 85 or Height <= 200: %d\n", cond4);
    printf("Average Age: %.0f\n", avg_age / 50);
    printf("Average Height: %.2f\n", avg_height / 50);
    printf("Average Weight: %.2f", avg_weight / 50);

    return 0;
}
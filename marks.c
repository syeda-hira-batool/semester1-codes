#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i;
    float *marks;
    float sum = 0, highest, lowest;

    printf("Enter number of students: ");
    scanf("%d", &n);


    marks = (float *)malloc(n * sizeof(float));

 

    for (i = 0; i < n; i++) {
        printf("Enter mark for student %d: ", i + 1);
        scanf("%f", &marks[i]);
        sum += marks[i];
    }

    highest = marks[0];
    lowest = marks[0];

    for (i = 1; i < n; i++) {
        if (marks[i] > highest)
            highest = marks[i];
        if (marks[i] < lowest)
            lowest = marks[i];
    }

    printf("\nHighest Mark: %.2f\n", highest);
    printf("Lowest Mark : %.2f\n", lowest);
    printf("Class Average: %.2f\n", sum / n);

    free(marks);

    return 0;
}

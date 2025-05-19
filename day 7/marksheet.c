#include <stdio.h>

#define STUDENTS 5
#define SUBJECTS 3

int main() {
    int roll[STUDENTS];
    int marks[STUDENTS][SUBJECTS];
    int total[STUDENTS];

    for (int i = 0; i < STUDENTS; i++) {
        printf("\nEnter details for Student %d\n", i + 1);
        printf("Roll Number: ");
        scanf("%d", &roll[i]);

        total[i] = 0; 

        for (int j = 0; j < SUBJECTS; j++) {
            printf("Enter marks for Subject %d: ", j + 1);
            scanf("%d", &marks[i][j]);
            total[i] += marks[i][j];
        }
    }

    printf("\n%-10s %-10s %-10s %-10s %-10s\n", "Roll No", "Sub1", "Sub2", "Sub3", "Total");
    for (int i = 0; i < STUDENTS; i++) {
        printf("%-10d ", roll[i]);
        for (int j = 0; j < SUBJECTS; j++) {
            printf("%-10d ", marks[i][j]);
        }
        printf("%-10d\n", total[i]);
    }

    return 0;
}

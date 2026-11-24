#include <stdio.h>
#include <string.h>

struct Student {
    int roll_no;
    char name[50];
    int marks[3];
    int total;
    float percentage;
};

int main() {
    int n;

    printf("Enter the number of students: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid number of students.\n");
        return 1;
    }

    struct Student s[n];

    for (int i = 0; i < n; i++) {
        printf("\nEnter details for Student %d:\n", i + 1);
        printf("Enter Roll No: ");
        scanf("%d", &s[i].roll_no);
        getchar();

        printf("Enter Name: ");
        fgets(s[i].name, sizeof(s[i].name), stdin);
        s[i].name[strcspn(s[i].name, "\n")] = '\0';

        s[i].total = 0;
        for (int j = 0; j < 3; j++) {
            printf("Enter marks of Subject %d: ", j + 1);
            scanf("%d", &s[i].marks[j]);
            s[i].total += s[i].marks[j];
        }
        s[i].percentage = s[i].total / 3.0f;
    }

    printf("\n%-10s %-15s %-12s %-12s %-12s %-10s %-12s\n",
           "Roll No", "Name", "Subject: 1", "Subject: 2", "Subject: 3", "Total", "Percentage");
    for (int i = 0; i < n; i++) {
        printf("%-10d %-15s %-12d %-12d %-12d %-10d %-12.2f\n",
               s[i].roll_no, s[i].name, s[i].marks[0], s[i].marks[1], s[i].marks[2],
               s[i].total, s[i].percentage);
    }

    return 0;
}
#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100], temp[100];
    char ch;
    char *ptr;
    int choice;

    do {
        printf("\n========================================\n");
        printf("      STRING OPERATIONS MENU (C)        \n");
        printf("========================================\n");
        printf("1. String Length (strlen)\n");
        printf("2. String Copy (strcpy)\n");
        printf("3. String Concatenation (strcat)\n");
        printf("4. String Comparison (strcmp)\n");
        printf("5. String Comparison - Case Insensitive (strcasecmp)\n");
        printf("6. Find First Occurrence of Character (strchr)\n");
        printf("7. Find Substring (strstr)\n");
        printf("8. Exit\n");
        printf("----------------------------------------\n");
        printf("Enter your choice (1-8): ");

        if (scanf("%d", &choice) != 1) {
            while (getchar() != '\n');
            printf("Invalid input! Please enter a number between 1 and 8.\n");
            continue;
        }
        getchar();

        switch (choice) {
            case 1:
                printf("Enter a string: ");
                fgets(str1, sizeof(str1), stdin);
                str1[strcspn(str1, "\n")] = '\0';
                printf("Length of the string = %zu\n", strlen(str1));
                break;

            case 2:
                printf("Enter source string: ");
                fgets(str1, sizeof(str1), stdin);
                str1[strcspn(str1, "\n")] = '\0';
                strcpy(str2, str1);
                printf("Copied string = %s\n", str2);
                break;

            case 3:
                printf("Enter first string: ");
                fgets(str1, sizeof(str1), stdin);
                str1[strcspn(str1, "\n")] = '\0';
                printf("Enter second string: ");
                fgets(str2, sizeof(str2), stdin);
                str2[strcspn(str2, "\n")] = '\0';

                strcpy(temp, str1);
                strcat(temp, str2);
                printf("Concatenated string = %s\n", temp);
                break;

            case 4:
                printf("Enter first string: ");
                fgets(str1, sizeof(str1), stdin);
                str1[strcspn(str1, "\n")] = '\0';
                printf("Enter second string: ");
                fgets(str2, sizeof(str2), stdin);
                str2[strcspn(str2, "\n")] = '\0';

                int cmp = strcmp(str1, str2);
                if (cmp == 0) {
                    printf("Strings are equal.\n");
                } else if (cmp < 0) {
                    printf("First string is lexicographically smaller than second string.\n");
                } else {
                    printf("First string is lexicographically greater than second string.\n");
                }
                break;

            case 5:
                printf("Enter first string: ");
                fgets(str1, sizeof(str1), stdin);
                str1[strcspn(str1, "\n")] = '\0';
                printf("Enter second string: ");
                fgets(str2, sizeof(str2), stdin);
                str2[strcspn(str2, "\n")] = '\0';

                if (strcasecmp(str1, str2) == 0) {
                    printf("Strings are equal (ignoring case).\n");
                } else {
                    printf("Strings are NOT equal.\n");
                }
                break;

            case 6:
                printf("Enter a string: ");
                fgets(str1, sizeof(str1), stdin);
                str1[strcspn(str1, "\n")] = '\0';
                printf("Enter character to search: ");
                scanf("%c", &ch);
                getchar();

                ptr = strchr(str1, ch);
                if (ptr != NULL) {
                    printf("Character '%c' found at position: %ld\n", ch, (ptr - str1) + 1);
                } else {
                    printf("Character '%c' not found in the string.\n", ch);
                }
                break;

            case 7:
                printf("Enter main string: ");
                fgets(str1, sizeof(str1), stdin);
                str1[strcspn(str1, "\n")] = '\0';
                printf("Enter substring to search: ");
                fgets(str2, sizeof(str2), stdin);
                str2[strcspn(str2, "\n")] = '\0';

                ptr = strstr(str1, str2);
                if (ptr != NULL) {
                    printf("Substring \"%s\" found at position: %ld\n", str2, (ptr - str1) + 1);
                } else {
                    printf("Substring \"%s\" not found.\n", str2);
                }
                break;

            case 8:
                printf("Exiting program...\n");
                break;

            default:
                printf("Invalid choice! Please select between 1 and 8.\n");
        }
    } while (choice != 8);

    return 0;
}
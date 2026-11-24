#include <stdio.h>
#include <time.h>

int isLeapYear(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

int getFirstDayOfYear(int year) {
    struct tm time_in = {0};
    time_in.tm_year = year - 1900;
    time_in.tm_mon = 0;
    time_in.tm_mday = 1;
    mktime(&time_in);
    return time_in.tm_wday;
}

int main() {
    int year;
    const char *months[] = {
        "January", "February", "March", "April", "May", "June",
        "July", "August", "September", "October", "November", "December"
    };
    int daysInMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    printf("Enter year: ");
    if (scanf("%d", &year) != 1 || year < 1900) {
        printf("Please enter a valid year (1900 or later).\n");
        return 1;
    }

    if (isLeapYear(year)) {
        daysInMonth[1] = 29;
    }

    int startDay = getFirstDayOfYear(year);

    printf("\n================ CALENDAR - %d ================\n", year);

    for (int m = 0; m < 12; m++) {
        printf("\n------------------ %s ------------------\n", months[m]);
        printf("  Sun  Mon  Tue  Wed  Thu  Fri  Sat\n");

        for (int space = 0; space < startDay; space++) {
            printf("     ");
        }

        for (int day = 1; day <= daysInMonth[m]; day++) {
            printf("%5d", day);
            if (++startDay > 6) {
                startDay = 0;
                printf("\n");
            }
        }
        if (startDay != 0) {
            printf("\n");
        }
    }

    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int daysInMonth(int month, int year){
    if (month == 2) {
        // Check for leap year
        return (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0)) ? 29 : 28;
    } else if ((month <= 7 && month % 2 == 1) || (month >= 8 && month % 2 == 0)) {
        return 31;
    } else {
        return 30;
    }
}

int dateToDays(int day, int month, int year) {
    int days = 0;

    for (int y = 1; y < year; ++y) {
        days += (isLeapYear(y)) ? 366 : 365;
    }

    for (int m = 1; m < month; ++m) {
        days += daysInMonth(m, year);
    }

    days += day;

    return days;
}

int dateDifference(int day1, int month1, int year1, int day2, int month2, int year2) {
    return abs(dateToDays(day1, month1, year1) - dateToDays(day2, month2, year2));
}

void getDateFromInput(int *day, int *month, int *year) {
    char input[50];
    
    printf("Enter date (DD MM YYYY): ");
    gets(input);

    sscanf(input, "%d %d %d", day, month, year);
}

int main() {
    int day1, month1, year1;
    int day2, month2, year2;

    // Input first date
    getDateFromInput(&day1, &month1, &year1);

    // Input second date
    getDateFromInput(&day2, &month2, &year2);

    // Calculate and display the difference
    int difference = dateDifference(day1, month1, year1, day2, month2, year2);
    printf("The difference between the two dates is %d days.\n", difference);

    return 0;
}
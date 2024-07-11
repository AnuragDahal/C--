// Write a program to find the average expenditure of a company for each month of each year, each year and average over the range of years specified. Use arrays to construct a table, display the table of expenditure and find the sum and average.
#include <stdio.h>

#define YEARS 3
#define MONTHS 12

int main() {
    double expenditure[YEARS][MONTHS] = {
        {1000, 2000, 1500, 1800, 1200, 2100, 1300, 1400, 1700, 1600, 1900, 2000},
        {2100, 2200, 2300, 2400, 2500, 2600, 2700, 2800, 2900, 3000, 3100, 3200},
        {1500, 1600, 1700, 1800, 1900, 2000, 2100, 2200, 2300, 2400, 2500, 2600}
    };

    for (int year = 0; year < YEARS; year++) {
        double total = 0.0;
        for (int month = 0; month < MONTHS; month++) {
            total += expenditure[year][month];
        }
        printf("Average expenditure for year %d = %.2f\n", year + 1, total / MONTHS);
    }

    double grandTotal = 0.0;
    for (int year = 0; year < YEARS; year++) {
        for (int month = 0; month < MONTHS; month++) {
            grandTotal += expenditure[year][month];
        }
    }
    printf("Average expenditure over %d years = %.2f\n", YEARS, grandTotal / (YEARS * MONTHS));

    return 0;
}
// write a program to find the average expenditure of a company for each month of each year ,each year and average over the range of years specified .Use arrays to construct the table of expenditure and find the sum and average!
#include <stdio.h>

#define MAX_YEARS 10
#define MONTHS 12
char months[][10] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};

int main()
{
    int expenditure[MAX_YEARS][MONTHS];
    int start_year, end_year, num_years;
    int total_expenditure = 0, total_months = 0;

    printf("Enter the start year: ");
    scanf("%d", &start_year);

    printf("Enter the end year: ");
    scanf("%d", &end_year);

    num_years = end_year - start_year + 1;

    for (int year = start_year; year <= end_year; year++)
    {
        printf("Enter expenditure for year %d:\n", year);
        for (int month = 0; month < MONTHS; month++)
        {
            printf("Month %d: ", month + 1);
            scanf("%d", &expenditure[year - start_year][month]);
        }
    }

    printf("\n\n");
    printf("%-5s", "Year");
    for (int month = 1; month <= MONTHS; month++)
    {
        printf("%-10s", months[month - 1]);
    }
    printf("%-10s", "Total");
    printf("%-10s", "Average");
    printf("\n");

    for (int year = 0; year < num_years; year++)
    {
        printf("%-5d", start_year + year);
        for (int month = 0; month < MONTHS; month++)
        {
            printf("%-10d", expenditure[year][month]);
            total_expenditure += expenditure[year][month];
            total_months++;
        }
        printf("%-10d", total_expenditure);
        printf("%-10.2f", (float)total_expenditure / total_months);
        printf("\n");
    }

    return 0;
}
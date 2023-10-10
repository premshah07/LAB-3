#include <stdio.h>

void main() {
    int days, years, weeks;
	
    printf("Enter the number of days: ");
    scanf("%d", &days);

    years = days / 365;
	
    days = days % 365;

    weeks = days / 7;
	
    days = days % 7;

    printf("Years: %d\nWeeks: %d\nDays: %d",years , weeks, days);
    
}
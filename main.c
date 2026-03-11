#include <stdio.h>
#include <stdlib.h>
#include <time.h>


struct Date{
    int dd;
    int mm;
    int yy;
};
struct Date date;

struct Reminder{
    int dd;
    int mm;
    char note[60];
};
struct Reminder reminder;



int main(void){
    //get current time
    time_t now = time(NULL);
    struct tm *t = localtime(&now);


    printf("Year: %d\n", t->tm_year + 1900);  // Add 1900 to get the actual year
    printf("Month: %d\n", t->tm_mon + 1);     // Months are numbered from 0 to 11, so add 1 to match real month numbers (1-12)
    printf("Day: %d\n", t->tm_mday);
    printf("Hour: %d\n", t->tm_hour);
    printf("Minute: %d\n", t->tm_min);
    printf("Second: %d\n", t->tm_sec);
    return 0;
}
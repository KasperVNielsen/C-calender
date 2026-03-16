#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//printf("Year: %d\n", t->tm_year + 1900);  // Add 1900 to get the actual year

//printf("Hour: %d\n", t->tm_hour);
    //printf("Minute: %d\n", t->tm_min);
    //printf("Second: %d\n", t->tm_sec);

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


    printf("Month: %d\n", t->tm_mon + 1);     // Months are numbered from 0 to 11, so add 1 to match real month numbers (1-12)
    printf("Day: %d\n", t->tm_mday);
    
    return 0;
}

int getNumberOfDays(int month, int year){
    switch (month)
    {
    case 1 : return(31);
      case 2 : return(31);
      case 3 : return(30);
      case 4 : return(31);
      case 5 : return(30);
      case 6 : return(31);
      case 7 : return(31);
      case 8 : return(30);
      case 9: return(31);
      case 10: return(30);
      case 11: return(31);
      default: return(-1);
}
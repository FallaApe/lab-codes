#include <stdio.h>
void main()
{
        int year,days=0;
        printf("enter year: ");
        scanf("%d",&year);
        if ((year % 400 == 0) || (year % 4 == 0) && (year % 100 != 0)) {
                days=366;
        }
      else {
        days=365;
      }
      int day=(days%7)+1;
      switch(day) {
        case 1: printf("monday");
                break;
        case 2: printf("tuesday");
                break;
        case 3: printf("wednesday");
                break;
        case 4: printf("thursday");
                break;
        case 5: printf("friday");
                break;
        case 6: printf("saturday");
                break;
        case 7: printf("sunday");
                break;
      }
}
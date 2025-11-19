#include <stdio.h>
union address {
    char home_address[50];
    char hostel_address[50];
    char city[50];
    char state[50];
    int zip;
};

void main() {
    union address a;
    printf("enter home address: ");
    scanf("%s", a.home_address);
    printf("enter hostel address: ");
    scanf("%s", a.hostel_address);
    printf("enter city: ");
    scanf("%s", a.city);
    printf("enter state: ");
    scanf("%s", a.state);
    printf("enter zip code");
    scanf("%d",a.zip);

    printf("your present address is :\n");
    printf("%s\n",a.hostel_address);
    printf("%s\n",a.city);
    printf("%s\n",a.state);
    printf("%d\n",a.zip);
}
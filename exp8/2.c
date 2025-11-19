#include <stdio.h>

struct emp
{
    char name[50];
    int pay;
    float DA;
    float gross;
};

void main()
{
    struct emp e1;
    for (int i = 1; i <= 100; i++)
    {
        printf("Enter employee name: ");
        scanf("%s", e1.name);

        printf("Enter employee pay: ");
        scanf("%d", &e1.pay);

        e1.DA = e1.pay * 0.52;
        e1.gross = e1.pay + e1.DA;
        printf("Employee Name: %s, Gross Salary: %.2f\n", e1.name, e1.gross);
    }
}

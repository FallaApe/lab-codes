/*#include <stdio.h>
void main() {
    int l1,b1;
    printf("enter length and breadth for 1st rectangle: ");
    scanf("%d%d",&l1,&b1);
    int peri1 = (l1*l1)+(b1*b1);

    int l2,b2;
    printf("enter length and breadth for 2nd rectangle: ");
    scanf("%d%d",&l2,&b2);
    int peri2 = (l2*l2)+(b2*b2);

    int l3,b3;
    printf("enter length and breadth for 3rd rectangle: ");
    scanf("%d%d",&l3,&b3);
    int peri3 = (l3*l3)+(b3*b3);

    int l4,b4;
    printf("enter length and breadth for 4th rectangle: ");
    scanf("%d%d",&l4,&b4);
    int peri4 = (l4*l4)+(b4*b4);

    int largest = (peri1 > peri2) ? ((peri1 > peri3) ? (peri1 > peri4 ? peri1 : peri4) : (peri3 > peri4 ? peri3 : peri4)) : ((peri2 > peri3) ? (peri2 > peri4 ? peri2 : peri4) : (peri3 > peri4 ? peri3 : peri4));
    if (largest == peri1) {
        printf("1st rectangle has largest perimeter");
    }
    else if (largest == peri2) {
        printf("2nd rectangle has largest perimeter");
    }
    else if (largest == peri3) {
        printf("3rd rectangle has largest perimeter");
    }
    else {
        printf("4th rectangle has largest perimeter");
    }
}*/

#include <stdio.h>
void main() {
    int a;
    int largest_peri = 0; 
    int l, b;
    printf("How many rectangles do you want: ");
    scanf("%d", &a);
    if (a < 3) {
        printf("Number of rectangles should be at least 3\n");
        return; 
    }
    for (int i = 1; i <= a; i++) {
        printf("Enter length and breadth of rectangle %d: ", i);
        scanf("%d %d", &l, &b);
        int peri = 2 * (l + b);
        largest_peri = (peri > largest_peri) ? peri : largest_peri;
    }
    printf("The largest perimeter among the %d rectangles is: %d\n", a, largest_peri);
}

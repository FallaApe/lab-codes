#include <stdio.h>

int main() {
    int a;
    printf("how many rectangles do u want: ");
    scanf("%d", &a);
    
    int largest_peri = 0;
    int rect_num = 0;
    int l, b;
    
    
    for (int i = 1; i <= a; i++) {
        printf("enter length and breadth: ");
        scanf("%d %d", &l, &b);
        
        int peri = 2 * (l + b); 
        
        
        if (peri > largest_peri) {
            largest_peri = peri;
            rect_num = i;
        }
    }

    
    printf("The largest perimeter is %d and it belongs to rectangle number %d.\n", largest_peri, rect_num);

    return 0;
}
#include <stdio.h>
void main() {
    float weight,height;
    printf("enter weight and height (in kg and meters): ");
    scanf("%f%f",&weight,&height);
    float BMI=weight/(height*height);

    if (BMI < 15) {
        printf("Starvation");
    }

    else if (BMI > 15.1 && BMI < 17.5) {
        printf("Anorexic");
    }

    else if (BMI > 17.6 && BMI < 18.5) { 
        printf("Underweight");
    }

    else if (BMI > 18.6 && BMI < 24.9) {
        printf("ideal");
    }
    else if (BMI > 25 && BMI < 25.9) {
        printf("Overweight");
    }
    else if (BMI > 30 && BMI < 39.9) {
        printf("Obese");
    }
    else {
        printf("Morbidity Obese");
    }
}
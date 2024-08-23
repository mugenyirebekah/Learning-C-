//Lesson 3
// Adding two input integers

#include <stdio.h>

int main(){

    int number1, number2, sum;

    printf("Enter any two integers to add: ");
    scanf("%d %d", &number1, &number2);

    sum = number1 + number2;

    printf("%d + %d = %d", number1, number2, sum);


    return 0;
}
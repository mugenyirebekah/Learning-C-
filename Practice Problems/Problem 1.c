//Problem 1 - Read your year of birth and print your age.

#include <stdio.h>

int main(){

    int birth_year;
    const int current_year = 2024;

    printf("Enter your year of birth: ");
    scanf("%d", &birth_year);

    int age = current_year - birth_year;

    printf("You are %d years old", age)
}
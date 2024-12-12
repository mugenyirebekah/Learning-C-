#include <stdio.h>

int main(){

    int x; //declaration

    x =  123; //initializtion

    int y = 321; // declaration and initialization

    int age = 21;

    float gpa = 2.05; //floating point number
    char grade = 'C';    //char stores single characters
    char name[] = "Bro"; //array of characters


    printf("Hello %s \n", name);

    printf("You are %d years old\n", age);

    printf("Your average grade is %c\n", grade);

    printf("Your gpa is %f \n", gpa);


    return 0;
}
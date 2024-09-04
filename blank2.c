// #include <stdio.h>
// #include <stdbool.h>

// int main(){

//     bool value1 = true;
//     bool value2 = false;

//     printf("%d ", value1);
//     printf(" %d", value2);

//     return 0;
// }





// #include <stdio.h>
// #include <stdbool.h>

// int main (){

//     bool value = (15 <= 3);
//     printf("%d", value);


//     return 0;
// }






// #include <stdio.h>
// #include <stdbool.h>

// int main () {

//     int num1 = 9;
//     int num2 = 6;

//     bool value = num1 > num2;

//     printf("%d", value);

//     return 0;
// }



//1:07:53

/* 
LOGICAL OPERATORS

&&  - AND

|| - OR

! - NOT

 */ 


// #include <stdio.h>
// #include <stdbool.h>

// int main(){


//     int age = 18;
//     double height = 6.3;

//     bool result = (age >= 18) && (height > 6.0);
//   //  bool result = (age >= 18) || (height > 6.0);
//   //  bool result = !(age >= 18) 
//     printf("%d", result);
//     return 0;
// }





/*1:13:15*/

// #include <stdio.h>

// int main (){
//     int age;

//     printf("what is your age?");
//     scanf("%d", &age);


//     if (age >=18){
//         printf("You are eligible to vote");
//     }

//     else{
//         printf("You can't vote YET");
//     }
//     return 0;
// }






//#include <stdio.h>

// int main (){
//     int age;

//     printf("What is your age?");
//     scanf("%d", &age);

//     if(age >= 18){
//         printf("congrats! You can vote");
//     }

//     if(age <18){
//         printf("Can't vote YET");
//     }


//     return 0;
// }

// #include <stdio.h>
// #include <stdbool.h>

// int main(){
//     int age;

//     printf("What is your age?");
//     scanf("%d", &age);

//     bool result = (age > 18);

//     printf("You are %d?", age);
//     printf("\n");
//     printf("%d", result);

//     return 0;
// }








// #include <stdio.h>

// int main(){

//     int age = 11;

//     if(age >= 18 && age < 120){
//         printf("You are eligible to vote");
//     }

//     else if(age >=120){
//         printf("You're too old to vote");
//     }

//     else{
//         printf("You are ineligble");
//     } 

//     return 0;
// }





// #include <stdio.h>

// int main(){

//     int age = 15;

//     if(age > 120){
//         printf("Invalid age");
//     }

//     else if(age < 0){
//         printf("Invalid age");
//     }

//     else if(age >=18){
//         printf("You are eligible to vote");

//     }

//     return 0;
// }




/*Can you create a program that can tell when a number is negative, positive, or zero */


// #include <stdio.h>

// int main (){

//     int number = 0;

//     if(number == 0){
//         printf("The number is zero.");
//     }

//     else if(number > 0){
//         printf("The number is positive");
//     }

//     else {
//         printf("The number is negative");
//     }

//     return 0;
// }




/*What is the output of the following code?*/

// #include <stdio.h>
// int main (){

//     int a=5;
//     if(!(a%2 ==0)){
//         printf("Inside if");
//     }

//     else{
//         printf("Inside else");
//     }
//     return 0;
// }







// #include <stdio.h>

// int main (){

//     int age = 20;

//     (age >=18)? printf("You can vote") : printf("You cannot vote");
    

//     return 0;
// }





// #include <stdio.h>

// int main (){ 

//     char operator = '+';

//     int num1 = 8;
//     int num2 = 7;
    
//     int result = (operator == '+')? (num1 + num2) : (num1 - num2);
//     print("%d", result);

//     return 0;
// }






// #include <stdio.h>

// int main(){

//     int num = 0;

//     if (num == 0){
//         printf("the number is zero");
//     }

//     else if (num % 2 == 0){
//         printf("The number is even");
//     }

//     else{
//         printf("The number is odd");
//     }


//     return 0;
// }



// #include <stdio.h>

// int main(){


//     int number = 8;

//     (number % 2 == 0)? printf("the number is even"):printf("the number is odd");


//     return 0;
// }



/*1:29:00*/

// #include <stdio.h>

// int main (){

//     int num = 5;
//     int result;

//     (5>3)? printf("result = 5"): printf("result = 3");

//     return 0;
// }





/*1:34:06*/

//#include <stdio.h>

// int main(){

//     int number;

//     printf("Enter any number from 1 to 7: ");
//     scanf("%d", &number);


//     switch(number){

//         case 1:
//         printf("The day is Sunday");
//         break;

//         case 2:
//         printf("The day is Monday");
//         break;

//         case 3:
//         printf("The day is Tuesday");
//         break;

//         case 4:
//         printf("The day is Wednesday");
//         break;

//         case 5:
//         printf("The day is Thursday");
//         break;     

//         case 6:
//         printf("The day is Friday");
//         break;
        
//         case 7:
//         printf("The day is Saturday");
//         break; 

//         default:
//         printf("Invalid Number");      
//     }



//     return 0;
// }







/*1:36:57*/

// #include <stdio.h>

// int main(){

//     int number;

//     printf("Enter a number between 1 and 7: ");
//     scanf("%d", &number);

//     switch(number){
    
//     case 2:
//     case 3:
//     case 4:
//     case 5:
//     case 6:
//     printf("Weekday");
    
//     break;

//     case 1: 
//     case 7: 
//     printf("Weekend");
//     break;

//     default:
//     printf("invalid number");

//     }


//     return 0;
// }


/*1:37:20*/

// #include <stdio.h>

// int main(){

//     char operator;

//     printf("Enter an operator: +, -, *, /");
//     scanf("%c", &operator);

//     double num1;
//     double num2;

//     printf("\n Enter first number: ");
//     scanf("%lf", &num1);

//     printf("\n Enter second number: ");
//     scanf("%lf", &num2);

//     int result;
//     int remainder;

//     switch(operator){

//         case '+':
//         result = num1 + num2;
//         printf("num1 + num2 = %d", result);
//         break;

//         case '-':
//         result = num1 - num2;
//         printf("num1 - num2 = %d", result);
//         break;

//         case '*':
//         result = num1 * num2;
//         printf("num1 * num2 = %d", result);
//         break;

//         case '/':
//         result = num1 / num2;
//         //remainder = num1 % num2;  //how to include this so that when dividing you get the answer and the remainder
//         printf("num1 / num2 = %d", result);
//         break;

//         default:
//         printf("Error");
//         break;

//     }



//     return 0;
// }





// #include <stdio.h>

// int main(){

//     char operator;
//     printf("Choose an operator ['+', '-', '*', '/']: ");
//     scanf("%c", &operator);

//     double num1, num2;

//     printf("Enter first number: ");
//     scanf("%lf", &num1);

//     printf("Enter second number: ");
//     scanf("%lf", &num2);

//     double result;

//     switch(operator){

//         case '+':
//         result = num1 + num2;
//         printf("%lf", result);
//         break;

//         case '-':
//         result = num1 - num2;
//         printf("%lf", result);
//         break;

//         case '*':
//         result = num1 * num2;
//         printf("%lf", result);
//         break;

//         case '/':
//         result = num1 / num2;
//         printf("%lf", result);
//         break;

//         default:
//         printf("Error");
        
//         break;

//     }

//     return 0;
// }


////////////////////////////////////////////////////
/*1:39:22*/

// #include <stdio.h>

// int main (){

//     int num;

//     printf("Enter any number from 1 to 12: ");
//     scanf("%d", &num);

//     switch(num){

//     case 1:
//     printf("Jan");
//     break;

//     case 2:
//     printf("Feb");
//     break;

//     case 3:
//     printf("March");
//     break;

//     case 4:
//     printf("April");
//     break;

//     case 5:
//     printf("May");
//     break;

//     case 7:
//     printf("June");
//     break;

//     case 8:
//     printf("July");
//     break;

//     case 9:
//     printf("Aug");
//     break;

//     case 10:
//     printf("Sept");
//     break;

//     case 11:
//     printf("Oct");
//     break;

//     case 12:
//     printf("Nov");
//     break;

//     default:
//     printf("Invalid number");
//     break;

//     }
//     return 0;
// }

////////////////////////////////////////////

/*1:41:55*/

// #include <stdio.h>

// int main(){

//     int num = 3;
//     while( num < 5){
//         printf("hello \n");
//     }

//     return 0;
// }



// #include <stdio.h>

// int main(){

//     int count =1;

//     while(count < 5){
//         printf("while loop in C\n");
//         printf("Count = %d \n", count);
//         count = count +1;
//     }

//     return 0;
// }

////////////////////////////////////////////////////

/*1:46:15*/


// #include <stdio.h>

// int main(){

//     int number;
//     printf("Enter a number: ");
//     scanf("%d", &number);
    

//     int count = 1;

    

   
//    while(count<13){ 
//     int product = number * count;

//     printf("%d \n", product);
//     count = count + 1;
//    }

//     return 0;
// }



// #include <stdio.h>

// int main(){

//     int number;
//     printf("Enter a number: ");
//     scanf("%d", &number);
    

//     int count = 1;

    

   
//    while(count<13){ 
//     int product = number * count;
    
//     printf("%d * %d = %d \n", number, count, product);
//     count = count + 1;
//    }

//     return 0;
// }

///////////////////////////////////////////////////////


// #include <stdio.h>

// int main(){

//     int count = 5;

//     do{
//         printf("%d\n", count);
//         (count = count + 1);
//     }while(count < 5);

//     return 0;
// }


// #include <stdio.h>

// int main(){

//     int number;
//     printf("Enter a number: ");
//     scanf("%d", &number);

//     int count = 1;

//     do{
//         int product = count*number;
//         printf("%d * %d = %d\n", number, count, product);
//         count = count + 1;
//     }while(count < 13);

//     return 0;
// }


/*1:51:20*/

// #include <stdio.h>

// int main(){

//     int number;

//     printf("Enter any number: ");
//     scanf("%d", &number);

//     int count = 10;

//     while(count>0){
//         int product = count*number;
//         printf("%d*%d=%d\n", number, count, product);
//         count = count - 1;

//     }


//     return 0;
// }

//////////////////////////////////////////////

/*1:51:59*/

//for(initailizationExpression; testExpression; updateExpression)

// #include <stdio.h>

// int main (){
 
//     for(int i =0; i < 10; i++){
//         printf("%d ", i);
//     }
//     return 0;
// }

/*1:56:23*/

// #include <stdio.h>

// int main(){

//     for(int i=1; i<101; i++){
//         int a;
//         a = i + i;
//         printf("%d ", a);
//     }


//     return 0; 
// }

// #include <stdio.h>

// int main (){

//     int sum = 0;
//     for(int i = 1; i <=100; i++){
//         sum = sum + i;
//     }

//     printf("%d", sum);
//     return 0;
// }



// #include <stdio.h>

// int main (){

//     int sum = 0;

//     for(int i = 2; i <=100; i = i+2){
//         sum = sum + i;
//     }

//     printf("%d", sum);
//     return 0;
// }

// #include <stdio.h>

// int main(){

//     int sum = 0;


//     for(int i = 1; i<=100; i = i + 2){
//         sum = sum + i;

//     }

//     printf("%d", sum);
//     return 0;
// }

////////////////////////////////////////////////

/*2:03:46*/

// #include <stdio.h>

// int main(){

//     for(int i = 1; i <=5; i++){

//         if(i ==3){
//             break;
//         }

//         printf("%d\n", i);
//     }

//     return 0;
// }



// #include <stdio.h>

// int main (){

//     while(1){
//         int number;
//         printf("\n Enter a number: ");
//         scanf("%d", &number);

//         if(number <0){
//             printf("Can't print negatives.\n Oops.");
//             break;
//         }

//         printf("%d", number);
//     }
//     return 0;
// }

// #include <stdio.h>

// int main(){

//     for(int i = 1; i <= 5; i ++){
     
//         if(i ==3){
//             continue;
//         }
        
//         printf("%d\n", i);
//     }


//     return 0;
// }







// #include <stdio.h>

// int main (){

//     while(1){
//         int number;
//         printf("Enter an even number: ");
//         scanf("%d", &number);

//         if(number <= 0){
//             break;
//         }

//         if((number%2 !=0)){
//             continue;
//         }

//         printf("%d\n", number);

//     }

//     return 0;
// }




/*2:10:37*/

#include <stdio.h>

int main(){

    while(1){
        int number;

        printf("Enter a number:");
        scanf("%d", &number);

        if(number > 0){
            printf("Positive Value");
            //break;
            continue;
        }

        if(number < 0 && (number % 2 == 0)){
            printf("Negative Even");
            continue;
        }

        if(number==0){
            continue;
        }

        if(number <0 && (number % 2 != 0)){
            printf("%d", number);
        }

        printf("System error");
    }

    return 0;
}

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

// #include <stdio.h>

// int main(){

//     while(1){
//         int number;

//         printf("\nEnter a number:");
//         scanf("%d", &number);

//         if(number > 0){
//             printf("Positive Value");
//             //break;
//             continue;
//         }

//         if(number < 0 && (number % 2 == 0)){
//             printf("Negative Even");
//             continue;
//         }

//         if(number==0){
//             continue;
//         }

//         if(number <0 && (number % 2 != 0)){
//             printf("%d", number);
//         }

//     }

//     return 0;
// }


/////////////////////////////////////////////////////////////////



/*

returnType functionName(){

}

*/

/*2:13:27*/

// #include <stdio.h>

//  void greet(){

//     printf("Good morning!");
//  }

// int main(){

//     greet();

//     return 0;
// }




// #include <stdio.h>

//  void greet(){

//     printf("Good morning!");
//  }

//  void saybye(){

//     printf("Goodbye!");
//  }


///////////////Remember how to make a calc?//////////

// #include <stdio.h>

// int main (){

//     char operator;
   
//     int num1;

//     int num2;

//     printf("Select an operator: ['+', '-', '*', '/']: ");
//     scanf("%c", &operator);
   
//     printf("\n Enter your first number: ");
//     scanf("%d", &num1);

//     printf("\n Enter your second number: ");
//     scanf("%d", &num2);

//     if(operator == '+'){
        
//         double ans = num1 + num2;

//         printf("%d + %d = %lf", num1, num2, ans);
//     }

//     if(operator == '-'){
        
//         double ans = num1 - num2;

//         printf("%d - %d = %lf", num1, num2, ans);
//     }

//     if(operator == '*'){
        
//         double ans = num1 * num2;

//         printf("%d * %d = %lf", num1, num2, ans);
//     }

//     if(operator == '/'){
        
//         double ans = num1 / num2;

//         printf("%d / %d = %lf", num1, num2, ans);
//     }
//     return 0;
// }


///////////////////////////////////////////////////////////

/*2:18:03*/


// #include <stdio.h>

// void calculateSquare(int number){
//     int square = number * number;
//     printf("the square of %d is %d", number, square);
// }

// int main (){

//     calculateSquare(5);

//     return 0;
// }


// #include <stdio.h>

//  void addNumbers(int num1, int num2){
//         int sum = num1 + num2;

//         printf("%d + %d = %d", num1, num2, sum);
//     }

// int main(){

//     addNumbers(1,6);


//     return 0;
// }



// #include <stdio.h>

// void addNumbers(int num1, int num2, int num3){

//     int sum = num1 + num2 + num3;

//     printf("%d + %d + %d = %d", num1, num2, num3, sum);

// }

// int main(){

//     int num1;
//     int num2;
//     int num3;

//     printf("Select three numbers.");
//     printf("\n First number: ");
//     scanf("%d", &num1);

//     printf("\n Second number: ");
//     scanf("%d", &num2);

//     printf("\n Third number: ");
//     scanf("%d", &num3);


//         addNumbers(num1, num2, num3);

//     return 0;
// }

// #include <stdio.h>

// int addNumbers(int num1, int num2){

//     int sum = num1 + num2;
//     return sum;

// }

// int main(){

//     int sum = addNumbers(6,967676767);

//     //printf("%d + %d + %d", num1, num2, sum);

//     printf("%d", sum);

//     return 0;
// }

// #include <stdio.h>

// int addNumbers(int num1, int num2);

// int main (){

//     int result = addNumbers(9, 10);
//     printf("Result = %d", result);

//     return 0;
// }


// int addNumbers(int num1, int num2){
//     int sum = num1 + num2;
//     return sum;
// }

// You can "define the function" at the end of the code...



/////////////REMEMEBER////////////////////////////////


// #include <stdio.h>

// void calcSquare (int num){
//     int square = num*num;
//     printf("%d ^2 = %d", num, square);
// }

// int main(){

//     calcSquare (977);

//     return 0;
// }


/*2:27:07*/

// #include <stdio.h>
// #include <math.h>

// int main(){

//     float result = sqrt(81);
//     printf("Square root is %f", result);

//     return 0;
// }



/*2:27:43*/

// #include <stdio.h>

// int multiplier(int num1, int num2){

//     int result = num1*num2;
//     return result;

// }

// int main(){

//     int result = multiplier(9,3);

//     printf("%d", result);

//     return 0;
// }


// #include <stdio.h>

// int addNumbers(int num1, int num2){
//     int result = num1 + num2;
//     return result;
// }

// int main(){

//     int sum = addNumbers(5,6);

//     printf("Result =  %d", sum);


//     return 0;
// }



// #include <stdio.h>

// int result;

// void addNum(int num1, int num2){
//     result = num1 + num2;
//     printf("Result = %d", result);
// }

// int main(){
//     addNum(3,4);

//     return 0;
// }

/////////////////////////////////////////////////////////
/*STANDARD LIBRARY FUNCTIONS*/


// #include <stdio.h>

// int main(){

//     printf("Hello World");

//     return 0;
// }


//math.h
//sqrt()

// #include <stdio.h>
// #include <math.h>

// int main(){

//     int num = 25;


//     printf("Square root = %lf", sqrt(num));

//     return 0;
// }


// #include <stdio.h>
// #include <math.h>

// int main(){

//     int num = 27;

//     printf("Cube root = %lf", cbrt(num));


//     return 0;
// }


// #include <stdio.h>
// #include <math.h>

// int main (){

//     int a = 3;
//     int b = 2;


//     printf("%d^%d =%lf", a, b, pow(a,b));

//     return 0;
// }




// #include <stdio.h>
// #include <ctype.h>

// int main(){
    
//     char letter = 'e';

//     int upper = toupper(letter);
//     printf("%c", upper);

//     int lower = tolower(letter);
//     printf("\n%c", lower);

//     return 0;
// }




/*2:40:49*/

#include <stdio.h>
#include <math.h>

int main(){

    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    double squarer = sqrt(num);
    
    printf("%d, %lf", num, squarer);

    double power = pow(squarer);

    printf("%d^%lf = %lf", num, squarer, power);

    return 0;
}

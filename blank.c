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


#include <stdio.h>

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

#include <stdio.h>

int main(){

    int age = 15;

    if(age > 120){
        printf("Invalid age");
    }

    else if(age < 0){
        printf("Invalid age");
    }

    else if(age >=18){
        printf("You are eligible to vote");

    }

    return 0;
}
/*

#include <stdio.h>

int main(){
    int number;

    printf("Enter any integer: ");

    scanf("%d", &number);

    printf("You enterd: %d", number);

    return 0;
}

*/

#include <stdio.h>
int main() {   
    int number;
   
    printf("Enter an integer: ");  
    
    // reads and stores input
    scanf("%d", &number);

    // displays output
    printf("You entered: %d", number);
    
    return 0;
}
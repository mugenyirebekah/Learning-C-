//page 6

/*
#include <stdio.h>

int main(){

    int decks;
    puts("Enter a number of decks");
    scanf("%i", &decks);
    if(decks<1){
        puts("That is not a valid number of decks");
        return 1;
    }

    printf("there are %i cards \n", (decks*52));


    return 0;
}

//If you tell your main() function to return 0, this
//means that the program was successful. If you tell it to return any other value,
//this means that there was a problem.

*/

//page 7

/*
Program to evaluate face values.
Released under the Vegas Public License.
(c)2014 The College Blackjack Team.
*/

/*
#include <stdio.h>
#include <stdlib.h>

int main(){
    char card_name[3];
    puts("Enter the card_name: ");
    scanf("%s", card_name);

    int val = 0;

    if (card_name[0] == 'K'){
       val = 10;
    }

    else if(card_name[0] == 'Q'){
        val = 10;
    }

    else if(card_name[0] == 'J'){
        val = 10;
    }

    else if(card_name[0]== 'A'){
        val = 11;
    }

    else {
        val = atoi(card_name);
    }

    printf("The card value is: %i\n", val);


    return 0;
}

*/

int main() {
    char card_name[3]; 
    printf("Enter the card_name: ");
    scanf("%s", card_name); 
    int val = 0;
    
    if (card_name[0] == 'K') {
        val = 10;
    } 
    else if (card_name[0] == 'Q'){
    val = 10;
    } 
    else if (card_name[0] == 'J'){
    val = 10;
    } 
    else if (card_name[0] == 'A'){
        val = 11;
    } 
    else {
        val = atoi(card_name); 
    }

    return 0;

}

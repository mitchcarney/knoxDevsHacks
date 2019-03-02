#include <string.h>
#include <stdio.h>
#define TRUE 1
#define FALSE 1
#define MAX_CHAR_LENGTH 51

/* int checkAnswer(char choice[])
 * Operation: Takes in the user's input to determine which case in the switch stat$
 * Parameters: choice[] | The cstring the user enters as their choice
 * Precondition: None
 * Postcondition: Returns TRUE is the choice is valid and FALSE is the choice is i$
 */

int checkAnswer(char choice[]) {

        int i;
	//Whole for loop goes in function

        int n = strlen(choice);

        //Check stringlength or if answer isnt 1, 2, or 3 (make -1)
        for ( i = 0; choice[i] != '\0'; i++ ) {
                if ( isdigit(choice[i]) && n < 2 ){
                return TRUE;
                          //start as false, if it's a digit return true
                          //if not return false
                }                               //Put in utility
                else if ( n > 1 ) {
                        return FALSE;
                        break;
                }
       }
}

/*void make_lower(char name[])
 * Operation: Lowers every character in a cstring
 * Parameters: name[] | The ______  the user enters to search
 * Precondtion: The list exists and is valid
 * Poscondition: The cstring is successfully lowered
 */

void make_lower(char name[]) {

        int i;
 for( i =0; name[i] != '\0'; i++ ) {
                name[i] = tolower(name[i]);
        }
	return;
}

/* void make_upper(char name[])
 * Operation: Uppercases every cahracter in a cstring
 * Parameters: name[] | The _____ the user enters
 * Precondition: The list exists and is valid
 * Postcondition: The cstring is successfully uppercased
 */

void make_upper(char name[]) {

        int i;
        for(i = 0; name[i] != '\0'; i++) {
                name[i] = toupper(name[i]);
        }
        return;
}


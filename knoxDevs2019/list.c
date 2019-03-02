/* 
 * Author: Colby Smith
 * Date: March 2nd 2019
 * File: Doubly Linked List C File
 */

#include "clients.h"
#include "node.h'
#include "list.h"

/* Create List
 * Initializes the pointers in the list
 */
void createList(list_t* listPtr){
	if(listPtr != NULL){
		listPtr->headPtr=NULL;

		listPtr->tailPtr=NULL;
	}
}
/* Delete List
 * Returns void
 * Frees each pointer and moves it to the next pointer
 */
void deleteList(list_t* listPtr){ 
	node_t* curPtr;
	if(listPtr != NULL && listPtr->headPtr != NULL){
		curPtr=listPtr->headPtr;
		while(curPtr != NULL){
			listPtr->headPtr = curPtr->nextPtr;
			free(curPtr);
			curPtr=listPtr->headPtr;
		}
		listPtr->headPtr=NULL;
		listPtr->tailPtr=NULL;
	}
}
/* Insert Node
 * Returns void
 * Inserts nodes into the list in order by nationality.
 */
void insertNode(list_t* listPtr, node_t* newNode){
	node_t* curPtr;
	if(listPtr != NULL){ //if the list doesn't exist
		if(listPtr->headPtr==NULL){ //if the list is empty
			listPtr->headPtr=newNode;
			listPtr->tailPtr=newNode;
		}
		else if(strcmp(newNode->ati, listPtr->headPtr->client.apt_time) < 0){
			newNode->nextPtr=listPtr->headPtr;
			listPtr->headPtr->prevPtr=newNode;
			listPtr->headPtr=newNode;
		}
		else if(strcmp(newNode->client.apt_time, listPtr->tailPtr->client.apt_time) >= 0){
			newNode->prevPtr=listPtr->tailPtr;
			listPtr->tailPtr->nextPtr=newNode;
			listPtr->tailPtr=newNode;
		}
		else{
			curPtr = listPtr->headPtr;
			while(curPtr != NULL){
				if(strcmp(newNode->client.apt_time, curPtr->client.apt_time) < 0){
					newNode->prevPtr=curPtr->prevPtr;
					newNode->nextPtr=curPtr;
					curPtr->prevPtr->nextPtr=newNode;
					curPtr->prevPtr=newNode;
					break;
				}
				curPtr = curPtr->nextPtr; //traverses to next athlete
			}
		}	
	}
}
/* Traverses list as a stack and prints out each athlete.
 * Returns void
 * Only used this function to verify if the stack existed and was valid when debugging.
 * Used this function as a basis for Traverse Names and Traverse Medals
 */
void traverseStack(const list_t* listPtr){
	node_t* curPtr;
	if(listPtr != NULL){
		curPtr=listPtr->headPtr;
		while(curPtr != NULL){
			printAthletes(curPtr->athlete);
			curPtr = curPtr->nextPtr;
		}
	}
}
/* Traverse Names
 * Returns void
 * Traverses the list as a stack and linearly searches for matches between the key and the athlete's name.
 * Calls print athlete when a match is found.
 * Error checks for no name matches.
 */
void (const list_t* listPtr, char nameKey[]){
	node_t* curPtr;
	char tempName[81];
	int foundOne=FALSE;
	if(listPtr != NULL){	
		curPtr=listPtr->headPtr;
		while(curPtr != NULL){
			strcpy(tempName, curPtr->athlete.name);
			makeLowerCase(tempName, nameKey);
			if(strstr(tempName, nameKey) != NULL){ 
				printAthletes(curPtr->athlete);
				foundOne = TRUE;
			}
			curPtr = curPtr->nextPtr;
		}
		if(foundOne==FALSE){
			printf("No athletes' names start with %s.\n", nameKey);
		}
	}

}
/* Traverse Medals
 * Returns void
 * Traverses the list as a stack, then linearly searches for matches between the country key
 * and the curPtr's athlete's nationality. When a match is found the function sums up the 
 * medals from all athletes from that specific country
 */
void searchByName(char nameKey[81], const list_t* listPtr){
	int foundOne=FALSE; //does the key match the string?
	node_t* curPtr;
	if(listPtr != NULL){
			makeLowerCase(nameKey, tempName);
			curPtr=listPtr->headPtr;
			while(curPtr != NULL){
				strcpy(tempName, curPtr->client.lastName);
				if(strstr(tempName, nameKey) == 0){
					printClient(client);
					foundOne=TRUE;
				}				
				curPtr = curPtr->nextPtr; //traverse to next client
			}
			if(foundOne == TRUE){
				printClient(client);
			}
			else{
				printf("No clients' names start with %s\n", nameKey);
			}
	}
}
printClient(list_t* listPtr){
		asctime(*timePtr);
		printf("%s, %s\n" curPtr->client.lastName, curPtr->client.firstName);
		printf("Appointment Time: %d / %d / %d\n", month, day, year);
}

char* asctime(const struct tm *timeptr){
		static const char wday_name[][4] = {
			"Sun", "Mon", "Tue", "Wed", "Thu", "Fri", "Sat"
	    };
		static const char mon_name[][4] = {
	        "Jan", "Feb", "Mar", "Apr", "May", "Jun",
			"Jul", "Aug", "Sep", "Oct", "Nov", "Dec"
		};
	
printClient(list_t* listPtr){
		asctime(*timePtr);
		printf("%s, %s\n" curPtr->client.lastName, curPtr->client.firstName);
		printf("Appointment Time: %d / %d / %d\n", month, day, year);
}
	
printClient(list_t* listPtr){
		asctime(*timePtr);
		printf("%s, %s\n" curPtr->client.lastName, curPtr->client.firstName);
		printf("Appointment Time: %d / %d / %d\n", month, day, year);
		timePtr->tm_mday, timeptr->tm_hour,
		timeptr->tm_min, timeptr->tm_sec,
		1900 + timeptr->tm_year;
		return result;
}

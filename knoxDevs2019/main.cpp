#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#include <fstream>
#include <stdio.h>
#include <stdlib.h>
#include "clients.h"
#include "list.h"
#include "node.h"

#define MAX_FILENAME 51;

int main(int argc, char* argv[]) {

 char filename[MAX_FILENAME];
 ifstream input;
 client clients;
 int option;
 if (argc<2) {
	printf("Error: app filename\n");
 }
 
 else {
 	strcpy(filename, argv[1]); //name of file: database.txt
 	input.open(filename);
 }

 if ( input.fail() ) { //if file does not exist
 	printf("File non-existent, Please contact administrator\n");
	exit(1);
 }	 
 
 char c;
 input.get(c); //gets random character from file
 if ( input.eof() ) { //if file is empty
 	printf("File is empty, Please contact administrator or input information\n");
	exit (1);
 }
 else {
	putback(c); //puts character back in file
 }

 dbl_linked_list_t list; 
 node_t* nPtr;
 createList(&list);
 fread (&clients,sizeof(client),1,in);
 while ( !input.eof() ){
 	nPtr=initNode(client);
 	insertNode(&list, nPtr);
	fread(&clients, sizeof(client), 1, in);
	//print the data here 
}

 input.close();
 while (option!=4) { 	
 printf("Welcome to HealthPort Services\n");
 printf("------------------------------\n");
 printf("1) Make Appointment\n");
 printf("2) Search For Appointment\n");
 printf("3) Cancel Appointment\n");
 printf("4) Exit\n");
 printf(Option>> ");
 scanf("%d\n", option);
 
 for (i=0; option[i]!='\0'; i++) {
 	if (isdigit(option[i]) ) {
		atoi(option);
        }
        else {
                printf("Error, must be a digit\n");
                break;
        }
 }
 option=atoi(option);

 switch(option){

	case 1:
		
		break;
	case 2: 
		Printf("Enter a Person to Search");
		scanf("%s", nameKey);
		makeLowerCase(nameKey,tempKey);
		searchByName(nameKey,list)
		break;
	case 3:
		break;
	case 4:
		printf("Goodbye, Thank You For Using HealthPort Services\n");
		break;
	default:
		printf("Error, Option must be between 1-4\n");

return (0);
}

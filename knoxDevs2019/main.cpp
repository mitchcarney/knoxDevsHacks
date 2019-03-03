#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#include <fstream>
#include <stdio.h>
#include <stdlib.h>
#include <cstring>
#include <istream>

#include <unistd.h> /* for fork */
#include <sys/types.h> /* for pid_t */
#include <sys/wait.h> /* for wait */

#include "utilities.h"
#include "clients.h"
#include "list.h"
#include "node.h"

//#define MAX_FILENAME 51;





int main(int argc, char* argv[]) {

    
    /*
   //Spawn a child to run the program.
    pid_t pid=fork();
    if (pid==0) { // child process
        static char *argv[]={"checkDate",NULL,NULL};
        execv("/bin/checkDate",argv);
        exit(127); // only if execv fails
    }
    else { // pid!=0; parent process
        waitpid(pid,0,0); // wait for child to exit
    }
*/
    
    int MAX_FILENAME = 51;
    
    char filename[MAX_FILENAME];
 ifstream input;
 struct client_t clients;
 string option;
 if (argc<2) {
	printf("Error: app filename\n");
     return -1;
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
	//----------------putback(c); //puts character back in file
 }

 struct list_t list;
 node_t* nPtr;
    //0----------------createList(list);
// -------------------fread (&clients,sizeof(client_t),1,in);
 while ( !input.eof() ){
// 	----------------nPtr=initNode(client_t);
 	//------------------insertNode(&list, nPtr);
	//-------------------fread(&clients, sizeof(client), 1, in);
	//print the data here 
}

 input.close();
 while (option!="4") {
 printf("Welcome to HealthPort Services\n");
 printf("------------------------------\n");
 printf("1) Make Appointment\n");
 printf("2) Search For Appointment\n");
 printf("3) Cancel Appointment\n");
 printf("4) Exit\n");
//------------------ printf(Option>> ");
 scanf("%s\n", &option);
 
 for (int i=0; option[i]!='\0'; i++) {
 	if (isdigit(option[i]) ) {
		atoi(option.c_str());
        }
        else {
                printf("Error, must be a digit\n");
                break;
        }
 }
     
 int choice = atoi(option.c_str());
     string nameKey;
     string tempKey;
 switch(choice){

	case 1:
		
		break;
	case 2: 
		printf("Enter a Person to Search");
		scanf("%s", &nameKey);
		//makeLowerCase(nameKey,tempKey);
		//searchByName(nameKey,list)
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
 }
}

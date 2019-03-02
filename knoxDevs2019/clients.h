#ifndef PATIENTS_H
#define PATIENTS_H


typedef struct client_t{
        string firstName;
        string lastName;
        long phone_num; //for client
        char notes[10000]; // for any extra info or concerns
        struct apt {
                int day ;
                int month;
                int year;
                float apt_time;
                string apt_type;
                struct location {
                        string address;
                        string state;
                        int street_number;
                        string check_up;
                        int zip_code;
                        long company_num; //for instituition
                };
       };
} client_t;


#endif



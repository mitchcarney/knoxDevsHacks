using System;
using Twilio;
using Twilio.Rest.Api.V2010.Account;


class Program
{
    static void Main(string[] args)
    {
        string firstName = args[0];
        string visitType = args[1];
        string month = args[2];
        string day = args[3];
        string year = args[4];
        string addressNumber = args[5];
        string streetName = args[6];
        string streetSuffix = args[7];
        string zip = args[8];
        string clientNumber = args[9];
        string appointmentPhoneNumber = args[10];
        string time = args[11];
        string state = args[12];
        string city = args[13];

        string date;
        date = month + '/' + day + '/' + year;

        string output;
        output = "Hey, " + firstName + ". This is a reminder that you have a(n) " + visitType + " on " + date + " at " + time + ". Your appointment is at " + addressNumber + ' ' + 
        streetName + ' ' + streetSuffix + ' ' + city + ", " + state + ' ' + zip + ". Reply CANCEL to cancel this appointment. \n";

        // Find your Account Sid and Token at twilio.com/console
        const string accountSid = "ACaa608beaf04a92fa10f6cfd93ebf4093";
        const string authToken = "f8fdb5bc17578119d8b15fcaf2048920";

        TwilioClient.Init(accountSid, authToken);

        var message = MessageResource.Create(
            body: output,
            from: new Twilio.Types.PhoneNumber("+18652696849"),
            to: new Twilio.Types.PhoneNumber("+1" + clientNumber)
        );

        Console.WriteLine(message.Sid);
    }
}
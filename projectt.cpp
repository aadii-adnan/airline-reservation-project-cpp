

//********************************
//-- AIRLINE RESERVATION SYSTEM--
//*******************************


#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>

using namespace std;

void mainMenu ();   // Function Prototype


struct Flight {
    int flightID;
    char origin[30];
    char destination[30];
    char departureTime[20];
    int totalSeats;
    int availableSeats;
};

void initializeFlights(Flight flights[], int &numFlights) {
    ifstream inFile("flights.txt");
    if (!inFile) {
        cout << "Error opening flights file." << endl;
        return;
    }

    numFlights = 0;
    while (inFile >> flights[numFlights].flightID) {
        inFile.ignore(); // Ignore newline after flightID
        inFile.getline(flights[numFlights].origin, 30);
        inFile.getline(flights[numFlights].destination, 30);
        inFile.getline(flights[numFlights].departureTime, 20);
        inFile >> flights[numFlights].totalSeats;
        inFile >> flights[numFlights].availableSeats;
        inFile.ignore(); // Ignore newline after availableSeats
        numFlights++;
    }
    inFile.close();
}

void displayFlights(const Flight flights[], int numFlights) {
    cout << "Flight Schedule:\n";
    cout << "----------------\n";
    for (int i = 0; i < numFlights; i++) {
        cout << "Flight ID: " << flights[i].flightID << endl;
        cout << "Origin: " << flights[i].origin << endl;
        cout << "Destination: " << flights[i].destination << endl;
        cout << "Departure Time: " << flights[i].departureTime << endl;
        cout << "Total Seats: " << flights[i].totalSeats << endl;
        cout << "Available Seats: " << flights[i].availableSeats << endl;
        cout << "----------------\n";
    }
}




class detail
{
    public:

        static string name;
        static string address;
        static int age;
        static char gender;
        static long long Mobile;
        static int cID;


    void get_info_customer()
    {
        cout<<"Enter Customers's ID :"<<endl;
        cin>>cID;
        cin.ignore();


        cout<<"Enter Customer's name:"<<endl;
        getline(cin,name);


        cout<<"Enter your age:"<<endl;
        cin>>age;
        cin.ignore();

        cout<<"Enter your gender:"<<endl;
        cin>>gender;
        cin.ignore();

        cout<<"Enter your Contact Number:"<<endl;
        cin>>Mobile;
        cin.ignore();

        cout<<"Enter your Address:"<<endl;
        getline(cin,address);
    }

    void display_customerinfo()
    {
        cout<<"Customer details:"<<endl;
        cout<<endl<<endl;
       // cout<<"Customer ID"<<"\t\t"<<"Name:"<<"\t\t"<<"Age"<<"\t\t"<<"Gender"<<"\t\t"<<"Contact:"<<"\t\t"<<"Address"<<"\t\t"<<endl;
        //cout<<cID<<"\t\t"<<name<<"\t\t"<<age<<"\t\t"<<gender<<"\t\t"<<Mobile<<"\t\t"<<address<<endl;
       cout<<"=============================="<<endl;
       cout<<"Customer ID     : "<<cID<<endl;
       cout<<"Name            : "<<name<<endl;
       cout<<"Age             : "<<age<<endl;
       cout<<"Gender          : "<<gender<<endl;
       cout<<"Contact Number  : "<<Mobile<<endl;
       cout<<"Address         : "<<address<<endl;
       cout<<"=============================="<<endl;

        cout<<endl<<endl;
        cout<<"Your Information is saved.Thanks!"<<endl;


    }
};

int detail :: cID;
string detail :: name;
char detail :: gender;
long long detail::Mobile;
int detail::age;
string detail::address;

class registration
{
public:

    static int choice;
    int serviceClass;
    int choiceEco;
    int choiceBuss;
    int choiceFirst;
    static int charges;
    int backk;



    void flight()
    {
        string flightN[] = {"Dubai" , "Canada" , "UK" , "USA" , "Australia"  , "Turkey" };


        for (int i=0 ; i<6 ; i++)
        {
           // cout << i+1 << ".flight to" << flightN[i] << endl;
        cout << i+1 << ". Flight to " << flightN[i] << endl;

        }


        cout << "\nWELCOME TO COMSATS AIRLINES!" << endl;

        cout << "\nEnter the number of your desired destination country: ";
        cin >> choice;


        switch (choice)

        {
        case 1:
            {
                cout << "\tWELCOME TO COMSATS AIRLINES TO DUBAI!" << endl;
                cout << "\n-----Your comfort is our priority-----" << endl;
                cout << "---We believe in Quality Passenger Facilities---" << endl;

                cout << "\n\tSelect your class of service: " << endl;
                cout << "1. Economy class" << endl;
                cout << "2. Business Class" << endl;
                cout << "3. First Class" << endl;

                cin >> serviceClass;

                switch (serviceClass)
                {
                case 1:
                    {
                        cout << "\n\n\tThe following tickets are available for Economy Class to DUBAI: " << endl;

                        cout << "1. DUB-098" << endl;
                        cout << "\t 22-05-24  8:00AM  10 hrs  Rs.25000" << endl;

                        cout << "2. DUB-786"<< endl;
                        cout << "\t 25-05-24  10:00PM  12 hrs  Rs.23000" << endl;


                        cout << "Select the flight you want to book: ";
                        cin >> choiceEco;

                        if (choiceEco == 1)
                        {
                           //charges == 25000;
                           charges = 25000;
                            cout << "\tYou have successfully booked the flight to Dubai with Ticket DUB-098." << endl;
                            cout << "You can go back to main menu and take the ticket" << endl;
                            mainMenu();
                        }

                        else if (choiceEco == 2)
                        {
                           // charges == 23000;
                            charges = 23000;

                            cout << "\tYou have successfully booked the flight to Dubai with Ticket DUB-786." << endl;
                            cout << "You can go back to main menu and take the ticket" << endl;
                            mainMenu();
                        }


                        else
                        {
                            cout << "Invalid input. Shifting to previous menu." << endl;
                            flight();
                        }
                    }
                    break;

                    case 2: // business class
                        {
                        cout << "\n\n\tThe following tickets are available for Business Class to DUBAI: " << endl;

                        cout << "1. DUB-543" << endl;
                        cout << "\t 21-05-24  8:00PM  6 hrs  Rs.35000" << endl;

                        cout << "Select the flight you want to book: ";
                        cin >> choiceBuss;

                        if (choiceBuss == 1)
                        {
                           // charges == 35000;
                            charges = 35000;
                            cout << "\tYou have successfully booked the flight to Dubai with Ticket DUB-543." << endl;
                            cout << "You can go back to main menu and take the ticket" << endl;
                            mainMenu();
                        }

                        else
                        {
                            cout << "Invalid input. Shifting to previous menu." << endl;
                            flight();
                        }
                    }
                    break;

                    case 3: // first class
                        {
                        cout << "\n\n\tThe following tickets are available for First Class to DUBAI: " << endl;

                        cout << "1. DUB-536" << endl;
                        cout << "\t 27-05-24  8:00PM  4 hrs  Rs.50000" << endl;

                        cout << "Select the flight you want to book: ";
                        cin >> choiceFirst;

                        if (choiceFirst == 1)
                        {
                           // charges == 50000;
                           charges = 50000;
                            cout << "\tYou have successfully booked the flight to Dubai with Ticket DUB-536." << endl;
                            cout << "You can go back to main menu and take the ticket" << endl;
                            mainMenu();
                        }

                        else
                        {
                            cout << "Invalid input. Shifting to previous menu." << endl;
                            flight();
                        }
                    }
                        break;

                    default:
                        {
                            cout << "Invalid input. Shifting to previous menu." << endl;
                            flight();
                        }

                        }
                }//-----------------------------------------------------------------------------------------------------------------------------------------------

                    case 2: // CANADA
                        {

                cout << "\tWELCOME TO COMSATS AIRLINES TO CANADA!" << endl;
                cout << "\n-----Your comfort is our priority-----" << endl;
                cout << "---We believe in Quality Passenger Facilities---" << endl;

                cout << "\n\tSelect your class of service: " << endl;
                cout << "1. Economy class" << endl;
                cout << "2. Business Class" << endl;
                cout << "3. First Class" << endl;

                cin >> serviceClass;

                switch (serviceClass)
                {
                case 1: // for economy class
                    {
                        cout << "\n\n\tThe following tickets are available for Economy Class to CANADA: " << endl;

                        cout << "1. CAN-098" << endl;
                        cout << "\t 09-06-24  7:00PM  15 hrs  Rs.35000" << endl;


                        if (choiceEco == 1)
                        {
                            charges == 35000;
                            cout << "\tYou have successfully booked the flight to Canada with ticket CAN-098." << endl;
                            cout << "You can go back to main menu and take the ticket" << endl;
                            mainMenu();
                        }

                        else
                        {
                            cout << "Invalid input. Shifting to previous menu." << endl;
                            flight();
                        }
                    }
                    break;

                    case 2: // for business class
                        {
                        cout << "\n\n\tThe following tickets are available for Business Class to CANADA:: " << endl;

                        cout << "1. CAN-543" << endl;
                        cout << "\t 14-06-24  10:00PM  6 hrs  Rs.35000" << endl;

                        cout << "2. CAN-098"<< endl;
                        cout << "\t 27-05-24  10:00AM  8 hrs  Rs.33000" << endl;

                        cout << "\nSelect the flight you want to book: ";
                        cin >> choiceBuss;

                        if (choiceBuss == 1)
                        {
                            //charges == 35000;
                                                        charges =35000;
                            cout << "\tYou have successfully booked the flight to Canada with ticket CAN-543." << endl;
                            cout << "You can go back to main menu and take the ticket" << endl;
                            mainMenu();
                        }

                        else if (choiceBuss == 2)
                        {
                           // charges == 33000;
                           charges = 33000;
                            cout << "\tYou have successfully booked the flight to Canada with Ticket CAN-098." << endl;
                            cout << "You can go back to main menu and take the ticket" << endl;
                            mainMenu();
                        }

                        else
                        {
                            cout << "Invalid input. Shifting to previous menu." << endl;
                            flight();
                        }
                    }
                    break;

                    case 3: // for first class
                        {
                        cout << "\n\n\tThe following tickets are available for First Class to CANADA:: " << endl;

                        cout << "1. CAN-536" << endl;
                        cout << "\t 27-05-24  8:00PM  4 hrs  Rs.50000" << endl;

                        cout << "2. CAN-167"<< endl;
                        cout << "\t 28-05-24  10:00AM  6 hrs  Rs.45000" << endl;


                        cout << "Select the flight you want to book: ";
                        cin >> choiceFirst;

                        if (choiceFirst == 1)
                        {
                           // charges == 50000;
                           charges = 50000;
                            cout << "\tYou have successfully booked the flight to Canada with Ticket CAN-536." << endl;
                            cout << "You can go back to main menu and take the ticket" << endl;
                            mainMenu();
                        }

                        else if (choiceFirst == 2)
                        {
                           // charges == 45000;
                           charges = 45000;
                            cout << "\tYou have successfully booked the flight to Canada with Ticket CAN-167." << endl;
                            cout << "You can go back to main menu and take the ticket" << endl;
                            mainMenu();
                        }


                        else
                        {
                            cout << "Invalid input. Shifting to previous menu." << endl;
                            flight();
                        }
                        }
                        break;

                    default:
                        {
                            cout << "Invalid input. Shifting to previous menu." << endl;
                            flight();
                        }

                        }

                        }
//---------------------------------------------------------------------------------------------------------------------------------------------------
                    case 3:
                        {
                cout << "\tWELCOME TO COMSATS AIRLINES TO UK!" << endl;
                cout << "\n-----Your comfort is our priority-----" << endl;
                cout << "---We believe in Quality Passenger Facilities---" << endl;

                cout << "\n\tSelect your class of service: " << endl;
                cout << "1. Economy class" << endl;
                cout << "2. Business Class" << endl;
                cout << "3. First Class" << endl;

                cin >> serviceClass;

                switch (serviceClass)
                {
                case 1:
                    {
                        cout << "\n\n\tThe following tickets are available for Economy Class to UK: " << endl;

                        cout << "1. UK-098" << endl;
                        cout << "\t 22-05-24  8:00AM  10 hrs  Rs.25000" << endl;

                        cout << "2. UK-786"<< endl;
                        cout << "\t 25-05-24  10:00PM  12 hrs  Rs.23000" << endl;


                        cout << "Select the flight you want to book: ";
                        cin >> choiceEco;

                        if (choiceEco == 1)
                        {
                            //charges == 25000;
                            charges = 25000;
                            cout << "\tYou have successfully booked the flight to UK with Ticket UK-098." << endl;
                            cout << "You can go back to main menu and take the ticket" << endl;
                            mainMenu();
                        }

                        else if (choiceEco == 2)
                        {
                           // charges == 23000;
                           charges = 23000;
                            cout << "\tYou have successfully booked the flight to UK with Ticket UK-786." << endl;
                            cout << "You can go back to main menu and take the ticket" << endl;
                            mainMenu();
                        }

                        else
                        {
                            cout << "Invalid input. Shifting to previous menu." << endl;
                            flight();
                        }
                    }
                    break;

                    case 2: // for business class
                        {
                        cout << "\n\n\tThe following tickets are available for Business Class to UK: " << endl;

                        cout << "1. UK-543" << endl;
                        cout << "\t 21-05-24  8:00PM  6 hrs  Rs.35000" << endl;

                        cout << "Select the flight you want to book: ";
                        cin >> choiceBuss;

                        if (choiceBuss == 1)
                        {
                           // charges == 35000;
                           charges = 35000;
                            cout << "\tYou have successfully booked the flight to UK with Ticket UK-543." << endl;
                            cout << "You can go back to main menu and take the ticket" << endl;
                            mainMenu();
                        }


                        else
                        {
                            cout << "Invalid input. Shifting to previous menu." << endl;
                            flight();
                        }
                    }
                    break;

                    case 3: // for first class
                        {
                        cout << "\n\n\tThe following tickets are available for First Class to UK: " << endl;

                        cout << "1. UK-536" << endl;
                        cout << "\t 27-05-24  8:00PM  4 hrs  Rs.50000" << endl;

                        cout << "2. UK-167"<< endl;
                        cout << "\t 28-05-24  10:00AM  6 hrs  Rs.45000" << endl;

                        cout << "Select the flight you want to book: ";
                        cin >> choiceFirst;

                        if (choiceFirst == 1)
                        {
                            //charges == 50000;
                            charges = 50000;
                            cout << "\tYou have successfully booked the flight to UK with Ticket UK-536." << endl;
                            cout << "You can go back to main menu and take the ticket" << endl;
                            mainMenu();
                        }

                        else if (choiceFirst == 2)
                        {
                           // charges == 45000;
                           charges = 45000;
                            cout << "\tYou have successfully booked the flight to UK with Ticket UK-167." << endl;
                            cout << "You can go back to main menu and take the ticket" << endl;
                            mainMenu();
                        }

                        else
                        {
                            cout << "Invalid input. Shifting to previous menu." << endl;
                            flight();
                        }
                        }
                        break;

                    default:
                        {
                            cout << "Invalid input. Shifting to previous menu." << endl;
                            flight();
                        }

                        }

                        }

//----------------------------------------------------------------------------------------------------------------------------------------------------
                    case 4:
                        {

                cout << "\tWELCOME TO COMSATS AIRLINES TO USA!" << endl;
                cout << "\n-----Your comfort is our priority-----" << endl;
                cout << "---We believe in Quality Passenger Facilities---" << endl;

                cout << "\n\tSelect your class of service: " << endl;
                cout << "1. Economy class" << endl;
                cout << "2. Business Class" << endl;
                cout << "3. First Class" << endl;

                cin >> serviceClass;

                switch (serviceClass)
                {
                case 1: // for economy class
                    {
                        cout << "\n\n\tThe following tickets are available for Economy Class to USA: " << endl;

                        cout << "1. USA-098" << endl;
                        cout << "\t 22-05-24  8:00AM  10 hrs  Rs.25000" << endl;


                        cout << "Select the flight you want to book: ";
                        cin >> choiceEco;

                        if (choiceEco == 1)
                        {
                           // charges == 25000;
                           charges = 25000;
                            cout << "\tYou have successfully booked the flight to USA with Ticket USA-098." << endl;
                            cout << "You can go back to main menu and take the ticket" << endl;
                            mainMenu();
                        }


                        else
                        {
                            cout << "Invalid input. Shifting to previous menu." << endl;
                            flight();
                        }
                    }
                    break;

                    case 2: // for business class
                        {
                        cout << "\n\n\tThe following tickets are available for Business Class to USA: " << endl;

                        cout << "1. USA-543" << endl;
                        cout << "\t 21-05-24  8:00PM  6 hrs  Rs.35000" << endl;

                        cout << "2. USA-098"<< endl;
                        cout << "\t 27-05-24  10:00AM  8 hrs  Rs.33000" << endl;


                        cout << "Select the flight you want to book: ";
                        cin >> choiceBuss;

                        if (choiceBuss == 1)
                        {
                            //charges == 35000;
                            charges = 35000;
                            cout << "\tYou have successfully booked the flight to USA with Ticket USA-543." << endl;
                            cout << "You can go back to main menu and take the ticket" << endl;
                        }

                        else if (choiceBuss == 2)
                        {
                            //charges == 33000;
                            charges = 33000;
                            cout << "\tYou have successfully booked the flight to USA with Ticket USA-098." << endl;
                            cout << "You can go back to main menu and take the ticket" << endl;
                            mainMenu();
                        }


                        else
                        {
                            cout << "Invalid input. Shifting to previous menu." << endl;
                            flight();
                        }
                    }
                    break;

                    case 3: // for first class
                        {
                        cout << "\n\n\tThe following tickets are available for First Class to USA: " << endl;

                        cout << "1. USA-536" << endl;
                        cout << "\t 27-05-24  8:00PM  4 hrs  Rs.50000" << endl;

                        cout << "2. USA-167"<< endl;
                        cout << "\t 28-05-24  10:00AM  6 hrs  Rs.45000" << endl;


                        cout << "Select the flight you want to book: ";
                        cin >> choiceFirst;

                        if (choiceFirst == 1)
                        {
                           // charges == 50000;
                           charges = 50000;
                            cout << "\tYou have successfully booked the flight to USA with Ticket USA-536." << endl;
                            cout << "You can go back to main menu and take the ticket" << endl;
                            mainMenu();
;                        }

                        else if (choiceFirst == 2)
                        {
                            //charges == 45000;
                            charges = 45000;
                            cout << "\tYou have successfully booked the flight to USA with Ticket USA-167." << endl;
                            cout << "You can go back to main menu and take the ticket" << endl;
                            mainMenu();
                        }

                        else
                        {
                            cout << "Invalid input. Shifting to previous menu." << endl;
                            flight();
                        }
                        }
                        break;

                    default:
                        {
                            cout << "Invalid input. Shifting to previous menu." << endl;
                            flight();
                        }

                        }
                }
//-------------------------------------------------------------------------------------------------------------------------------------------------------
                    case 5:
                        {
                cout << "\tWELCOME TO COMSATS AIRLINES TO AUSTRALIA!" << endl;
                cout << "\n-----Your comfort is our priority-----" << endl;
                cout << "---We believe in Quality Passenger Facilities---" << endl;

                cout << "\n\tSelect your class of service: " << endl;
                cout << "1. Economy class" << endl;
                cout << "2. Business Class" << endl;
                cout << "3. First Class" << endl;

                cin >> serviceClass;

                switch (serviceClass)
                {
                case 1: // for economy class
                    {
                        cout << "\n\n\tThe following tickets are available for Economy Class to AUSTRALIA: " << endl;

                        cout << "1. AUS-098" << endl;
                        cout << "\t 22-05-24  8:00AM  10 hrs  Rs.25000" << endl;

                        cout << "2. AUS-786"<< endl;
                        cout << "\t 25-05-24  10:00PM  12 hrs  Rs.23000" << endl;

                        cout << "Select the flight you want to book: ";
                        cin >> choiceEco;

                        if (choiceEco == 1)
                        {
                           // charges == 25000;
                           charges = 25000;
                            cout << "\tYou have successfully booked the flight to Australia with Ticket AUS-098." << endl;
                            cout << "You can go back to main menu and take the ticket" << endl;
                            mainMenu();
                        }

                        else if (choiceEco == 2)
                        {
                            //charges == 23000;
                            charges = 23000;
                            cout << "\tYou have successfully booked the flight to Australia with Ticket AUS-786." << endl;
                            cout << "You can go back to main menu and take the ticket" << endl;
                            mainMenu();
                        }

                        else
                        {
                            cout << "Invalid input. Shifting to previous menu." << endl;
                           flight();
                        }
                    }
                    break;

                    case 2: // for business class
                        {
                        cout << "\n\n\tThe following tickets are available for Business Class to AUSTRALIA: " << endl;

                        cout << "1. AUS-543" << endl;
                        cout << "\t 21-05-24  8:00PM  6 hrs  Rs.35000" << endl;

                        cout << "2. AUS-098"<< endl;
                        cout << "\t 27-05-24  10:00AM  8 hrs  Rs.33000" << endl;

                        cout << "Select the flight you want to book: ";
                        cin >> choiceBuss;

                        if (choiceBuss == 1)
                        {
                            //charges == 35000;
                            charges = 35000;
                            cout << "\tYou have successfully booked the flight to Australia with Ticket AUS-543." << endl;
                            cout << "You can go back to main menu and take the ticket" << endl;
                            mainMenu();
                        }

                        else if (choiceBuss == 2)
                        {
                           // charges == 33000;
                           charges = 33000;
                            cout << "\tYou have successfully booked the flight to Australia with Ticket AUS-098." << endl;
                            cout << "You can go back to main menu and take the ticket" << endl;
                            mainMenu();
                        }

                        else
                        {
                            cout << "Invalid input. Shifting to previous menu." << endl;
                           flight();
                        }
                    }
                    break;

                    case 3: // for first class
                        {
                        cout << "\n\n\tThe following tickets are available for First Class to AUSTRALIA: " << endl;

                        cout << "1. AUS-536" << endl;
                        cout << "\t 27-05-24  8:00PM  4 hrs  Rs.50000" << endl;

                        cout << "2. AUS-167"<< endl;
                        cout << "\t 28-05-24  10:00AM  6 hrs  Rs.45000" << endl;

                        cout << "Select the flight you want to book: ";
                        cin >> choiceFirst;

                        if (choiceFirst == 1)
                        {
                           // charges == 50000;
                           charges = 50000;
                            cout << "\tYou have successfully booked the flight to Australia with Ticket AUS-536." << endl;
                            cout << "You can go back to main menu and take the ticket" << endl;
                            mainMenu();
                        }

                        else if (choiceFirst == 2)
                        {
                           // charges == 45000;
                           charges = 45000;
                            cout << "\tYou have successfully booked the flight to Australia with Ticket AUS-167." << endl;
                            cout << "You can go back to main menu and take the ticket" << endl;
                            mainMenu();
                        }
                        else
                        {
                           flight();
                        }
                        }
                        break;

                    default:
                        {
                            cout << "Invalid input. Shifting to previous menu." << endl;
                            flight();
                        }

                        }
                        }
//--------------------------------------------------------------------------------------------------------------------------------------------------------
                    case 6:
                        {
                cout << "\tWELCOME TO COMSATS AIRLINES TO TURKEY!" << endl;
                cout << "\n-----Your comfort is our priority-----" << endl;
                cout << "---We believe in Quality Passenger Facilities---" << endl;

                cout << "\n\tSelect your class of service: " << endl;
                cout << "1. Economy class" << endl;
                cout << "2. Business Class" << endl;
                cout << "3. First Class" << endl;

                cin >> serviceClass;

                switch (serviceClass)
                {
                case 1: // for economy class
                    {
                        cout << "\n\n\tThe following tickets are available for Economy Class to TURKEY: " << endl;

                        cout << "1. TUR-098" << endl;
                        cout << "\t 22-05-24  8:00AM  10 hrs  Rs.25000" << endl;

                        cout << "2. TUR-786"<< endl;
                        cout << "\t 25-05-24  10:00PM  12 hrs  Rs.23000" << endl;


                        cout << "Select the flight you want to book: ";
                        cin >> choiceEco;

                        if (choiceEco == 1)
                        {
                            //charges == 25000;
                            charges = 25000;
                            cout << "\tYou have successfully booked the flight to Turkey with Ticket TUR-098." << endl;
                            cout << "You can go back to main menu and take the ticket" << endl;
                            mainMenu();
                        }

                        else if (choiceEco == 2)
                        {
                            //charges == 23000;
                            charges = 23000;
                            cout << "\tYou have successfully booked the flight to Turkey with Ticket TUR-786." << endl;
                            cout << "You can go back to main menu and take the ticket" << endl;
                            mainMenu();
                        }

                        else
                        {
                            cout << "Invalid input. Shifting to previous menu." << endl;
                           flight();
                        }
                    }
                    break;

                    case 2: // for business class
                        {
                        cout << "\n\n\tThe following tickets are available for Business Class to TUR: " << endl;

                        cout << "1. TUR-543" << endl;
                        cout << "\t 21-05-24  8:00PM  6 hrs  Rs.35000" << endl;

                        cout << "2. TUR-098"<< endl;
                        cout << "\t 27-05-24  10:00AM  8 hrs  Rs.33000" << endl;


                        cout << "Select the flight you want to book: ";
                        cin >> choiceBuss;

                        if (choiceBuss == 1)
                        {
                            //charges == 35000;
                            charges = 35000;
                            cout << "\tYou have successfully booked the flight to Turkey with Ticket TUR-543." << endl;
                            cout << "You can go back to main menu and take the ticket" << endl;
                            mainMenu();
                        }

                        else if (choiceBuss == 2)
                        {
                            //charges == 33000;
                            charges = 33000;
                            cout << "\tYou have successfully booked the flight to Turkey with Ticket TUR-098." << endl;
                            cout << "You can go back to main menu and take the ticket" << endl;
                            mainMenu();
                        }

                        else
                        {
                            cout << "Invalid input. Shifting to previous menu." << endl;
                          flight();
                        }
                    }
                    break;

                    case 3: // for first class
                        {
                        cout << "\n\n\tThe following tickets are available for First Class to TURKEY: " << endl;

                        cout << "1. TUR-536" << endl;
                        cout << "\t 27-05-24  8:00PM  4 hrs  Rs.50000" << endl;


                        cout << "Select the flight you want to book: ";
                        cin >> choiceFirst;

                        if (choiceFirst == 1)
                        {
                            //charges == 50000;
                            charges = 50000;
                            cout << "\tYou have successfully booked the flight to Turkey with Ticket TUR-536." << endl;
                            cout << "You can go back to main menu and take the ticket" << endl;
                            mainMenu();
                        }

                        else
                        {
                            cout << "Invalid input. Shifting to previous menu." << endl;
                           flight();
                        }
                        }
                        break;

                    default:
                        {
                            cout << "Invalid input. Shifting to previous menu." << endl;
                          flight();
                        }

                      }

//--------------------------------------------------------------------------------------------------------------------------------------------------------

        }

             }

        cout << "Enter any key to go back to main menu: ";
        cin >> backk;

        if (backk == 1)
            mainMenu();
        else
            mainMenu();

}
};

 int  registration :: charges;
 int  registration :: choice ;

class  ticket :  public  registration , public detail
{
    public:

    void display_bill ()
    {
        string destination = " ";
        ofstream outfile;
        outfile.open("voucher.txt") ;

        outfile<<"\n\n\n"<<endl;
        outfile<<"\t\t\t\t\t********************************************"<<endl;
        outfile<<"\t\t\t\t\t              COMSATS AIRLINES              "<<endl;
        outfile<<"\t\t\t\t\t********************************************"<<endl;
        outfile<<"\t\t\t\t\t______________Here is your ticket___________"<<endl;
        outfile<<"\t\t\t\t\t____________________________________________"<<endl;
        outfile<<"\t\t\t\t\t     Customer ID     :     "<<detail::cID<<endl;
        outfile<<"\t\t\t\t\t     Customer Name   :     "<<detail::name<<endl;
        outfile<<"\t\t\t\t\t     Customer Age    :     "<<detail::age<<endl;
        outfile<<"\t\t\t\t\t     Customer Gender :     "<<detail::gender<<endl;
        outfile<<"\t\t\t\t\t     Mobile Number   :     "<<detail::Mobile<<endl;
        outfile<<"\t\t\t\t\t=================Description================"<<endl;


        if ( registration :: choice == 1)
        {
            destination = "Dubai";
        }

        else if ( registration::choice == 2)
        {
            destination = "Canada";
        }

        else if ( registration::choice == 3)
        {
            destination = "UK";
        }

        else if ( registration::choice == 4)
        {
            destination = "USA";
        }

        else if ( registration::choice == 5)
        {
            destination = "Australia";
        }

        if ( registration::choice == 6)
        {
            destination = "Turkey";
        }

        outfile<<"\t\t\t\t\t      Destination    :      "<<destination<<endl;
        outfile<<"\t\t\t\t\t      Flight Cost    :      "<<registration::charges<<endl;

    }

   // outfile.close();

   // };

    void displaybill_infile ()
    {
        ifstream infile("voucher.txt");
     {
        if(! infile)
        {
            cout<<"File not found !"<<endl;
        }

        char arr [100];

        while(!infile.eof())
        {
            infile.getline(arr,100);
            cout<<arr<<endl;
        }
     }

     infile.close();

    }

};


    void  showcustomer_guidelines()
    {

    cout << "Welcome to COMSATS AIRLINE" << endl << endl;
    cout << "Passenger Guidelines for Reservation" << endl << endl;
    cout << "Dear Passenger," << endl << endl;
    cout << "We are delighted to have you choose COMSATS AIRLINE for your travel needs. To ensure a smooth and enjoyable journey, please take note of the following guidelines for our reservation system:" << endl << endl;
    cout << "1. Booking Process:" << endl;
    cout << "- Visit our official website or mobile app to book your flight." << endl;
    cout << "- Provide accurate passenger information, including full names, contact details, and any special requirements." << endl;
    cout << "- Select your preferred seat, meal options, and additional services during the booking process." << endl << endl;
    cout << "2. Ticket Confirmation:" << endl;
    cout << "- After completing your booking, you will receive a confirmation email or SMS with your itinerary and e-ticket details. Please review this information carefully and contact us immediately if there are any discrepancies." << endl << endl;
    cout << "3. Check-in Procedures:" << endl;
    cout << "- Online check-in is available 24 hours before the scheduled departure time." << endl;
    cout << "- You can check in via our website or mobile app by entering your booking reference and passenger details." << endl;
    cout << "- Alternatively, you can check in at the airport counters. Please arrive well in advance to avoid any delays." << endl << endl;
    cout << "4. Baggage Allowance:" << endl;
    cout << "- Familiarize yourself with our baggage policy regarding size, weight limits, and any applicable fees." << endl;
    cout << "- Ensure your baggage is properly labeled with your name and contact information." << endl << endl;
    cout << "5. Security and Immigration:" << endl;
    cout << "- Carry valid identification and travel documents, including passports, visas, and any required permits." << endl;
    cout << "- Comply with security screening procedures at the airport for a hassle-free experience." << endl << endl;
    cout << "6. Boarding Process:" << endl;
    cout << "- Boarding gates close 20 minutes before departure. Please be at the gate well in advance to avoid missing your flight." << endl;
    cout << "- Follow the instructions of our ground staff and present your boarding pass for scanning." << endl << endl;
    cout << "7. In-flight Experience:" << endl;
    cout << "- Sit back, relax, and enjoy your flight with COMSATS AIRLINE." << endl;
    cout << "- Our cabin crew is dedicated to ensuring your comfort and safety throughout the journey." << endl;
    cout << "- Feel free to avail yourself of our in-flight entertainment, refreshments, and amenities." << endl << endl;
    cout << "8. Arrival and Baggage Claim:" << endl;
    cout << "- Upon arrival at your destination, follow signs to the baggage claim area." << endl;
    cout << "- Collect your baggage promptly and double-check the tags to ensure you have the correct luggage." << endl << endl;
    cout << "9. Feedback and Assistance:" << endl;
    cout << "- We value your feedback. If you have any comments, suggestions, or concerns regarding your experience, please reach out to our customer service team." << endl;
    cout << "- For any assistance during your journey, our staff is available to assist you at the airport or through our customer service channels." << endl << endl;
    cout << "Thank you for choosing COMSATS AIRLINE. We look forward to serving you and wish you a pleasant journey!" << endl << endl;
    cout << "Warm regards," << endl;
    cout << "COMSATS AIRLINE "<< endl;

 }

 const int ROWS = 8;
 const int COLS = 8;

void displaySeats(char seats[ROWS][COLS]) {
   // cout<<"                                "<<endl;
     cout<<"================================"<<endl;
    cout << "\n\tSeat Arrangement:\n";
     cout<<"================================"<<endl;
     cout<<"                                "<<endl;
    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLS; ++j) {
            cout << "\t"<<seats[i][j] << ' ';
        }
        cout <<endl;
    }
}

bool bookSeat(char seats[ROWS][COLS], int row, int col) {
    if (row < 0 || row >= ROWS || col < 0 || col >= COLS) {
        cout << "Invalid seat number.\n";
        return false;
    }
    if (seats[row][col] == 'X') {
        cout << "Seat already booked.\n";
        return false;
    }
    seats[row][col] = 'X';
    cout << "Seat booked successfully.\n";
    return true;
}

void mainMenu ()
{
    int choice;
    int exit;


    cout<<"\n\n\n\n\n "<<endl;
    //cout<<" \t\t\t\t***************************************************"<<endl;
    //cout<<" \t\t\t\t*           WELCOME TO COMSATS AIRLINES           *"<<endl;
    //cout<<" \t\t\t\t***************************************************"<<endl;
    cout<<" \t\t\t\t**=================================================**"<<endl;
    cout<<" \t\t\t\t**                    MAIN MENU                    **"<<endl;
    cout<<" \t\t\t\t**=================================================**"<<endl;
    cout<<" \t\t\t\t**                                                 **"<<endl;
    cout<<" \t\t\t\t**        Press 1 >> Customer Details              **"<<endl;
    cout<<" \t\t\t\t**        Press 2 >> Flight Registration           **"<<endl;
    cout<<" \t\t\t\t**        Press 3 >> Ticket and Charges            **"<<endl;
    cout<<" \t\t\t\t**        Press 4 >> Passenger Guidelines          **"<<endl;
    cout<<" \t\t\t\t**        Press 5 >> Check Avalaible Flights       **"<<endl;
    cout<<" \t\t\t\t**        Press 6 >> Seat Booking & Display        **"<<endl;
    cout<<" \t\t\t\t**        Press 7 >> Exit                          **"<<endl;
    cout<<" \t\t\t\t**                                                 **"<<endl;
    cout<<" \t\t\t\t**=================================================**"<<endl;
    cout<<"Enter Your Choice"<<endl;
    cin>>choice;

    system ("cls");
    detail d;
    registration r;
    ticket t;

        switch(choice)
    {
        case 1:
        {

            cout<<"\t\t\t\t\t==================================================="<<endl;
            cout<<"\t\t\t\t\t--------------- Customer details:------------------"<<endl;
            cout<<"\t\t\t\t\t==================================================="<<endl;
            cout<<endl;
            d.get_info_customer();
            d.display_customerinfo();
            cout<<"Press 1 to return to MAIN MENU:"<<endl;
            cout<<"Press any key to exit"<<endl;
            cin >>exit;

            if (exit==1)
            {
                mainMenu();
            }
            else
            {
                return ;
            }
            break;

        }

            case 2:
                {
                    cout<<"\t\t\t\t\t========================"<<endl;
                    cout<<"\t\t\t\t\t------Book a Flight-----"<<endl;
                    cout<<"\t\t\t\t\t========================"<<endl;
                    r.flight();
                    cout<<"Press 1 to return to MAIN MENU:"<<endl;
                    cout<<"Press any key to exit"<<endl;
                    cin>>exit;

                    if (exit==1)
                    {
                        mainMenu();
                    }
            else
            {
                return;

            }
                    break;

              }

            case 3:
            {
                cout<<"\t\t\t\t\t\t=========================="<<endl;
                cout<<"\t\t\t\t\t\t------Get your Ticket-----"<<endl;
                cout<<"\t\t\t\t\t\t=========================="<<endl;
                t.display_bill();
                cout<<"Your ticket is booked successfully."<<endl;
                cout<<"To view your Ticket Press 2"<<endl;
                cin>>exit;

                if (exit==2)
                {

                 t.displaybill_infile();
                    cout<<"Press 1 to return to MAIN MENU:"<<endl;
                    cout<<"Press any key to exit"<<endl;
                    cin>>exit;

                    if (exit==1)
                {
                    mainMenu();
                }
            else
            {
                return ;

            }

                }
                else
                {
                    mainMenu();
                }
                break;
            }

            case 4:
            {
                cout<<"\t\t\t\t\t============================="<<endl;
                cout<<"\t\t\t\t\t-----Customer Guidelines-----"<<endl;
                cout<<"\t\t\t\t\t============================="<<endl;
                showcustomer_guidelines();
                cout<<"Press 1 to return to MAIN MENU:"<<endl;
                cout<<"Press any key to exit"<<endl;
                cin>>exit;

                if (exit==1)
                {
                    mainMenu();
                }
                else
                {
                    return ;

                }
                break;
            }

  case 5:
            {
                cout<<"-----Available Flights Now-----"<<endl;
                cout<<"                               "<<endl;
                 const int MAX_FLIGHTS = 100;
                 Flight flights[MAX_FLIGHTS];
                 int numFlights = 0;


                initializeFlights(flights, numFlights);
                displayFlights(flights, numFlights);
                cout<<"Press 1 to return to MAIN MENU:"<<endl;
                cout<<"Press any key to exit"<<endl;
                cin>>exit;

                if (exit==1)
                {
                    mainMenu();
                }
                else
                {
                    return ;

                }
                break;
            }


      case 6:
            {
                cout<<"\t\t\t\t\t============================="<<endl;
                cout<<"\t\t\t\t\t----Seat Booking & Display---"<<endl;
                cout<<"\t\t\t\t\t============================="<<endl;
                char seats[ROWS][COLS];
                for (int i = 0; i < ROWS; i++) {
                for (int j = 0; j < COLS; j++) {
                seats[i][j] = 'O';
            }
        }

         int row, col;
        char continueBooking;

         do {
        displaySeats(seats);

        cout << "Enter the row and column of the seat you want to book (e.g., 1 2): ";
        cin >> row >> col;


        row--;
        col--;

        bookSeat(seats, row, col);

        cout << "Do you want to book another seat? (y/n): ";
        cin >> continueBooking;

    } while (continueBooking == 'y' || continueBooking == 'Y');

    cout << "Final Seat Arrangement:\n";
    displaySeats(seats);
                cout<<"Press 1 to return to MAIN MENU:"<<endl;
                cout<<"Press any key to exit"<<endl;
                cin>>exit;

                if (exit==1)
                {
                    mainMenu();
                }
                else
                {
                    return ;

                }
                break;
            }



       case 7:
           {
               cout<<"\n\n\n\n\t\t\t\t\t-------Exit Program---------\n";
               cout<<"\t\t\t\t\tPress 1 to return to MAIN MENU:"<<endl;
                cout<<"\t\t\t\t\tPress any key to exit"<<endl;
                cin>>exit;

                if (exit==1)
                {
                    mainMenu();
                }
                else
                {
                    return ;
                }
           }

                   default:
            cout<< "Invalid choice. Please try again." << endl;
            mainMenu();
            break;
    }
}

bool isLoggedIn ()
{
    string username , password;
    string un , pw;

    cout << "\n\tEnter your username: ";
    cin >> username;
    cout << "\tEnter your password: ";
    cin >> password;

    ifstream read(username + ".txt");
    getline(read , un);
    getline(read , pw);

    if (un == username && pw == password)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    cout<<" \n\n\n\n\n "<<endl;
    cout<<" \t\t\t\t**=================================================**"<<endl;
    cout<<" \t\t\t\t**                                                 **"<<endl;
    cout<<" \t\t\t\t**                                                 **"<<endl;
    cout<<" \t\t\t\t**                                                 **"<<endl;
    cout<<" \t\t\t\t**=================================================**"<<endl;
    cout<<" \t\t\t\t**                   WELCOME TO                    **"<<endl;
    cout<<" \t\t\t\t**             CHAHAT AIRLINES PVT LTD             **"<<endl;
    cout<<" \t\t\t\t**=================================================**"<<endl;
    cout<<" \t\t\t\t**                                                 **"<<endl;
    cout<<" \t\t\t\t**                                                 **"<<endl;
    cout<<" \t\t\t\t**                                                 **"<<endl;
    cout<<" \t\t\t\t**=================================================**"<<endl;

    system ("pause");
    system ("cls");

        int choice;

    cout << "\n\n\n\n\n\t\t\t\t\t1. Registeration" << endl;
    cout << "\t\t\t\t\t2. Login" << endl;

    cout << "\n\t\t\t\t\tEnter your choice: ";
    cin >> choice;


    if (choice == 1)
    {
        string username , password;

        cout << "\n\n\t\t\t\t\t-------REGISTRATION-------" << endl;
        cout << "\n\t\t\t\t\tEnter your username: ";
        cin.get();
        getline(cin, username);
        //cin >> username;
        cout << "\t\t\t\t\tEnter your password: ";
        cin >> password;

        ofstream file;
        file.open (username + ".txt");
        file << username << endl << password;
        file.close();

        cout << "\t\t\t\t\tWELCOME " << username << "!" << endl;
    }

    else if (choice == 2)
    {
        bool status = isLoggedIn();

        if(!status)
        {
            //system("cls");
            cout << "\n\t\t\t\tInvalid input! Taking you back to the Dashboard!" << endl;
            cout << endl;
            main();
            return 0;
        }

        else
        {
            cout << "\n\t\t\t\t\tYou are successfully logged in! " << endl;
            cout << endl;

            int choose;
            cout << "\t\t\t\t\t1. Main Menu" << endl;
            cout << "\t\t\t\t\t2. Log out" << endl;
            cout << endl;
            cout << "\t\t\t\t\tEnter your choice: ";
            cin >> choose;

            if(choose == 1)
            {
                mainMenu();
            }

            else if(choose == 2)
            {
                system("exit");
            }

            return 1;
        }
    }
   mainMenu();
    return 0;

}


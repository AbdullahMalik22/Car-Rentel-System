#include<iostream>
using namespace std;
int main()
{
	int CarsNumb[5]{
		8,8,8,8,8
	};
	string CarNames[5] = {
		"Audi","BMW","Honda Civic","Tesla","Mercedes Benz"
	};
	string color;
	char CHOICE;
	int days = 0; int willing = 0;
	string name; ; string customer;
	string ADD; long long num = 0;
	int rent = 0; int bill = 0;
	string username;
	int password; int opt;


	cout << "                         ----------------------------------" << endl;
	cout << "                   ------( HELLO !! WELCOME TO OUR GARRAGE)------- " << endl;
	cout << "                             (RENT A CAR SYSTEM SERVICES)" << endl;
	cout << "                         ----------------------------------" << endl;
	cout << endl;
	cout << endl;
	cout << "      IF YOU WANT TO SEE THE MENU THEN PRESS 1 OTHERWISE PRESS ANY KEY FOR EXIT" << endl;
	cin >> opt;
	switch (opt) {
	case 1:
		cout << "                         HERE IS THE MENU " << endl;
		cout << "                      1- press 'A' FOR AUDDI " << endl;
		cout << "                      2- press 'B' FOR  BMW " << endl;
		cout << "                      3- press 'H' FOR HONDA " << endl;
		cout << "                      4- press 'T' FOR TESLA " << endl;
		cout << "                      5- press 'M' FOR MERCEDES " << endl;
		cout << "                      6- Press 'S' For stocks   " << endl;
		cout << "                      7- Press any key to terminate  " << endl;
		cout << endl;
		break;
	default:
		cout << "                THANKS FOR COMING SIR PLEASE COME AGAIN ....." << endl;
		return 0;
	}

CHOICE:
	cout << "                PLEASE SELECT YOUR CHOICE FROM THE ABOVE GIVEN MENU" << endl;
	cin >> CHOICE;

	switch (CHOICE)
	{
	case 'A':
		cout << "  black ,blue ,grey ,pink and white COLOURS ARE AVAILABLE ONLY" << endl;
		cout << "WHICH COLOUR DO YOU WANT FOR YOUR CAR SELECT FROM THE MENTIONED ABOVE : ";
		cin >> color;
		if (color == "black" || color == "blue" || color == "grey" || color == "pink" || color == "white") {
			cout << "     COLOUR:           ---------                  " << color << endl;

		}
		else {
			cout << "                  COLOUR IS NOT AVAILABLE...";
			return 0;
		}
		cout << "                      YOUR CHOICE IS AUDII" << endl;
		cout << "                 HERE ARE SOME SPECS OF YOUR MODEL" << endl;
		cout << "-------------------------------------------------------------------" << endl;
		cout << "  MODEL NAME:          ---------                  AUDII A4         " << endl;
		cout << "  MAX SPEED:           ---------                  241 Kmph         " << endl;
		cout << "NO. OF CYLINEDS:       ---------                     4             " << endl;
		cout << "   ENGINE:             ---------                   1998 cc         " << endl;
		cout << "   varient:            ---------                  electric         " << endl;
		cout << "  RENT per day:        ---------                    $50            " << endl;
		cout << "-------------------------------------------------------------------" << endl;
		cout << "          IF YOU ARE WILLING THEN I WILL MAKE YOUR INVOICE " << endl;
		cout << "                - IF YOU ARE WILLING THEN PRESS 1" << endl;
		cout << "                - IF YOU ARE NOT WILLING THEN PRESS 2" << endl;
		cin >> willing;
		switch (willing) {
		case 1:
			cout << "          I AM WILLING  PLEASE PROVIDE ME THE INVOICE" << endl;
			cout << "            SURE SIR PLESE FULFILL SOME FORMALITIES" << endl;
			cout << "          FOR HOW MANY DAYS YOU WANT TO KEEP THE CAR" << endl;
			cin >> days;
			cout << "      I WANT SOME PERSONAL DETAILS FOR FURTHER PROCESS" << endl;
			cout << "---------------------------------------------------------" << endl;
			cout << "                     PERSONAL DETAILS                    " << endl;
			cout << "---------------------------------------------------------" << endl;
			cout << "   NAME                                    ";
			cin>>name;
			cout << "Contact Nuumber                            ";
			cin >> num;
			cout << "  Address                                  ";
			cin >> ADD;
			cout << "---------------------------------------------------------" << endl;
			rent = days * 50;
			cout << "              Here is your invoice sir" << endl;
			cout << "-----------------------------------------------------------------------" << endl;
			cout << "Customer name:                           " << name << endl;
			cout << "Contact Nuumber:                         " << num << endl;
			cout << "  ADDRESS:                               " << ADD << endl;
			cout << " Total Rent:                             " << rent << "$" << endl;
			cout << "-----------------------------------------------------------------------" << endl;
			cout << "           PLEASE PAY YOUR AMOUNT TO GET THE CAR" << endl;
			cout << "           YOUR TOTAL AMOUNT IS $" << rent << endl;
			cin >> bill;
			if (bill == rent) {
				cout << "ACCESS GRANTED" << endl;
			}
			else if (bill < rent) {
				cout << "      ACCESS DENIED PLEASE PAY THE ENTIRE PAYMENT TO GET THE CAR " << endl;
				return 0;
			}
			else if (bill > rent) {
				cout << "         YOUR CHANGE IS $ " << bill - rent << endl;
			}
			cout << "---------------------------------------------------------" << endl;
			cout << "                THANKS FOR RENTING A CAR                  " << endl;
			cout << "---------------------------------------------------------" << endl;
			cout << "            WOULD U LIKE TO SEE MORE CARS                " << endl;
			cout << "---------------------------------------------------------" << endl;
			CarsNumb[0]--;
			break;
		default:
			cout << "            I AM NOT INTERESTED SHOW SOMETYHING ELSE" << endl;
			break;
		}
		goto CHOICE;
		break;
	case 'S':
		cout << "        PLEASE ENTER THE CORRECT USERNAME AND PASSWORD TO SEE TEH STOCK" << endl;
		cin >> username;
		cin >> password;

		if (username == "M" && password == 00) {
			cout << "stock" << endl;
			for (int i = 0; i < 5; i++) {
				cout << CarNames[i] << " " << CarsNumb[i] << " " << "CARS" << endl;
			}
		}
		else {
			cout << "                         !!! DENIED !!!";
		}
		break;
	case 'B':
		cout << "     black ,blue ,grey ,pink and white COLOURSW ARE AVAILABLE ONLY" << endl;
		cout << "   WHICH COLOUR DO YOU WANT FOR YOUR CAR FROM THE MENTIONED ABOVE: ";
		cin >> color;
		if (color == "black" || color == "blue" || color == "grey" || color == "pink" || color == "white") {
			cout << "     COLOUR:           ---------                  " << color << endl;

		}
		else {
			cout << "        COLOUR IS NOT AVAVILABLE..." << endl;
			return 0;
		}
		cout << "                  YOUR CHOICE IS BMW     " << endl;
		cout << "            HERE ARE SOME SPECS OF YOUR MODEL" << endl;
		cout << "-------------------------------------------------------------------" << endl;
		cout << "  MODEL NAME:          ---------                   BMW X3          " << endl;
		cout << "  MAX SPEED:           ---------                   250 Kmph        " << endl;
		cout << "NO. OF CYLINEDS:       ---------                     6             " << endl;
		cout << "   ENGINE:             ---------                   2998 cc         " << endl;
		cout << "   varient:            ---------                plug in hybrid     " << endl;
		cout << " RENT PER DAY:         ---------                    $75            " << endl;
		cout << "-------------------------------------------------------------------" << endl;
		cout << "          IF YOU ARE WILLING THEN I WILL MAKE YOUR IMVOICE" << endl;
		cout << "                -  IF YOU ARE WILLING THEN PRESS 1" << endl;
		cout << "             - IF YOU ARE NOT WILING THEN PRESS 2" << endl;
		cin >> willing;
		switch (willing) {
		case 1:
			cout << "  I AM WILLING  PLEASE PROVIDE ME THE INVOICE" << endl;
			cout << "     FOR HOW MANY DAYS YOU WANT TO KEEP THE CAR" << endl;
			cin >> days;
			cout << "I WANT SOME PERSONAL DETAILS FOR FURTHER PROCESS" << endl;
			cout << "---------------------------------------------------------------" << endl;
			cout << "                     PERSONAL DETAILS                    " << endl;
			cout << "---------------------------------------------------------------" << endl;
			cout << "   NAME                                           ";
			cin >> name;
			cout << "Contact Nuumber                                   ";
			cin >> num;
			cout << "  Address                                          ";
			cin >> ADD;
			cout << "----------------------------------------------------------------" << endl;
			rent = days * 75;
			cout << "              HERE IS YOUR INVOICE SIR" << endl;
			cout << "----------------------------------------------------------------" << endl;
			cout << "Customer name:                           " << name << endl;
			cout << "Contact Nuumber:                         " << num << endl;
			cout << "  ADDRESS:                               " << ADD << endl;
			cout << " Total Rent:                             " << rent << "$" << endl;
			cout << "-----------------------------------------------------------------" << endl;
			cout << "           PLEASE PAY YOUR AMOUNT TO GET THE CAR" << endl;
			cout << "           YOUR TOTAL AMOUNT IS $" << rent << endl;
			cin >> bill;
			if (bill == rent) {
				cout << "ACCESS GRANTED" << endl;
			}
			else if (bill < rent) {
				cout << "      ACCESS DENIED PLEASE PAY THE ENTIRE PAYMENT TO GET THE CAR" << endl;
				return 0;
			}
			else if (bill > rent) {
				cout << "         YOUR CHANGE IS $ " << bill - rent << endl;
			}
			cout << "---------------------------------------------------------" << endl;
			cout << "                THANKS FOR RENTING A CAR                 " << endl;
			cout << "---------------------------------------------------------" << endl;
			cout << "            WOULD U LIKE TO SEE MORE CARS                " << endl;
			cout << "---------------------------------------------------------" << endl;
			CarsNumb[1]--;
			break;
		default:
			cout << "             I AM NOT INTERESTED" << endl;
			break;
		}
		goto CHOICE;
		break;
	case 'H':
		cout << "     black ,blue ,grey ,pink and white COLOURS ARE AVAILABLE ONLY" << endl;
		cout << "        WHICH COLOUR DO YOU WANT FOR YOUR CAR FROM THE MENTIONED ABOVE: ";
		cin >> color;
		if (color == "black" || color == "blue" || color == "grey" || color == "pink" || color == "white") {
			cout << "     COLOUR:           ---------                  " << color << endl;

		}
		else {
			cout << "                 COLOUR IS NOT AVAILABLE..." << endl;
			return 0;
		}
		cout << "                YOUR CHOICE IS HONDA     " << endl;
		cout << "           HERE ARE SOME SPECS OF YOUR MODEL" << endl;
		cout << "-------------------------------------------------------------------" << endl;
		cout << "  MODEL NAME:          ---------                  CIVIC X          " << endl;
		cout << "  MAX SPEED:           ---------                   137 mph         " << endl;
		cout << "NO. OF CYLINEDS:       ---------                    4              " << endl;
		cout << "   ENGINE:             ---------                   1597 cc         " << endl;
		cout << "   varient:            ---------                    fuel           " << endl;
		cout << " RENT PER DAY:         ---------                    $35            " << endl;
		cout << "-------------------------------------------------------------------" << endl;
		cout << "          IF YOU ARE WILING THEN I WILL MAKE YOUR INVOICE" << endl;
		cout << "                -IF YOU ARE WILLLING THE PRESS  1" << endl;
		cout << "           - IF YOU ARE NOT WILLING THEN PRESS 2" << endl;
		cin >> willing;
		switch (willing) {
		case 1:
			cout << "       I AM WILLING  PLEASE PROVIDE ME THE INVOICE" << endl;
			cout << "        FOR HOW MANY DAYS YOU WANT TO KEEP THE CAR" << endl;
			cin >> days;
			cout << "    I WANT SOME PERSONAL DETAILS FOR FURTHER PROCESS" << endl;
			cout << "---------------------------------------------------------------------" << endl;
			cout << "                     PERSONAL DETAILS                    " << endl;
			cout << "---------------------------------------------------------------------" << endl;
			cout << "   NAME                                                 ";
			cin >> name;
			cout << "Contact Nuumber                                         ";
			cin >> num;
			cout << "  Address                                               ";
			cin >> ADD;
			cout << "----------------------------------------------------------------------" << endl;
			rent = days * 35;
			cout << "              Here is your invoice sir" << endl;
			cout << "------------------------------------------------------------------" << endl;
			cout << "Customer name:                           " << name << endl;
			cout << "Contact Nuumber:                         " << num << endl;
			cout << "  ADDRESS:                               " << ADD << endl;
			cout << " Total Rent:                             " << rent << "$" << endl;
			cout << "-------------------------------------------------------------------" << endl;
			cout << "           PLEASE PAY YOUR AMOUNT TO GET THE CAR" << endl;
			cout << "           YOUR TOTAL AMOUNT IS $" << rent << endl;
			cin >> bill;
			if (bill == rent) {
				cout << "ACCESS GRANTED" << endl;
			}
			else if (bill < rent) {
				cout << "      ACCESS DENIED PLEASE PAY THE ENTIRE PAYMENT " << endl;
				return 0;
			}
			else if (bill > rent) {
				cout << "         YOUR CHANGE IS $ " << bill - rent << endl;
			}
			cout << "---------------------------------------------------------" << endl;
			cout << "                THANKS FOR COMING SIR                    " << endl;
			cout << "---------------------------------------------------------" << endl;
			cout << "            WOULD U LIKE TO SEE MORE CARS                " << endl;
			cout << "---------------------------------------------------------" << endl;
			CarsNumb[2]--;
			break;
		default:
			cout << "             I AM NOT INTERESTED" << endl;
			break;
		}
		goto CHOICE;
		break;

	case 'T':
		cout << "       black ,blue ,grey ,pink and white colours are available only" << endl;
		cout << "      WHICH COLOUR DO YOU WANT FOR YOUR CAR FROM THE MENTIONED ABOVE: ";
		cin >> color;
		if (color == "black" || color == "blue" || color == "grey" || color == "pink" || color == "white") {
			cout << "     COLOUR:           ---------                  " << color << endl;

		}
		else {
			cout << "            COLOUR IS NOT AVAILABLE...";
			return 0;
		}
		cout << "                  YOUR CHOICE IS TESLA  " << endl;
		cout << "            HERE ARE SOME SPECS OF YOUR MODEL" << endl;
		cout << "-------------------------------------------------------------------" << endl;
		cout << "  MODEL NAME:          ---------                 TESLA S           " << endl;
		cout << "  MAX SPEED:           ---------                  200 mph          " << endl;
		cout << "NO. OF CYLINEDS:       ---------                    0              " << endl;
		cout << "   ENGINE:             ---------                  1597 cc          " << endl;
		cout << " TOP POOWER:           ---------                  1020 hp          " << endl;
		cout << "  varient:             ---------                 electric          " << endl;
		cout << " RENT PER DAY :        ---------                    $95            " << endl;
		cout << "-------------------------------------------------------------------" << endl;
		cout << "         IF YOU ARE WILLING THEN I WILL MAKE YOUR INVOICE" << endl;
		cout << "             IF YOU ARE WILLING THWN PRESS 1" << endl;
		cout << "          IF YOU ARE NOT WILLING THEN PRESS 2" << endl;
		cin >> willing;
		switch (willing) {
		case 1:
			cout << "  I AM WILLING  PLEASE PROVIDE ME THE INVOICE" << endl;
			cout << "     FOR HOW MANY DAYS  YOU WANT TO KEEP THE CAR" << endl;
			cin >> days;
			cout << "I WANT SOME PERSONAL DETAILS FOR FURTHER PROCESS" << endl;
			cout << "--------------------------------------------------------------------------" << endl;
			cout << "                     PERSONAL DETAILS                    " << endl;
			cout << "--------------------------------------------------------------------------" << endl;
			cout << "   NAME                                                 ";
			cin >> name;
			cout << "Contact Nuumber                                         ";
			cin >> num;
			cout << "  Address                                               ";
			cin >> ADD;
			cout << "---------------------------------------------------------------------------" << endl;
			rent = days * 95;
			cout << "             HERE IS YOUR INVOICE SIR" << endl;
			cout << "---------------------------------------------------------------------------" << endl;
			cout << "Customer name:                           " << name << endl;
			cout << "Contact Nuumber:                         " << num << endl;
			cout << "  ADDRESS:                               " << ADD << endl;
			cout << " Total Rent:                             " << rent << "$" << endl;
			cout << "----------------------------------------------------------------------------" << endl;
			cout << "           PLEASE PAY YOUR AMOUNT TO GET THE CAR" << endl;
			cout << "           YOUR TOTAL AMOUNT IS $" << rent << endl;
			cin >> bill;
			if (bill == rent) {
				cout << "ACCESS GRANTED" << endl;
			}
			else if (bill < rent) {
				cout << "      ACCESS DENIED PLEASE PAY THE ENTIRE PAYMENT TO GET THE CAR " << endl;
				return 0;
			}
			else if (bill > rent) {
				cout << "         YOUR CHANGE IS $ " << bill - rent << endl;
			}
			cout << "---------------------------------------------------------" << endl;
			cout << "                THANKS FOR RENTING A CAR                   " << endl;
			cout << "---------------------------------------------------------" << endl;
			cout << "            WOULD U LIKE TO SEE MORE CARS                " << endl;
			cout << "---------------------------------------------------------" << endl;
			CarsNumb[3]--;
			break;
		default:
			cout << "             I AM NOT INTERESTED" << endl;
			break;
		}
		goto CHOICE;
		break;

	case 'M':
		cout << "        black ,blue ,grey ,pink and white COLOURS ARE AVAILABLE ONLY" << endl;
		cout << "         WHICH COLOUR DO YOU WANT FOR YOUR CAR FROM THE MENTIONED ABOVE ";
		cin >> color;
		if (color == "black" || color == "blue" || color == "grey" || color == "pink" || color == "white") {
			cout << "     COLOUR:           ---------                  " << color << endl;

		}
		else {
			cout << "                    COLOUR IS NOT AVAILABLE...";
			return 0;
		}
		cout << "                   YOUR CHOICE IS MERCEDES    " << endl;
		cout << "               HERE ARE SOME SPECS OF YOUR MODEL" << endl;
		cout << "-------------------------------------------------------------------" << endl;
		cout << "  MODEL NAME:          ---------                mercedes benz      " << endl;
		cout << "  MAX SPEED:           ---------                318 Kmph           " << endl;
		cout << "NO. OF CYLINEDS:       ---------                   6               " << endl;
		cout << "   ENGINE:             ---------                  1993 cc          " << endl;
		cout << "   Varient:            ---------                 electric          " << endl;
		cout << "  RENT PER DAY:        ---------                  $105             " << endl;
		cout << "-------------------------------------------------------------------" << endl;
		cout << "        IF YOU ARE WILLING THEN I WIOLL MAKE YOUR INVOICE " << endl;
		cout << "              IF YOU ARE WILLING THEN PRESS 1" << endl;
		cout << "          IF YOU ARE NOT WILLING THEN PRESS 2" << endl;
		cin >> willing;
		switch (willing) {
		case 1:
			cout << "  I AM WILLING  PLEASE PROVIDE ME THE INVOICE" << endl;
			cout << "      For how many days u want to keep the car" << endl;
			cin >> days;
			cout << "I WANT SOME PERSONAL DETAILS FOR FURTHER PROCESS" << endl;
			cout << "-----------------------------------------------------------------------" << endl;
			cout << "                     PERSONAL DETAILS                    " << endl;
			cout << "-----------------------------------------------------------------------" << endl;
			cout << "   NAME                                                 ";
			cin >> name;
			cout << "Contact Nuumber                                         ";
			cin >> num;
			cout << "  Address                                               ";
			cin >> ADD;
			cout << "-------------------------------------------------------------------------" << endl;
			rent = days * 105;
			cout << "             HERE IS YOUR INVOICE SIR" << endl;
			cout << "-------------------------------------------------------------------------" << endl;
			cout << "Customer name:                           " << name << endl;
			cout << "Contact Nuumber:                         " << num << endl;
			cout << "  ADDRESS:                               " << ADD << endl;
			cout << " Total Rent:                             " << rent << "$" << endl;
			cout << "---------------------------------------------------------" << endl;
			cout << "           PLEASE PAY YOUR AMOUNT TO GET THE CAR" << endl;
			cout << "           YOUR TOTAL AMOUNT IS $" << rent << endl;
			cin >> bill;
			if (bill == rent) {
				cout << "ACCESS GRANTED" << endl;
			}
			else if (bill < rent) {
				cout << "      ACCESS DENIED PLEASE PAY THE ENTIRE PAYMENT TO GET THE CAR" << endl;
				return 0;
			}
			else if (bill > rent) {
				cout << "         YOUR CHANGE IS $ " << bill - rent << endl;
			}
			cout << "---------------------------------------------------------" << endl;
			cout << "                THANKS FOR RENTING CAR                   " << endl;
			cout << "---------------------------------------------------------" << endl;
			cout << "            WOULD U LIKE TO SEE MORE CARS                " << endl;
			cout << "---------------------------------------------------------" << endl;
			CarsNumb[4]--;
			break;
		default:
			cout << "                 I AM NOT INTERSETED" << endl;
			break;

		}
		goto CHOICE;
		break;

	default:
		cout << " IM VERY VERY SORRY THE MODEL WHICH ARE U TALKING ABOUT IS NOT AVAILABLE IN OUR GARRAGE" << endl;
		break;
	}
}
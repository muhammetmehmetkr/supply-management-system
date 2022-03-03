#include<iostream>
#include "payment.h"
#include "string.h"
#include<windows.h>

using namespace std;

void Payment::add_card(){
	
	cout<<"Please enter card number..."<<endl;
	cin>>card_number;
	
	cout<<"Please enter the 3 digit CVV code of the card..."<<endl;
	cin>>card_cvv;
	
	cout<<"Please enter the expiry date of the card..."<<endl;
	cin>>card_month>>card_year;
}
void Payment::edit_card(){
	
	cout<<"Please re-enter card number..."<<endl;
	cin>>card_number;
	
	cout<<"Please re-enter the 3 digit CVV code of the card..."<<endl;
	cin>>card_cvv;
	
	cout<<"Please re-enter the expiry date of the card..."<<endl;
	cin>>card_month>>card_year;
}
void Payment::delete_card(){
	
	card_number = 0;
	card_cvv = 0;
	card_month = 0;
	card_year = 0;	
	
	cout<<"Deleting card information...\n"<<endl;	
	Sleep(1000);	
	cout<<"Card information deleted successfully...\n";
	cout<<"----------------------------------------------------------------------------------------------------------------------"<<endl;	
}
void Payment::show_card(){
	cout<<"Card Number: "<<card_number<<endl;
	cout<<"CVV: "<<card_cvv<<endl;
	cout<<"Card expiry date: "<<card_month<<"/"<<card_year<<endl;
}


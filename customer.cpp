#include<iostream>
#include "customer.h"
#include "string.h"
#include<windows.h>

using namespace std;	// get set method
//--------------------------------------------------
void Customer::set_id(string customer_id){				
	this->customer_id = customer_id;
}
void Customer::set_password(string customer_password){
	this->customer_password = customer_password;
}
string Customer::get_id(){
	return customer_id;
}
string Customer::get_password(){
	return customer_password;
}
//--------------------------------------------------
void Customer::add_customer(){
	
	cout<<"Enter the customer's name, surname and address.."<<endl;
	cout<<"----------------------------------------------------------------------------------------------------------------------"<<endl;
	
	cout<<"Name: ";
	cin>>customer_name;
	
	cout<<"\nSurname: ";
	cin>>customer_surname;
	
	cout<<"\nAdress: ";
	cin>>customer_adress;
	
	cout<<"\n";
}
void Customer::edit_customer(){
	
	cout<<"Enter the customer's new information.."<<endl;
	cout<<"----------------------------------------------------------------------------------------------------------------------"<<endl;
	
	cout<<"Name: ";
	cin>>customer_name;
	
	cout<<"\nSurname: ";
	cin>>customer_surname;
	
	cout<<"\nAdress: ";
	cin>>customer_adress;
	
	cout<<"\n";
	
}
void Customer::delete_customer(){
	
	customer_name = "-";
	customer_surname = "-";
	customer_adress = "-";
	
	cout<<"Deleting customer information...\n"<<endl;	
	Sleep(1000);	
	cout<<"Customer information deleted successfully...\n";
	cout<<"----------------------------------------------------------------------------------------------------------------------"<<endl;
	
}
void Customer::show_customer_info(){
	
	cout<<"Customer Name: "<<customer_name<<endl;
	cout<<"Customer Surname: "<<customer_surname<<endl;
	cout<<"Customer Adress: "<<customer_adress<<endl;		
}

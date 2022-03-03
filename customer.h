#include<iostream>
#include "string.h"

using namespace std;

class Customer{
	private:
		string customer_id;
		string customer_password;
		
		string customer_name;
		string customer_surname;
		string customer_adress;
		
	public:		//	get-set method
	//--------------------------------------------------			
		void set_id(string customer_id);
		void set_password(string customer_password);
		string get_id();
		string get_password();   
	//--------------------------------------------------
		
		void add_customer();
		void edit_customer();		
		void delete_customer();
		void show_customer_info();		
};


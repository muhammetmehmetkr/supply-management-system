#include<iostream>
#include "admin.h"		// admin class
#include "customer.h"	// customer class
#include "product.h"	// product class
#include "order.h"		// order class
#include "payment.h"	// payment class
#include<windows.h>	

	/*		MUHAMMET MEHMET KIR  1904010013		*/
	/* 			SUPPLY MANAGEMENT SYSTEM			*/

using namespace std;

int main(){
	
	Admin admin;	// admin object	
	admin.set_id("admin");		// admin id
	admin.set_password("1234");		// admin password
	
	Customer c1;	// customer object		
	c1.set_id("customer");	// customer id
	c1.set_password("1234");	// customer password
	
	Product p1;		// product object
	Order o1;		// order object
	Payment m1;		// payment object
	
	
	int login;		// login process variable
	
	string id_1;
	string password_1;
	
	string id_2;
	string password_2;
	
	int selection;
	
	Menu_login:
		
	cout<<"\n";
	cout<<"\t\tLOGIN SCREEN\n"<<endl;				// login process
	cout<<"1-Admin Login\n2-Customer Login\n"<<endl;
	cout<<"Please choose an action.. "<<endl;
	cout<<"-----------------------------------------------------\n";
	cin>>login;
	
	system("cls");
	
	if(login<=0 || login>2){
		cout<<"--> Please enter an integer value between 0 and 3..."<<endl;
		cout<<"-----------------------------------------------------\n";
		goto Menu_login;
	}
		
	if(login==1){		// admin login
		for(int i=0;true;i++){
			cout<<"Please enter admin id: ";
			cin>>id_1;			
			cout<<"Please enter admin password: ";
			cin>>password_1;			
			cout<<"\n";
			
			if(admin.get_id() == id_1 && admin.get_password() != password_1){				
				Sleep(500);	
				system("cls");			
				cout<<"--> Your password is incorrect...\n"<<endl;							
			}	
			else if(admin.get_id() != id_1 && admin.get_password() == password_1){			
				Sleep(500);	
				system("cls");			
				cout<<"--> Your admin id is incorrect...\n"<<endl;				
			}
			else if(admin.get_id() != id_1 && admin.get_password() != password_1){		
				Sleep(500);	
				system("cls");			
				cout<<"--> Your admin id and password are incorrect...\n"<<endl;				
			}
			else{				
				Sleep(500);	
				system("cls");				
				cout<<"--> Login is successful...\n"<<endl;				
				break;				
			}
		}
	}
	if(login==2){	// customer login
		while(1){
			cout<<"Please enter customer id: ";
			cin>>id_2;				
			cout<<"Please enter customer password: ";
			cin>>password_2;			
			cout<<"\n";
			
			if(c1.get_id() == id_2 && c1.get_password() != password_2){				
				Sleep(500);	
				system("cls");			
				cout<<"--> Your password is incorrect...\n"<<endl;							
			}			
			else if(c1.get_id() != id_2 && c1.get_password() == password_2){				
				Sleep(500);	
				system("cls");		
				cout<<"--> Your customer id is incorrect...\n"<<endl;				
			}
			else if(c1.get_id() != id_2 && c1.get_password() != password_2){				
				Sleep(500);	
				system("cls");			
				cout<<"--> Your customer id and password are incorrect...\n"<<endl;				
			}
			else{				
				Sleep(500);	
				system("cls");					
				cout<<"--> Login is successful...\n"<<endl;				
				break;				
			}
		}	
	}
		
	if(login==1){		// ADMIN MENU
		Menu_1:	
				
		cout<<"\t\tADMIN MENU"<<endl;
		cout<<"1.)CUSTOMER MENU\n2.)PRODUCT MENU\n3.)ORDER MENU\n4.)EXIT\n"<<endl;	
		cout<<"Please choose an action.. "<<endl;
		cout<<"-----------------------------------------------------\n";
		cin>>selection;
		cout<<"\n";
		
		system("cls");
		
		if(selection<=0 || selection>4){
			cout<<"Please enter an integer value between 0 and 5."<<endl;
			cout<<"-----------------------------------------------------\n";
			goto Menu_1;
		}	
		
		while(1){	
			
			if(selection==1){			
				Menu_2:
					
				cout<<"1-Add Customer\n2-Edit Customer\n3-Delete Customer\n4-Show Customer Information\n5-Go Back Menu\n"<<endl;
				cout<<"Please choose an action.. "<<endl;
				cout<<"-----------------------------------------------------\n";
				cin>>selection;
				cout<<"\n";
				
				system("cls");
				
				if(selection<=0 || selection>5){
					cout<<"Please enter an integer value between 0 and 6."<<endl;
					cout<<"-----------------------------------------------------\n";
					goto Menu_2;
				}			
				if(selection==1){
					system("cls");
					c1.add_customer();									
				}
				if(selection==2){
					system("cls");
					c1.edit_customer();					
				}
				if(selection==3){
					system("cls");
					c1.delete_customer();					
				}
				if(selection==4){
					system("cls");
					c1.show_customer_info();
					cout<<"-----------------------------------------------------\n";					
				}
				if(selection==5){
					system("cls");
					goto Menu_1;
				}
				goto Menu_2;				
			}	
				
			if(selection==2){
				
				Menu_3:
					
				cout<<"1-Add Product\n2-Edit Product\n3-Delete Product\n4-Show Product Information\n5-Go Back Menu\n"<<endl;
				cout<<"Please choose an action.. "<<endl;
				cout<<"-----------------------------------------------------\n";
				cin>>selection;
				cout<<"\n";
				
				system("cls");
				
				if(selection<=0 || selection>5){
					cout<<"Please enter an integer value between 0 and 6."<<endl;
					cout<<"-----------------------------------------------------\n";
					goto Menu_3;
				}			
				if(selection==1){
					system("cls");
					p1.add_product();				
				}
				if(selection==2){
					system("cls");
					p1.edit_product();
				}
				if(selection==3){
					system("cls");
					p1.delete_product();
				}
				if(selection==4){
					system("cls");
					p1.show_product_info();
					cout<<"-----------------------------------------------------\n";		
				}
				if(selection==5){
					system("cls");
					goto Menu_1;
				}
				goto Menu_3;
			}
			if(selection==3){
				
				Menu_4:
				
				cout<<"1-Add Order\n2-Edit Order\n3-Delete Order\n4-Show Order Information\n5-Print Customer and Order Information\n6-Go Back Menu\n"<<endl;
				cout<<"Please choose an action.. "<<endl;
				cout<<"-----------------------------------------------------\n";
				cin>>selection;
				cout<<"\n";
				
				if(selection<=0 || selection>6){
					cout<<"Please enter an integer value between 0 and 7."<<endl;
					cout<<"-----------------------------------------------------\n";
					goto Menu_4;
				}			
				if(selection==1){
					system("cls");
					o1.add_order();				
				}
				if(selection==2){
					system("cls");
					o1.edit_order();
				}
				if(selection==3){
					system("cls");
					o1.delete_order();
				}
				if(selection==4){
					system("cls");
					o1.show_order_info();
					cout<<"-----------------------------------------------------\n";
				}
				if(selection==5){
					system("cls");
					cout<<"================ ORDER INFORMATIONS ================"<<endl;
					c1.show_customer_info();
					p1.show_product_info();
					o1.show_order_info();
					o1.print_orderTotal();
					cout<<"-----------------------------------------------------\n";						
				}
				if(selection==6){
					system("cls");
					goto Menu_1;
				}
				goto Menu_4;
			}
			if(selection==4){	// exit process.. 			
				cout<<"Logging out...\n\n";				
				Sleep(1000);				
				cout<<"Logout is done..."<<endl;				
				break;
			}
		}	
	}
	if(login==2){		// CUSTOMER MENU
		Menu_a:	
				
		cout<<"\t\tCUSTOMER MENU"<<endl;
		cout<<"1-Order Transactions\n2-Card Transactions\n3-Exit\n"<<endl;	
		cout<<"Please choose an action.. "<<endl;
		cout<<"-----------------------------------------------------\n";
		cin>>selection;
		cout<<"\n";
		
		system("cls");
		
		if(selection<=0 || selection>3){
			cout<<"Please enter an integer value between 0 and 4."<<endl;
			cout<<"-----------------------------------------------------\n";
			goto Menu_a;
		}
		for(int i=0;true;i++){
			
			if(selection==1){
				Menu_b:	
				
				cout<<"1-Give Order\n2-Edit Order\n3-Delete Order\n4-Show Order Information\n5-Go Back Menu\n"<<endl;	
				cout<<"Please choose an action.. "<<endl;
				cout<<"-----------------------------------------------------\n";
				cin>>selection;
				cout<<"\n";
				
				system("cls");
		
				if(selection<=0 || selection>5){
					cout<<"Please enter an integer value between 0 and 6."<<endl;
					cout<<"-----------------------------------------------------\n";
					goto Menu_b;
				}
				if(selection==1){
					system("cls");
					p1.product_table();
					p1.give_order();
					p1.show_invoice();
					cout<<"You are being redirected to the payment page...\n"<<endl;
					Sleep(1000);
					m1.add_card();
					cout<<"The order amount has been paid...\n"<<endl;
				}
				if(selection==2){
					system("cls");
					p1.edit_order();
				}
				if(selection==3){
					system("cls");
					p1.delete_order();
				}
				if(selection==4){
					system("cls");
					cout<<"================ ORDER INFORMATIONS ================"<<endl;
					p1.show_order();
					p1.show_invoice();
					cout<<"-----------------------------------------------------\n";
				}
				if(selection==5){
					system("cls");
					goto Menu_a;
				}			
				goto Menu_b;		
			}
			if(selection==2){
				Menu_c:
					
				cout<<"1-Edit Credit Card\n2-Delete Credit Card\n3-Show Credit Card Information\n4-Go Back Menu\n"<<endl;
				cout<<"Please choose an action.. "<<endl;
				cout<<"-----------------------------------------------------\n";
				cin>>selection;
				cout<<"\n";
				
				system("cls");
				
				if(selection<=0 || selection>5){
					cout<<"Please enter an integer value between 0 and 6."<<endl;
					cout<<"-----------------------------------------------------\n";
					goto Menu_c;
				}
				if(selection==1){
					system("cls");
					m1.edit_card();
				}
				if(selection==2){
					system("cls");
					m1.delete_card();
				}
				if(selection==3){
					system("cls");
					m1.show_card();
					cout<<"-----------------------------------------------------\n";		
				}
				if(selection==4){
					system("cls");
					goto Menu_a;
				}
				goto Menu_c;
			}
			if(selection==3){	// exit process.. 			
				cout<<"Logging out...\n\n";				
				Sleep(1000);				
				cout<<"Logout is done..."<<endl;				
				break;
			}
		}			
	}	
	return 0;
}

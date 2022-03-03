#include<iostream>
#include "order.h"
#include "string.h"
#include<windows.h>

using namespace std;

void Order::add_order(){
	
	cout<<"Enter the id, quantity, shipping weight and date of the order.."<<endl;
	cout<<"----------------------------------------------------------------------------------------------------------------------"<<endl;
	
	cout<<"Order id: ";
	cin>>order_id;
	
	cout<<"\nOrder price: ";
	cin>>order_price;
	
	cout<<"\nOrder quantity: ";
	cin>>order_quantity;
	
	cout<<"\nOrder shipping weight: ";
	cin>>order_shippingWeight;
	
	cout<<"\nOrder date: ";
	cin>>order_date;
	
	cout<<"\n";	
}
void Order::edit_order(){
	
	cout<<"Enter the new information of the order..."<<endl;
	cout<<"----------------------------------------------------------------------------------------------------------------------"<<endl;
	
	cout<<"Order id: ";
	cin>>order_id;
	
	cout<<"\nOrder price: ";
	cin>>order_price;
	
	cout<<"\nOrder quantity: ";
	cin>>order_quantity;
	
	cout<<"\nOrder shipping weight: ";
	cin>>order_shippingWeight;
	
	cout<<"\nOrder date: ";
	cin>>order_date;
	
	cout<<"\n";
	
}
void Order::delete_order(){
	
	order_id = "-";
	order_price = 0;
	order_quantity = 0;
	order_shippingWeight = 0.0;
	order_date = "-";
	
	cout<<"Deleting order information...\n"<<endl;	
	Sleep(1000);	
	cout<<"Order information deleted successfully...\n";
	cout<<"----------------------------------------------------------------------------------------------------------------------"<<endl;	
}
void Order::show_order_info(){
	
	cout<<"Order id: "<<order_id<<endl;
	cout<<"Order price: "<<order_price<<endl;
	cout<<"Order quantity: "<<order_quantity<<endl;
	cout<<"Order shipping weight: "<<order_shippingWeight<<endl;
	cout<<"Order date: "<<order_date<<endl;	
}
float Order::total_price(){
	
	return order_price*order_quantity;	
}
float Order::total_weight(){
	
	return order_shippingWeight*order_quantity;	
}
float Order::total_tax(){
	
	return order_price*order_quantity*0.08;		// 0.08 -> tax rate..	
}

void Order::print_orderTotal(){
	cout<<"Total Price: "<<total_price()<<"$"<<endl;
	cout<<"Total Weight: "<<total_weight()<<" kg"<<endl;
	cout<<"Total Tax: "<<total_tax()<<"$"<<endl;
}

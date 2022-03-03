#include<iostream>
#include "product.h"
#include "string.h"
#include<windows.h>

using namespace std;

Product::Product(){
}
Product::Product(string product_name,string product_stock,string product_category){
	this->product_name = product_name;
	this->product_stock = product_stock;
	this->product_category = product_category;
}

void Product::add_product(){
	
	cout<<"Enter the name, stock, unit price and category of the product.."<<endl;
	cout<<"----------------------------------------------------------------------------------------------------------------------"<<endl;
	
	cout<<"Product name: ";
	cin>>product_name;
	
	cout<<"\nProduct stock: ";
	cin>>product_stock;
	
	cout<<"\nProduct unit price: ";
	cin>>product_price;
	
	cout<<"\nProduct category: ";
	cin>>product_category;
	
	cout<<"\n";
	
}
void Product::edit_product(){
	
	cout<<"Enter the new information of the product..."<<endl;
	cout<<"----------------------------------------------------------------------------------------------------------------------"<<endl;
	
	cout<<"Product name: ";
	cin>>product_name;
	
	cout<<"\nProduct stock: ";
	cin>>product_stock;
	
	cout<<"\nProduct unit price: ";
	cin>>product_price;
	
	cout<<"\nProduct category: ";
	cin>>product_category;
	
	cout<<"\n";
	
}
void Product::delete_product(){
	
	product_name = "-";
	product_stock = "-";
	product_price = 0;
	product_category = "-";
	
	cout<<"Deleting product information...\n"<<endl;	
	Sleep(1000);	
	cout<<"Product information deleted successfully...\n";
	cout<<"----------------------------------------------------------------------------------------------------------------------"<<endl;	
}
void Product::show_product_info(){
	
	cout<<"Product name: "<<product_name<<endl;
	cout<<"Product stock: "<<product_stock<<endl;
	cout<<"Product unit price: "<<product_price<<"$"<<endl;
	cout<<"Product category: "<<product_category<<endl;	
}
void Product::product_table(){
	cout<<"\t\tPRODUCT TABLE"<<endl;
	cout<<"----------------------------------------------------"<<endl;
	cout<<"| Product Name | Stock | Price |  Category  |"<<endl;
	cout<<"----------------------------------------------------"<<endl;
	cout<<"|       A      |  350  | 100$  | electronic |"<<endl;
	cout<<"----------------------------------------------------"<<endl;
	cout<<"|       B      |  500  | 40$   | fashion    |"<<endl;
	cout<<"----------------------------------------------------"<<endl;
	cout<<"|       C      |  400  | 25$   | cosmetics  |"<<endl;
	cout<<"----------------------------------------------------"<<endl;
	cout<<"|       D      |  0    | 15$   | food       |"<<endl;
	cout<<"----------------------------------------------------\n"<<endl;
}
//--------------------------------------------------------- customer menu function
void Product::give_order(){
	cout<<"Enter the name, quantity and price of the product.."<<endl;
	cout<<"----------------------------------------------------"<<endl;
	
	cout<<"Product name: ";
	cin>>product_name;
	
	cout<<"\nProduct quantity: ";
	cin>>product_quantity;
	
	cout<<"\nProduct price: ";
	cin>>product_price;
	
	cout<<"\n";	
	cout<<"----------------------------------------------------"<<endl;
}
void Product::edit_order(){
	cout<<"Enter the new information of the order..."<<endl;
	cout<<"----------------------------------------------------"<<endl;
	
	cout<<"Product name: ";
	cin>>product_name;
	
	cout<<"\nProduct quantity: ";
	cin>>product_quantity;
	
	cout<<"\nProduct price: ";
	cin>>product_price;
	
	cout<<"\n";
	cout<<"----------------------------------------------------"<<endl;
}
void Product::delete_order(){
	
	product_name = "-";
	product_quantity = 0;
	product_price = 0.0;
	
	cout<<"Deleting order information...\n"<<endl;	
	Sleep(1000);	
	cout<<"Order information deleted successfully...\n";
	cout<<"----------------------------------------------------------------------------------------------------------------------"<<endl;	
}
void Product::show_order(){
	cout<<"Product name: "<<product_name<<endl;
	cout<<"Product quantity: "<<product_quantity<<endl;
	cout<<"Product price: "<<product_price<<endl;
}
float Product::calculate_invoice(){
	
	return product_quantity*product_price;
}
void Product::show_invoice(){
	cout<<"Invoice amount: $"<<calculate_invoice()<<endl;
}

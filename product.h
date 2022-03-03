#include<iostream>
#include "string.h"

using namespace std;

class Product{
	private:
		
		string product_name;
		string product_stock;		
		string product_category;
		int product_quantity;
		float product_price;
		
	public:
	// admin functions	
		void add_product();
		void edit_product();
		void delete_product();
		void show_product_info();
	// customer	functions
		void product_table();
		void give_order();
		void edit_order();
		void delete_order();
		void show_order();
		
		float calculate_invoice();
		void show_invoice();
		
		Product();
		Product(string product_name,string product_stock,string product_category);	
};

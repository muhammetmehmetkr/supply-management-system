#include<iostream>
#include "string.h"

using namespace std;

class Order{
	private:
			
		string order_id;
		int order_price;	
		int order_quantity;
		float order_shippingWeight;				
		string order_date;	
					
	public:	
		
		void add_order();
		void edit_order();		
		void delete_order();
		void show_order_info();
		void print_orderTotal();
		
		float total_weight();
		float total_price();
		float total_tax();
};

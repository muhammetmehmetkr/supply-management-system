#include<iostream>
#include "string.h"

using namespace std;

class Payment{
	private:
		int card_number;
		int card_cvv;
		int card_month;
		int card_year;
	public:
		void add_card();
		void edit_card();
		void delete_card();
		void show_card();
};

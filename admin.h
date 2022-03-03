#include<iostream>
#include "string.h"

using namespace std;

class Admin{
	private:
		string admin_id;		
		string admin_password;		
				
	public:
// 			set - get method
//-----------------------------------------------------
		void set_id(string admin_id);
		void set_password(string admin_password);
		string get_id();
		string get_password();
//--------------------------------------------------------			
};

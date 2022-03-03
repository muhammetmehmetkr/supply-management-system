#include<iostream>
#include "admin.h"
#include "string.h"
#include<windows.h>

using namespace std;

void Admin::set_id(string admin_id){
	this->admin_id = admin_id;	
}
void Admin::set_password(string admin_password){
	this->admin_password = admin_password;
}
string Admin::get_id(){
	return admin_id;
}
string Admin::get_password(){
	return admin_password;
}


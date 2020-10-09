#pragma once
#include "sheet.h"

#include <fstream>
#include <iostream>
class book : public sheet
{

private:
	char * name;
	bool protection;
	sheet* sheets;  
public:

	book() 
	{ 
		name = new char[5]; 
		name[0] = 'b';
		name[1] = 'o'; 
		name[2] = 'o'; 
		name[3] = 'k'; 
		name[4] = '1';
		protection = false;
		sheets = new sheet[1];
		sheets[0] = sheet();
	}
	//book(int i/**/) {}
	//book(const book & other) {}
	//~book() {}
	//bool operator[](const book& c) {}
	//bool operator=(const book& c) {}
	//friend std::ofstream& operator<< (std::ofstream& out, const book& point);
	//friend std::ofstream& operator>> (std::ofstream& out, const book& point);
	//void save_to_the_disk();
	//void get_from_the_disk();
	//string get_name();
	//string set_name();
	//bool get_protection();
	//bool set_protection();
	//string get_content();
	//string set_content();
	//void open();
	//void close();
	//void chaange_name();
	//void put_value();//ads sheets
	//void get_value();
};


#pragma once
#include "ceil.h"

#include <fstream>
class sheet :
	public CEIL
{
private:
	char* name;
	bool protection;
	CEIL ceils[100][100];
public:

	sheet() 
	{
		name = new char[6];
		name[0] = 's';
		name[1] = 'h';
		name[2] = 'e';
		name[3] = 'e';
		name[4] = 't';
		name[5] = '1';
		protection = false;
	}
	//sheet(/**/) {}
	//sheet(/*all the properties = all the properties; copy*/) {}
	//~sheet() {}
	/*bool operator[](const sheet& c) {}
	bool operator=(const sheet& c) {}
	friend std::ostream& operator<< (std::ostream& out, const sheet& point);
	friend std::ostream& operator>> (std::ostream& out, const sheet& point);*/
	/*void save_to_the_disk() {}
	void get_from_the_disk() {}
	string get_name() {}
	string set_name() {}
	bool get_protection() {}
	bool set_protection() {}
	string get_content() {}
	string set_content() {}
	void open() {}
	void close() {}
	void chaange_name() {}
	void put_value() {}
	void get_value() {}*/

};


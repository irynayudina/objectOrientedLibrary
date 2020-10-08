#pragma once
#include <fstream>
#include "book.h"
class sheet :
	public book
{
private:
	string name;
	bool protection;
	//2d array or list of ceils by rows and columns 
public:

	sheet() {}
	sheet(/**/) {}
	sheet(/*all the properties = all the properties; copy*/) {}
	~sheet() {}
	bool operator[](const sheet& c) {}
	bool operator=(const sheet& c) {}
	friend std::ostream& operator<< (std::ostream& out, const sheet& point);
	friend std::ostream& operator>> (std::ostream& out, const sheet& point);
	void save_to_the_disk() {}
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
	void get_value() {}

};


#pragma once
#include <fstream>
#include "sheet.h"
#include <iostream>
using namespace std;
class ceil :
	public sheet
{
private:
	string name;
	bool protection;
	string content;
public:

	ceil() {}
	ceil(string text) {}
	ceil(/*all the properties = all the properties; copy*/) {}
	~ceil() {}
	bool operator[](const ceil& c) {}
	bool operator=(const ceil& c) {}
	friend std::ostream& operator<< (std::ostream& out, const ceil& point);
	friend std::ostream& operator>> (std::ostream& out, const ceil& point);
	void save_to_the_disk() {}
	void get_from_the_disk() {}
	string get_name() {}
	string set_name() {}
	bool get_protection() {}
	bool set_protection() {}
	string get_content() {}
	string set_content() {}
	void open(){}
	void close(){}
	void chaange_name(){}
	void put_value(){}
	void get_value() {}

};


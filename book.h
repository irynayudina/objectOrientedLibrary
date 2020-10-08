#pragma once
#include <fstream>
#include <iostream>
class book
{

private:
	string name;
	bool protection;
	//1d array or list of sheets  
public:

	book() {}
	book(int i/**/) {}
	book(int a, int b/*all the properties = all the properties; copy*/) {}
	~book() {}
	bool operator[](const book& c) {}
	bool operator=(const book& c) {}
	friend std::ofstream& operator<< (std::ofstream& out, const book& point);
	friend std::ofstream& operator>> (std::ofstream& out, const book& point);
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


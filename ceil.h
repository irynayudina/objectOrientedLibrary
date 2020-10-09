#pragma once
#include <fstream>
#include "sheet.h"
#include <iostream>
using namespace std;
class ceil 
{
private:
	char* name = NULL;
	int name_length;
	char* content = NULL;
	int content_length;
	bool protection;	
public:

	ceil() 
	{
		name = new char[5];
		name_length = 5;
		name[0] = 'c';
		name[1] = 'e';
		name[2] = 'i';
		name[3] = 'l';
		name[4] = '1';
		content = new char[100];
		content_length = 100;
		for (int i = 0; i < content_length; i++) {
			content[i] = '\0';
		}
		protection = false;
	}
	ceil(char* _name, int _name_length, char* _content, int _content_length, bool _protection)
	{
		this->name = new char[_name_length];
		for (int i = 0; i < _name_length; i++) {
			this->name[i] = _name[i];
		}
		this->content = new char[_content_length];
		for (int i = 0; i < _content_length; i++) {
			this->content[i] = _content[i];
		}
		this->protection = _protection;
		this->content_length = _content_length;
		this->name_length = _name_length;
	}
	ceil(const ceil & other) 
	{
		this->name = new char[other.name_length];
		for (int i = 0; i < other.name_length; i++) {
			this->name[i] = other.name[i];
		}
		this->content = new char[other.content_length];
		for (int i = 0; i < other.content_length; i++) {
			this->content[i] = other.content[i];
		}
		this->protection = other.protection;
		this->content_length = other.content_length;
		this->name_length = other.name_length;
	}
	~ceil() { delete[] name; delete[] content; }
	ceil& operator[](const ceil& c) {}//no idea wtf
	ceil& operator=(const ceil& other) 
	{
		this->protection = other.protection;
		this->content_length = other.content_length;
		this->name_length = other.name_length;
		if (this->name != NULL) {
			delete[] this->name;
		}
		this->name = new char[other.name_length];
		for (int i = 0; i < other.name_length; i++) {
			this->name[i] = other.name[i];
		}
		if (this->content != NULL) {
			delete[] this->content;
		}
		this->content = new char[other.content_length];
		for (int i = 0; i < other.content_length; i++) {
			this->content[i] = other.content[i];
		}
		return *this;
	}
	friend ostream& operator<< (ostream& out, const ceil& point);
	friend ostream& operator>> (ostream& out, const ceil& point);
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
ostream& operator<< (ostream& out, const ceil& point) {}
ostream& operator>> (ostream& in, const ceil& point) {}


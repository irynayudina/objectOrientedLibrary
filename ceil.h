#pragma once
#include <fstream>
#include "sheet.h"
#include <iostream>
using namespace std;
class CEIL 
{
private:
	char* name = NULL;
	int name_length;
	char* content = NULL;
	int content_length;
	bool protection;	
public:

	CEIL() 
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
	CEIL(char* _name, int _name_length, char* _content, int _content_length, bool _protection)
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
	CEIL(const CEIL & other) 
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
	~CEIL() { delete[] name; delete[] content; }
	CEIL& operator[](const CEIL& c) {}//no idea wtf
	CEIL& operator=(const CEIL& other) 
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
	friend ostream& operator<< (ostream& out, const CEIL& point);
	friend istream& operator>> (istream& out, const CEIL& point);
	void save_to_the_disk() {}
	void get_from_the_disk() {}
	char* get_name() { return this->name; }
	void set_name(int size, char* value) {
		if (this->name != NULL) {
			delete[] this->name;
		}
		this->name = new char[size];
		for (int i = 0; i < size; i++) {
			this->name[i] = value[i];
		}
	}
	bool get_protection() { return this->protection; }
	void set_protection(bool value) { this->protection = value; }
	char* get_content() { return this->content; }
	void set_content(int size, char* value) {
		if (this->content != NULL) {
			delete[] this->content;
		}
		this->content = new char[size];
		for (int i = 0; i < size; i++) {
			this->content[i] = value[i];
		}
	}
	int get_name_length() { return this->name_length; }
	void set_name_length(int value) { this->name_length = value; }
	int get_content_length() { return this->content_length; }
	void set_content_length(int value) { this->content_length = value; }
	void open(){}
	void close(){}
	void chaange_name(){}
	void put_value(){}
	void get_value() {}

};
ostream& operator<< (ostream& out, const CEIL& point) 
{
	out << point.name_length << " ";
	for (int i = 0; i < point.name_length; i++) 
	{
		out << point.name[i];
	}
	out << point.content_length << " ";
	for (int i = 0; i < point.content_length; i++)
	{
		out << point.content[i];
	}
	out << point.protection;
	return out;
}
istream& operator>> (istream& out, CEIL& point) 
{
	int nl, cl, p;
	char* n; char* c;
	out >> nl;
	point.set_name_length(nl);
	n = new char[nl];
	for (int i = 0; i < nl; i++)
	{
		out >> n[i];
	}
	point.set_name(nl, n);
	out >> cl;
	point.set_content_length(cl);
	c = new char[cl];
	for (int i = 0; i < cl; i++)
	{
		out >> c[i];
	}
	point.set_content(cl, c);
	out >> p;
	point.set_protection(p);
	return out;
}


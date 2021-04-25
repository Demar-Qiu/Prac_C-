#include"Person.h"

ostream& operator<<(ostream& out, Person& person)
{
	out << person.name << "......" << person.phone << endl;
	return out;
}


Person& Person::operator=(Person& person)  //=运算符重载
{
	this->name = person.name;
	this->phone = person.phone;
	return *this;
}


bool Person::operator==(Person& person)   // ==运算符重载
{
	if (this->name == person.name && this->phone == person.phone)
	{
		return true;
	}
	return false;
}
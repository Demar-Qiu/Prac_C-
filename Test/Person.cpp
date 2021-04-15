#include"Person.h"
#include<iostream>
using namespace std;

Person::Person():m_strName("Sam")
{

}

void Person::play()
{
	cout << "Person--play()" << endl;
	cout << m_strName <<endl;
}
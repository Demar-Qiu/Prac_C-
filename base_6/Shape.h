#pragma once
#include<iostream>
using namespace std;

class Shape
{
public:
	Shape();
	virtual ~Shape();
	virtual double calcArea();
};
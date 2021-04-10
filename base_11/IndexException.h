#pragma once
#include"Exception.h"

class IndexException :public Exception
{
public:
	virtual void printException();
};
#pragma once
#include"Worker.h"
#include"Farmer.h"
using namespace std;

class MigrantWorker:public Farmer,public Worker
{
public:
	MigrantWorker(string name, string code);
	~MigrantWorker();
};
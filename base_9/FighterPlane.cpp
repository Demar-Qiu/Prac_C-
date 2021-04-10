#include"FighterPlane.h"
using namespace std;

FighterPlane::FighterPlane(string code) :Plane(code)
{

}

void FighterPlane::takeoff()
{
	cout << "FightPlane--takeoff" << endl;
}

void FighterPlane::land()
{
	cout << "FightPlane--land" << endl;
}
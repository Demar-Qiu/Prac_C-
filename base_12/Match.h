#pragma once

class Time;   //注意这里是要声明Time，无需头文件
class Match
{
public:
	void printTime(Time& t);  //友元成员函数
};
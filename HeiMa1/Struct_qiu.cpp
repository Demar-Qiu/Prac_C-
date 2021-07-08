#include<iostream>
#include<string>
using namespace std;


//关于结构体
struct student
{
	string name;
	int age;
	int score;
}su;

//结构体值传递
void printStudentInfo1(struct student s)
{
	s.age = 50;
	cout << "学生姓名：" << s.name << "学生年龄：" <<s.age<<"学生分数: "<<s.score<<endl;
}

//结构体地址传递
void printStudentInfo2(struct student* s)
{
	s->age = 55;
	cout << "学生姓名: " << s->name << "学生年龄：" << s->age << "学生分数: " << s->score<< endl;
}


int main()
{
	struct student s;
	s.name = "马克";
	s.age = 22;
	s.score = 85;
	
	printStudentInfo1(s); //值传递不影响实参
	//实参的值传入函数的形参，相当于形参拷贝了一份实参的值，两者是不一样的，修改形参不影响实参。

	//printStudentInfo2(&s); //指针作为参数会影响实参
	//实参的地址传入函数的形参（指针接收），函数内通过解引用访问这个地址中的值，实际上就是实参的值
	cout << "学生姓名：" << s.name << "学生年龄：" << s.age << "学生分数: " << s.score << endl;
	
	return 0;

}
#ifndef __DATE_H__
#define __DATE_H__

#include <iostream>
#include <stdlib.h>
using namespace std;
class Time
{
public:
	Time(int hour = 0, int minute = 59, int second=59 )
		:_hour(hour)
		, _minute(minute)
		, _second(second)
	{}
	void Print()
	{
		cout << _hour << "-" << _minute << "-" << _second << endl;
	}
private:
	int _hour;
	int _minute;
	int _second;
};

class Date{
public:
	void setDate(int year = 2000, int month = 1, int day = 1)  //全缺省的构造函数
	{
		_year = year;
		_month = month;
		_day = day;
		//_msg = (char*)malloc(sizeof(char)* 10);      //不能有动态开辟的内存
	}
	//Date(int year)   //初始化成员列表
	//	: _year(year)
	//{}
	//Date(const Date& d)    //拷贝构造函数，必须传&，否则会出现无穷递归问题
	//{
	//	_year = d._year;
	//	_month = d._month;
	//	_day = d._day;
	//}

	~Date()     //析构函数，资源清理，善后工作。
	{
		//free(_msg);                 
		//_msg = NULL;
	}

	//Date& operator=(const Date& d)   //运算符重载,返回引用，可以支持连等
	//{
	//	if (this != &d)
	//	{
	//		this->_year = d._year;
	//		this->_month = d._month;
	//		this->_day = d._day;
	//	}
	//	return *this;
	//}

	void Print()
	{
		cout << _year << "年-" << _month << "月-" << _day << "日"<<endl;
		_t.Print();
		//cout << "i am print!" << endl;
	}
	void Display() const
	{
		test();
		cout << "i am display!" << endl;
	}
	void test() const
	{
		cout << "i am test!" << endl;
	}
	
private:
	int _year=12;
    int _month=12;
	int _day=12;
	Time _t;
	//char* _msg;
};

#endif //__DATH_H__
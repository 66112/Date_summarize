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
	void setDate(int year = 2000, int month = 1, int day = 1)  //ȫȱʡ�Ĺ��캯��
	{
		_year = year;
		_month = month;
		_day = day;
		//_msg = (char*)malloc(sizeof(char)* 10);      //�����ж�̬���ٵ��ڴ�
	}
	//Date(int year)   //��ʼ����Ա�б�
	//	: _year(year)
	//{}
	//Date(const Date& d)    //�������캯�������봫&��������������ݹ�����
	//{
	//	_year = d._year;
	//	_month = d._month;
	//	_day = d._day;
	//}

	~Date()     //������������Դ�����ƺ�����
	{
		//free(_msg);                 
		//_msg = NULL;
	}

	//Date& operator=(const Date& d)   //���������,�������ã�����֧������
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
		cout << _year << "��-" << _month << "��-" << _day << "��"<<endl;
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
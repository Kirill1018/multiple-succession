#pragma once
#include <iomanip>
#include <iostream>
#include <windows.h>
using namespace std;
class orkestr
{
public:
	int time, timer;
	string name, obj;
	~orkestr()
	{
		name = "����������";
	}
	orkestr(int timer)
	{
		time = timer;
	}
	orkestr()
	{

	}
	void set();
	int get();
	virtual void play() = 0;//����������� ������� ����
};
class musical_instruments : public orkestr
{
public:
	musical_instruments()
	{

	}
	musical_instruments(int timer) : orkestr(timer) {};
	virtual void play()
	{
		cout << "����������� ����������" << endl;
	}
};
class strun : public orkestr, musical_instruments
{
public:
	strun()
	{

	}
	strun(int period) : orkestr(period) {};
	virtual void play()
	{
		cout << "�������� ����������" << endl;
	}
};
class duhovie : public orkestr, musical_instruments
{
public:
	duhovie()
	{

	}
	duhovie(int period) : orkestr(period) {};
	virtual void play()
	{
		cout << "������� ����������" << endl;
	}
};
class balalaika : public orkestr, strun
{
public:
	balalaika()
	{

	}
	balalaika(int period) : orkestr(period) {};
	virtual void play()
	{
		cout << "���������" << endl;
		Sleep(1000);
	}
};
class basgitara : public orkestr, strun
{
public:
	basgitara()
	{

	}
	basgitara(int period) : orkestr(period) {};
	virtual void play()
	{
		cout << "���������" << endl;
		Sleep(1000);
	}
};
class skripka : public orkestr, strun
{
public:
	skripka()
	{

	}
	skripka(int period) : orkestr(period) {};
	virtual void play()
	{
		cout << "�������" << endl;
		Sleep(1000);
	}
};
class sopilka : public orkestr, duhovie
{
public:
	sopilka()
	{

	}
	sopilka(int period) : orkestr(period) {};
	virtual void play()
	{
		cout << "�������" << endl;
		Sleep(1000);
	}
};
class saxofon : public orkestr, duhovie
{
public:
	saxofon()
	{

	}
	saxofon(int period) : orkestr(period) {};
	virtual void play()
	{
		cout << "��������" << endl;
		Sleep(1000);
	}
};
class truba : public orkestr, duhovie
{
public:
	truba()
	{

	}
	truba(int period) : orkestr(period) {};
	virtual void play()
	{
		cout << "�����" << endl;
		Sleep(1000);
	}
};
void orkestr::set()
{
	timer = 1000;
}
int orkestr::get()
{
	return timer;
}
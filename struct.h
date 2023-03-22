#pragma once
#include<iostream>
#include<cstring>
#include<Windows.h>
#include<string>
#include<iomanip>
#include<cstdlib>
#include<ctime>
using namespace std;

struct position {
	int x, y;
};

struct player {
	string name = "";
	int point;
};

struct CELL1
{
	int i, j;
	char letter = ' ';
	bool isValid = true; 
	bool isSelected = false;
	void drawBox();
	void deleteCell();
};

struct CELL2
{
	int i, j;
	char letter = ' ';
	bool isSelected = false;
	CELL2* pNext;
	void drawBox();
	void deleteCell();
};
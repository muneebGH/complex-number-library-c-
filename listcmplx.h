#include"cmplx.h"
class listcmplx
{
private:
	int max;
	int count;
	cmplx *array;

public:
	cmplx getarray();
	void setarray(const cmplx a[], int b);
	listcmplx();
	listcmplx(int s);
	listcmplx(const listcmplx &list);
	listcmplx& operator=(const listcmplx &list);
	~listcmplx();
	void addvalue(const int x, const int y);
	void showlist();
};
#pragma once

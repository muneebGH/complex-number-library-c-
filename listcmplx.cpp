#include"listcmplx.h"
cmplx listcmplx::getarray()
{
	return *array;
}
void listcmplx::setarray(const cmplx a[], int b)
{
	for (int i = 0; i < b; i++)
	{
		array[i] = a[i];
		count++;
		//	cout<<array[i].realvalue<<","<<array[i].imgvalue<<'\t';
	}
	count--;
}
listcmplx::listcmplx()
{
	max = 10;
	count = 0;
	array = new cmplx[max];
}
listcmplx::listcmplx(int s)
{
	max = s;
	count = 0;
	array = new cmplx[s];
}
listcmplx::listcmplx(const listcmplx &list)
{
	delete[] array;
	max = list.max;
	count = list.count;
	for (int i = 0; i < count; i++)
	{
		array[i] = list.array[i];
	}
}
listcmplx& listcmplx::operator=(const listcmplx &list)
{
	delete[] array;
	max = list.max;
	count = list.count;
	for (int i = 0; i < count; i++)
	{
		array[i] = list.array[i];
	}
	return *this;
}
listcmplx::~listcmplx()
{
	delete[]array;
	cout << "lay bai";

}
void listcmplx::addvalue(const int x, const int y)
{
	if (count != max)
	{
		array[count].setcomplexno(x, y);
		count++;
	}
	else
	{
		cmplx *point = new cmplx[max + 1];
		for (int i = 0; i < max; i++)
		{
			point[i] = array[i];
		}
		delete[] array;
		max = max + 1;
		array = new cmplx[max];
		for (int i = 0; i < count; i++)
		{
			array[i] = point[i];
		}
		delete[] point;
		array[count].setcomplexno(x, y);
		count++;

	}
}
void listcmplx::showlist()
{
	for (int i = 0; i < (count); i++)
	{
		cout << "(" << array[i].realvalue << "," << array[i].imgvalue << ")" << endl;
	}
}
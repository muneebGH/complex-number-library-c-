#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
class cmplx
{
public:
	double realvalue;
	double imgvalue;
	double getRealPart() const;
	void setRealPart(double r);
	double getImgValue() const;
	void setImgValue(double i);
	void setcomplexno(double r, double i);
	double magnitude() const;
	cmplx conjucate() const;
	cmplx reciprocal() const;
	cmplx operatorplus(const cmplx &rec);
	cmplx operatormin(const cmplx &rec);
	cmplx operatormul(const cmplx &rhs);
	cmplx operatorminus()const;
	void display() const;
};

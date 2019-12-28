#include"cmplx.h"
double cmplx::getRealPart() const
{
	return realvalue;
}


void cmplx::setRealPart(double r)
{
	realvalue = r;
}


double cmplx::getImgValue() const
{
	return imgvalue;
}


void cmplx::setImgValue(double i)
{
	imgvalue = i;
}


void cmplx::setcomplexno(double r, double i)
{
	realvalue = r;
	imgvalue = i;
}


double cmplx::magnitude() const
{
	double mag;
	mag = sqrt((realvalue*realvalue) + (imgvalue*imgvalue));
	return mag;
}


cmplx cmplx::conjucate() const
{
	cmplx conj;
	conj.realvalue = realvalue;
	conj.imgvalue = -1 * imgvalue;
	return conj;
}



cmplx cmplx::reciprocal() const
{
	int m;
	cmplx no, res;
	no = conjucate();
	m = magnitude();
	res.realvalue = no.realvalue / (m*m);
	res.imgvalue = no.imgvalue / (m*m);
	return res;
}
cmplx cmplx::operatorplus(const cmplx &rec)
{
	cmplx sum;
	sum.realvalue = realvalue + rec.realvalue;
	sum.imgvalue = imgvalue + rec.imgvalue;
	return sum;
}
cmplx cmplx::operatormin(const cmplx &rec)
{
	cmplx sub;
	sub.realvalue = realvalue - (rec.realvalue);
	sub.imgvalue = imgvalue - (rec.imgvalue);
	return sub;
}
cmplx cmplx::operatormul(const cmplx &rhs)
{
	cmplx mul;
	mul.realvalue = realvalue * rhs.realvalue;
	mul.imgvalue = imgvalue * rhs.imgvalue;
	return mul;
}
cmplx cmplx::operatorminus()const
{
	cmplx neg;
	neg.realvalue = realvalue * -1;
	neg.imgvalue = imgvalue * -1;
	return neg;
}
void cmplx::display() const
{
	cout << realvalue << "+";
	cout << imgvalue << "i" << endl;
}

#include"listcmplx.h"
int main()
{
	int r, s;
	listcmplx abc;
	cmplx ab[10];
	for (int i = 0; i < 10; i++)
	{
		s = rand() % 100;
		r = rand() % 100;
		ab[i].setcomplexno(r, s);
	}


	abc.addvalue(1, 2);
	//abc.showlist();
	abc.setarray(ab, 10);
	abc.showlist();



	system("pause");
	return 0;
}

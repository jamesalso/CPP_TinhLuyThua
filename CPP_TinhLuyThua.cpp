#include <iostream>
using namespace std;

double tinhluythua(double a, double b) {
	double giatri = 1;
	for (int i = 0; i < b; i++)
	{
		giatri *= a;
	}

	return giatri;
}

int main()
{
   double so, somu, luythua = 1;

   cout << "Nhap So: ";
   cin >> so;
   cout << "Nhap So Mu: ";
   cin >> somu;

   for (int i = 0; i < somu; i++)
   {
	   luythua *= so;
   }

   cout << "Luy Thua: " << pow(so, somu) << endl;
   cout << "Luy Thua: " << tinhluythua(so, somu) << endl;

   return 0;
}



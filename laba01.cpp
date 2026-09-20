/**************
* Вариант 10. *
* Чупин Артем *
* Линейные    *
**************/

#include <iostream>
#include <cmath>
using namespace std;

int main() {
	const double PI = 3.141592653589793;
	double v1, v2, y, w;
	double r; // 3.7
	double l; // 16.4
	double t; // 1.6 Если оставить это значение, то результат различается c искомым почти ровно в 100 раз
	double f; // 335.0
	double rad;

	cout << "r = ";
	cin >> r;

	cout << "l = ";
	cin >> l;

	cout << "t = ";
	cin >> t;

	cout << "f = ";
	cin >> f;

	rad = f * PI / 180.0;

	y = asin(r * sin(rad) / l);

	v1 = (-((r * rad) / t) * (sin(rad + y) / cos(y)));
	v2 = (-((r * rad) / t) * (sin(rad) + ((r * sin(rad) * cos(rad)) / l)));
	
	w = (-(r * pow(rad, 2)) / pow(t, 2)) * (cos(rad) + ( r * cos(2 * rad)) / (l));

	cout << "v1: " << v1 << endl 
		<< "v2: " << v2 << endl 
		<< "w: " << w << endl;
}
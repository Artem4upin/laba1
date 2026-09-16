/**************
* Вариант 10. *
* Чупин Артем *
* Линейные    *
**************/

#include <iostream>
#include <cmath>
using namespace std;

int main() {
	double v1, v2, y, w;
	double r = 3.7;
	double l = 16.4;
	double t = 1.6;
	double f = 335.0;
	double rad = f * 3.14 / 180.0;

	y = asin(r * sin(rad) / l);

	v1 = (-((r * rad) / t) * (sin(rad + y) / cos(y)));
	v2 = (-((r * rad) / t) * (sin(rad) + ((r * sin(rad) * cos(rad)) / l)));
	
	w = (-(r * pow(rad, 2)) / pow(t, 2)) * (cos(rad) + ( r * cos(2 * rad)) / (l));

	cout << "v1: " << v1 << "\n";
	cout << "v2: " << v2 << "\n";
	cout << "y: " << y << "\n";
	cout << "w: " << w << "\n";

}
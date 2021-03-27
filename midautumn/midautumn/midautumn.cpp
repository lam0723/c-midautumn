//Chan Cheuk Lam 1155129258 1155129258@link.cuhk.edu.hk
#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int a, b, c, j, n, p, y, AbbDay;
	double k;
	string AbbMonth;
	int Date = 24;
	int m = 8;
	int d = 24;

	cout << "Enter a year: "; //ask for year
	cin >> y;

	a = int((14 - m) / 12); //calculation
	b = m + 12 * a - 3;
	c = y + 4800 - a;
	j = d + int((153 * b + 2) / 5) + 365 * c + int(c / 4) - int(c / 100) + int(c / 400) - 32045;
	k = (j - 2459081.44583333) / 29.530587981;
	n = int(29.530587981 * (ceil(k) - k));
	p = n + 14;
	AbbDay = ((j + p) % 7) + 1;
	if ((d + p) <= 31) {
		AbbMonth = "Aug";
		Date = d + p;
	}
	else if ((d + p) <= 61) {
		AbbMonth = "Sep";
		Date = d + p - 31;
	}
	else if ((d + p) <= 92) {
		AbbMonth = "Oct";
		Date = d + p - 61;
	}
	else if ((d + p) <= 122) {
		AbbMonth = "Nov";
		Date = d + p - 92;
	}
	
	cout << "Mid-Autumn Festival of " << y << " is around "; //output answer
	switch (AbbDay) {
		case 1:
			cout << "Mon ";
			break;
		case 2:
			cout << "Tue ";
			break;
		case 3:
			cout << "Wed ";
			break;
		case 4:
			cout << "Thu ";
			break;
		case 5:
			cout << "Fri ";
			break;
		case 6:
			cout << "Sat ";
			break;
		case 7:
			cout << "Sun ";
			break;
		default:
			break;
	}
	cout << Date << " " << AbbMonth << " " << y;

	return 0;
}
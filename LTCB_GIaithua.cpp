#include <iostream>
using namespace std;
int main() {
	int i = 1, sonhap, giaithua = 1;
	cout << "nhap so giai thua:";
	cin >> sonhap;
	while (i <= sonhap) {
	  giaithua *= i;
		i++;//i=i+1;
	}
	cout << "giai thua cua " <<  sonhap << " la:" << giaithua << endl;
	return 0;
 }
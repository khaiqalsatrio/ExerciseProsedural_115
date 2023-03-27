#include <iostream>
using namespace std;

double rerata(double a, double b) {
	return (a + b) / 2;
}

string status(double rata) {
	if (rata >= 70)
		return "lulus";
	else
		return "gagal"
}

string status2(double rata, double nil) {
	if (rata >= 70 || nil >= 80)
		return "lulus";
	else
		return "gagal";
}

int main() {
	double ni1M,ni1B;
	cout << "masukan nilai matematika = ";
	cin >> ni1M;
	cout << "masukan nilai bahasa inggris =";
	cin >> nilB;
	cout << "status kelulusan = " << status(rerata(nilM, nilB));
	cout << "\nstatus kelulusan ke 2 = " << status2(rerata(nilB, nilM), nilB);
	return 0;
}



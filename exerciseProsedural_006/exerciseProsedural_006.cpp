#include <iostream>
using namespace std;

double rerata(double a, double b) {
	return (a + b) / 2;
}

string status(double r) {
	if (r >= 70) {
		return "diterima";
	}
	else {
		return "ditolak";
	}
}

string status2(double r, double n) {
	if (r >= 70 && n >= 70) {
		return "lulus";
	}
	else {
		return "gagal";
	}
}

string status3(double r, double n) {
	if (r >= 70 || n >= 80) {
		return "diterima";
	}
	else {
		return "ditolak";
	}
}
int main() {
	double nilaiPsikotes, nilaiFisik;


	cout << "Masukkan nilai Psikotes : ";
	cin >> nilaiPsikotes;
	cout << "Masukkan nilai Fisik : ";
	cin >> nilaiFisik;

	//rerata = (nilaiPsikotes + nilaiFisik)/2;

	//rata = rerata(nilaiPsikotes, nilaiFisik);
	//st = status(rerata(nilaiPsikotes, nilaifisik));

	// if (rata >= 70{
	//		status = "diterima";
	// }else {
	//		status = "ditolak";
	//}
	cout << "Nilai rata-rata nya : " << rerata(nilaiPsikotes, nilaiFisik);
	cout << "\nStatus kelulusannya : " << status(rerata(nilaiPsikotes, nilaiFisik));
	cout << "\nStatus kelulusannya : " << status2(rerata(nilaiPsikotes, nilaiFisik), nilaiPsikotes);
	cout << "\nstatus kelulusannya : " << status3(rerata(nilaiPsikotes, nilaiFisik), nilaiFisik);
}

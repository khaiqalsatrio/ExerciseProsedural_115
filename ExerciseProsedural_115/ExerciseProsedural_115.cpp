#include <iostream>
using namespace std ;

double rerata(double a, double b) {
    return (a + b) / 2;
}

string status(double rata){
    if (rata >= 70) || >= 80)
    return "asroni lulus";
    else
    return "asroni gagal";
}

string status2(double rata, double nil) {
    if (rata >= 70 || nil >= 80)
    return "lia lulus";
    else
    return "lia gagal";
}
string status3(double rata, double nil) {
    if (rata >= 70 || nil >= 80)
    return "joko lulus";
    else
    return "joko gagal";
}

void display() {
    cout << endl;							
    cout << "==================================" << endl; 
    cout << "Kandidat Yang Diterima" << endl; 
    cout << "==================================" << endl; 
    cout << "1";
}

void unsorted() {
    cout << endl;							
    cout << "==================================" << endl;
    cout << "Kandidat Yang Tidak Diterima" << endl; 
    cout << "==================================" << endl; 
    cout << "1";
}

int main() {
    double ni1M, ni1B;
    cout << "masukan nilai matematika = ";
    cin >> ni1M;
    cout << "masukan nilai bahasa inggris = ";
    cin >> ni1B;
    cout << "status kelulusan = " << status(rerata(ni1M, ni1B));
    cout << "\nstatus kelulusan ke 2 = " << status2
    (rerata(ni1B, ni1M), ni1B);
    return 0;
}



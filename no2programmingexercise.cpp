#include <iostream>
using namespace std;

class Student {
public:
    string firstName, lastName;
    int score;
    char grade;
};

char nilaiSiswa(int score) {
    if (score >= 90) return 'A';
    else if (score >= 80) return 'B';
    else if (score >= 70) return 'C';
    else if (score >= 60) return 'D';
    else return 'F';
}

int main() {
    Student daftarSiswa[20]; 
    int highest = 0;

    // Input data
    for(int i = 0; i < 20; i++) {
        cout << "Masukkan nama depan: ";
        cin >> daftarSiswa[i].firstName;
        cout << "Masukkan nama belakang: ";
        cin >> daftarSiswa[i].lastName;
        cout << "Masukkan nilai: ";
        cin >> daftarSiswa[i].score;

        daftarSiswa[i].grade = nilaiSiswa(daftarSiswa[i].score);

        // cari nilai tertinggi
        if (daftarSiswa[i].score > highest) {
            highest = daftarSiswa[i].score;
        }

        cout << endl;
    }

    // Tampilkan semua data
    cout << "\n--- Data Siswa ---\n";
    for(int i = 0; i < 20; i++) {
        cout << daftarSiswa[i].firstName << " "
             << daftarSiswa[i].lastName << " - "
             << daftarSiswa[i].score << " (" << daftarSiswa[i].grade << ")\n";
    }

    // Tampilkan nilai tertinggi
    cout << "\nNilai tertinggi: " << highest << endl;
    cout << "Siswa dengan nilai tertinggi:\n";

    for(int i = 0; i < 20; i++) {
        if (daftarSiswa[i].score == highest) {
            cout << daftarSiswa[i].firstName << " "
                 << daftarSiswa[i].lastName << endl;
        }
    }

    return 0;
}

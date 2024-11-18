#include <iostream>
using namespace std;

double total(double i[], double j[], int a) {
    double z = 0, d = 0;
    for (int m = 0; m < a; m++) {
        z += i[m]*j[m];
        d += j[m];
    } 
    return z / d;
}

double hitungnilai(double i[], double j[], int a){
    return total(i, j, a);
} 

string konversinilai(double k) {
    if (k >= 3.75 && k <= 4.00) {
        return "A";
    }
    else if (k >= 3.50 && k <= 3.74) {
        return "A-";
    }
    else if (k >= 3.25 && k <= 3.49) {
        return "A/B";
    }
    else if (k >= 3.00 && k <= 3.24) {
        return "B+";
    }
    else if (k >= 2.75 && k <= 2.99) {
        return "B";
    }
    else if (k >= 2.50 && k <= 2.74) {
        return "B-";
    }
    else if (k >= 2.25 && k <= 2.49) {
        return "B/C";
    }
    else {
        return "Test failed!";
    }
}

void tampilkannilai (double i[], double j[], double k) {
    cout << "IP: " << hitungnilai(i, j, k) << endl;
    cout << "Nilai: " << konversinilai(hitungnilai(i,j,k)) << endl;
}

int main() {
    int a;
    cout << "Masukkan berapa mata kuliah yang diambil: ";
    cin >> a;

    double b[a], c[a];

    cout << "Masukkan indeks masing-masing nilai mata kuliah: ";
    for (int i = 0; i < a; i++) {
        cin >> b[i];
    }

    cout << "Masukkan sks masing-masing mata kuliah: ";
    for (int i = 0; i < a; i++) {
        cin >> c[i];
    }

    tampilkannilai(b, c, a);

}
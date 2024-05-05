//1. 3 variabel dengan tipe data berbeda 
//      a.int nilai;
//      b.string nama;
//      c.char K;
//2. contoh implementasi dari prosedur dan fungsi
//   contoh implementasi dari prosedur adalah untuk menginput 
//   void input(){
//        cout << "masukan nilai" << endl;
//        cin << nilai; ini berguna untuk menginput nilai
// }
//3. contoh implementasi dari looping for  adalah
//    for (i = 0; i < (hingga berapa); i++){
//        (yang akan diloopong)
//         
// }
//4. contoh implementasi dari conditional statement
//   if (nilai > 70){
//       cout << "lulus";
// }
//   else {
//       cout << " tidak lulus";   
// }
//5. struct Mahasiswa {
//string nim;
//string nama;
//DetailAlamat alamat;
//int umur;
//};

#include <iostream>
using namespace std;
int arr[2]; //deklarasi variabel global array a dengan ukuran 2
int i;

string kota;
int indekskualitasudara;
int nilaisalahsatusensor;

void input() {
    for (int i = 0; i < 2; i++) {
        cout << "kota: ";
        cin >> kota;
        cout << "indeks kualitas udara";
        cin >> indekskualitasudara;
        cout << "nilai salah satu sensor";
        cin >> nilaisalahsatusensor;
    }
}
 
bool kotatidaksehat() {
    
        if (indekskualitasudara >= 75 || nilaisalahsatusensor >= 45) {
            return true;
        }
        else {
            return false;
        }
    
}

void display() {

    for (int i = 0; i < 2; i++) {
        if (kotatidaksehat()) {
            cout << "tidak sehat" << endl;

        }
        else {
            cout << "sehat" << endl;

        }
    }
}

int main()
{
    char pilihan;
    do {

        input();
        display();
        cout << " apakaah ingin memulai kembali? ";
        cin >> pilihan;
    } while (pilihan == 'y' || pilihan == 'Y');
}



#include <iostream>
using namespace std;

int main() {
  cout << "## Program C++ Kalkulator Sederhana ##" << endl;
  cout << "======================================" << endl;
  cout << endl;

  int pilihan;
  float num1, num2;

  cout << "1. Penjumlahan" << endl;
  cout << "2. Pengurangan" << endl;
  cout << "3. Perkalian" << endl;
  cout << "4. Pembagian" << endl;
  cout << "5. Modulo 2" << endl;
  cout << "6. Modulo 8" << endl;
  cout << "7. Modulo 16" << endl;
  cout << endl;

  cout << "Input pilihan operasi : ";
  cin >> pilihan;
  if (pilihan > 4) {
    cout << "Masukkan angka : ";
    cin >> num1;
  } else {
    cout << "Masukkan angka pertama : ";
    cin >> num1;
    cout << "Masukkan angka kedua: ";
    cin >> num2;
  }
  cout << endl;

  switch (pilihan) {
    case 1:
      cout << "Hasil dari " << num1 << " + " << num2 << " = " << num1 + num2;
      break;
    case 2:
      cout << "Hasil dari " << num1 << " - " << num2 << " = " << num1 - num2;
      break;
    case 3:
      cout << "Hasil dari " << num1 << " x " << num2 << " = " << num1 * num2;
      break;
    case 4:
      cout << "Hasil dari " << num1 << " / " << num2 << " = " << num1 / num2;
      break;
    case 5:
      cout << "Hasil dari " << num1 << " % 2" << " = " << (int)num1 % 2;
      break;
    case 6:
      cout << "Hasil dari " << num1 << " % 8" << " = " << (int)num1 % 8;
      break;
    case 7:
      cout << "Hasil dari " << num1 << " % 16" << " = " << (int)num1 % 16;
      break;
    default:
      printf("Maaf, pilihan menu tidak tersedia");
  }

  cout << endl;
  return 0;
}
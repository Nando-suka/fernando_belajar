#include <iostream>
#include <string>

using namespace std;

int main ()
{
  int kue,harga,totalharga,jumlah;
  cout << "-------------- Selamat datang di Program Pemesanan Kue --------------" << endl;
  cout << "Berikut Kue-kue Yang Anda dapat pilih = " << endl;
  cout << "1.Kue Bolu" << endl;
  cout << "2.Kue Jamur" << endl;
  cout << "3.Kue Ulang Tahun" << endl;

  cout << "Anda memilih kue  = "; cin >> kue;
  cout << "Jumlah kue        = "; cin >> jumlah;
  switch (kue)
   {
     case 1:
       cout << "Anda memilih Kue Bolu." << endl;
       harga = 10000;
       totalharga = harga * jumlah;
       cout << "Total harga yang Anda dapatkan adalah = " << totalharga << endl;
       break;
     case 2:
       cout << "Anda memilih Kue Jamur." << endl;
       harga = 8000;
       totalharga = harga * jumlah;
       cout << "Total harga yang Anda dapatkan adalah = " << totalharga << endl;
       break;
     case 3:
       cout << "Anda memilih Kue Ulang Tahun." << endl;
       harga = 20000;
       totalharga = harga * jumlah;
       cout << "Total harga yang Anda dapatkan adalah = " << totalharga << endl;
       break;
     default:
       cout << "Pilihan Anda tidak ditemukan." << endl;
   }

 if (totalharga >= 50000 && totalharga <=100000)
   {
     cout <<  "Anda Mendapatkan Bonus Gelas";
   }
 else if (totalharga >=101000 && totalharga <= 200000)
   {
     cout << "Anda Mendapatkan Bonus Piring";
   }
  else{}
 return 0;
}

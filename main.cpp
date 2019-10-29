#include <iostream>
#include <string>


using namespace std;

int main()
{
    // Variabel
    string nama_item=""; // variabel untuk nama item sendiri
    string item_sebelum ="";// variabel untuk item sebelumnya
    string item_terhebat="";// variabel untuk item terhebat
    string item_terlemah="";// variabel untuk item terlemah
    int stat_terhebat=0;
    int stat_terlemah=100000;
    int stat =0;
  //  int pil;
    char ulang ='y';
    bool item_pertama = true;
    while (ulang == 'y')
    {
        // Input nama item
    cout <<"Masukkan Nama Item : ";
    cin >> nama_item;
        // input julah stat
    cout <<"Masukkan Stat : ";
    cin >> stat;
    cout << "Nama Item : "<< nama_item << endl; // menampilkan nama item
    cout << "Stat : "<< stat << endl;//menampilkan jumlah stat atau kekuatan


    if(item_pertama )
       {
        item_sebelum = "Nothing";// jika item pertma tidak ada maka nothing untuk item sebelumnya
        item_pertama = false;

          }
        cout << "Item Sebelumnya : " << item_sebelum << endl; // menampilkan hasil item sebelumnya jika kosong
    item_sebelum = nama_item;

    if (stat > stat_terhebat)
       {
           item_terhebat = nama_item; // item terhebat atau paling tinggi statnya diantara yang lain
           stat_terhebat = stat;
       }

    cout << " Item Terhebat : " << item_terhebat << endl; // menampilkan item terhebat

    if(stat < stat_terlemah)
    {
        item_terlemah = nama_item ; // item terlemah atau paling rendah statnya dari yang lainnya
        stat_terlemah = stat;
    }
    cout << "Item Terlemah : " << item_terlemah << endl; // menampilkan item terlemah
    cout << "\nUlang Lagi ? (y/n)"; // apakah anda ingin mengulangi dalam mengisi jika iya maka akan mengulang lagi dari awal pengisian
    cin >> ulang;













//    cout << "Pilihan :" << endl;
//    cout << "1. Satu" << endl;
//    cout << "2. Dua " << endl;
//    cout << " Masukkan Pilihan:" ;
//    cin >> pil;
//
//    if(pil == 1) cout << "\nSatu";
//    else cout << "\nDua" ;
//
//    cout << "\nUlang Lagi ? (y/n)";
//    cin >> ulang;

    }
    return 0;
}

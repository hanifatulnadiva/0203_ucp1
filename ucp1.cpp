#include <iostream>
using namespace std;

int main() {
    string namaKota[3];
    float sensor1[3], sensor2[3], sensor3[3];
    string status[3];
    string pilihan;
    int jumlah_lokasi = 0;

    do {
        
        cout << "Masukkan nama kota: ";
        cin >> namaKota[jumlah_lokasi];
        cout << "Masukkan nilai sensor 1 di kota " << namaKota[jumlah_lokasi] << ": ";
        cin >> sensor1[jumlah_lokasi];
        cout << "Masukkan nilai sensor 2 di kota " << namaKota[jumlah_lokasi] << ": ";
        cin >> sensor2[jumlah_lokasi];
        cout << "Masukkan nilai sensor 3 di kota " << namaKota[jumlah_lokasi] << ": ";
        cin >> sensor3[jumlah_lokasi];

       
        float rata_rata = (sensor1[jumlah_lokasi] + sensor2[jumlah_lokasi] + sensor3[jumlah_lokasi]) / 3;

       
        if (rata_rata > 75 || sensor1[jumlah_lokasi] == 45 || sensor2[jumlah_lokasi] == 45 || sensor3[jumlah_lokasi] == 45) {
            status[jumlah_lokasi] = "Tidak Sehat";
        } else {
            status[jumlah_lokasi] = "Sehat";
        }

        
        cout << "\nNama\t\tStatus" << endl;
        for (int i = 0; i <= jumlah_lokasi; i++) {
            cout << namaKota[i] << "\t\t" << status[i] << endl;
        }

        
        int total_sehat = 0;
        int total_tidak_sehat = 0;
        for (int i = 0; i <= jumlah_lokasi; i++) {
            if (status[i] == "Sehat") {
                total_sehat++;
            } else {
                total_tidak_sehat++;
            }
        }
        cout << "\nTotal lokasi dengan kualitas udara Sehat: " << total_sehat << endl;
        cout << "\nTotal lokasi dengan kualitas udara Tidak Sehat: " << total_tidak_sehat << endl;
       

        jumlah_lokasi++;

        
        cout << "\nApakah ingin mengulang program? (y/n): ";
        cin >> pilihan;
    } while (pilihan == "y" || pilihan == "Y");

    return 0;
}

//1. float alas, sisi_miring, tinggi;
//   string pilihan;
//   int bilangan;

//2. contoh prosedur
//    void display(){
//        cout << "Panjangnya=" << panjang<<endl;
//        cout << "Lebarnya=" << lebar << endl;
//        cout << "Luasnya=" << hitungLuas() << endl;  
//    }
//   contoh fungsi
//    float hitungLuas (){
//        return panjang * lebar;
//    }

// 3.  do
//  {
//      cout << "makan"<<endl;
//      cout << "main game"<<endl;
//      cout <<"ibadah"<<endl;

//      cout<<"apakah anda masih hidup?(Yes/No) ";
//      cin>>pilihan;
//
//  } while ( pilihan == "yes" );

//4. if (bilangan / 2 == 0)
//    {
//          status = "genap";
//    }
//    else 
//    {
//          status = "ganjil";
//    }

//5. struct Mahasiswa{
//    string nim;
//    string nama;
//    string alamat;
//    int umur;
//  };

#include <iostream>
#include "TPMOD7.h"

using namespace std;

int main()
{
    List L;
    adr p;
    NasabahBank x;
    string nasabah;
    string bank;
    int norek;
    int saldo;
    int pilihan = 0;
    int min2;

    create_list_1301213392(L);

    pilihan = select_menu_1301213392();

    while (pilihan != 0) {
        switch(pilihan){
            case 1:
                cout << "Masukan Data Nasabah Awal "<< endl;
                cout << "Masukan Nama Nasabah: ";
                cin >> nasabah;
                x.nama_nasabah = nasabah;
                cout << "Masukan Bank Nasabah: ";
                cin >> bank;
                x.nama_bank = bank;
                cout << "Masukan no. rekening: ";
                cin >> norek;
                x.no_rek = norek;
                cout << "Masukan Saldo Nasabah: ";
                cin >> saldo;
                x.saldo = saldo;

                first(L) = create_new_element_1301213392(x);
                break;

            case 2:
                cout << "Masukan Data Nasabah Tambahan "<< endl;
                cout << "Masukan Nama Nasabah: ";
                cin >> nasabah;
                x.nama_nasabah = nasabah;
                cout << "Masukan Bank Nasabah: ";
                cin >> bank;
                x.nama_bank = bank;
                cout << "Masukan no. rekening: ";
                cin >> norek;
                x.no_rek = norek;
                cout << "Masukan Saldo Nasabah: ";
                cin >> saldo;
                x.saldo = saldo;
                p = create_new_element_1301213392(x);
                insert_first_1301213392(L,p);
                break;

            case 3:
                show_all_data_1301213392(L);
                break;

            case 4:
                reverse_list_1301213392(L);
                break;

            case 5:
                if (first(L) == NULL) {
                    cout << "Tidak ada data";
                    break;
                }
                else {
                    min2 = second_smallest_1301213392(L);
                    cout << "Saldo terkecil ke-2 = " << min2 << endl;
                    break;
                }
            }
        cout << endl;
        pilihan = select_menu_1301213392();
    }
    cout << "Anda Keluar Dari Program" << endl;
    return 0;
}

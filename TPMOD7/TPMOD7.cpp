#include "TPMOD7.h"

void create_list_1301213392(List &L){
    first(L) = NULL;
    last(L) = NULL;
}
adr create_new_element_1301213392(infotype dataBaru){
    string nama_nasabah, nama_bank;
    int no_rek;
    int saldo;
    adr P;

    P = new element;
    info(P).nama_nasabah = dataBaru.nama_nasabah;
    info(P).nama_bank = dataBaru.nama_bank;
    info(P).no_rek = dataBaru.no_rek;
    info(P).saldo = dataBaru.saldo;
    next(P) = NULL;
    prev(P) = NULL;
    return P;
}
void show_all_data_1301213392(List L){
    adr p;
    if(first(L) != NULL){
        p = first(L);
        cout << "Nama" << " " << "Bank" << " " << "No.Rek" << " " << "Saldo" << endl;
        while(p != NULL){
            cout << info(p).nama_nasabah << " " << info(p).nama_bank << " " << info(p).no_rek << " " << info(p).saldo;
            cout << endl;
            p = next(p);
        }
        cout << endl;
    } else {
        cout << "List Kosong"<<endl;
    }
}
void reverse_list_1301213392(List L){
    adr p;
    if(first(L) != NULL){
        p = last(L);
        cout << "Nama" << " ";
        cout << "Bank" << " ";
        cout << "No.Rek" << " ";
        cout << "Saldo" << " " << endl;
        while (p != NULL){
            cout << info(p).nama_nasabah << " ";
            cout << info(p).nama_bank << " ";
            cout << info(p).no_rek << " ";
            cout << info(p).saldo << " ";
            cout << endl;
            p = prev(p);
        }
    }
}
void insert_first_1301213392(List &L, adr p){
    if(first(L) == NULL && last(L) == NULL){
        first(L) = p;
        last(L) = p;
    } else {
        next(p) = first(L);
        prev(first(L)) = p;
        first(L) = p;
    }
}
int second_smallest_1301213392(List L){
/*Dengan asumsi list tidak kosong, fungsi mengembalikan nilai
terkecil kedua dari list berdasarkan saldo. */
    adr p, terkecil, kecil2;
    int min2;

    p = first(L);
    terkecil = first(L);
    kecil2 = first(L);
    while (p != NULL){
        if (info(p).saldo < info(terkecil).saldo){
            terkecil = p;
        }
        p = next(p);

    }
    p = first(L);
    while (p != NULL){
        if (info(p).saldo < info(kecil2).saldo && info(p).saldo != info(terkecil).saldo){
            kecil2 = p;
        }
        p = next(p);

    }
    min2 = info(kecil2).saldo;
    return min2;
}
int select_menu_1301213392(){
    cout << "===== MENU =====" << endl;
    cout << "1. Input Data Awal" << endl;
    cout << "2. Tambah Data" << endl;
    cout << "3. Tampilkan Semua Data" << endl;
    cout << "4. Membalikan Data/List" << endl;
    cout << "5. Mengembalikan Saldo Terkecil ke-2" << endl;
    cout << "0. Exit" << endl;
    cout << "Pilihan Menu: ";

    int input = 0;
    cin >> input;
    return input;
}

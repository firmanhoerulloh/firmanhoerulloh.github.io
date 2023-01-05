#ifndef TPMOD7_H_INCLUDED
#define TPMOD7_H_INCLUDED

#include <iostream>
using namespace std;

#define info(P) (P) -> info
#define next(P) (P) -> next
#define prev(P) (P) -> prev
#define first(L) ((L).first)
#define last(L) ((L).last)

// 1301213392 mod 4 = 0 (data nasabah bank)
struct NasabahBank {
    string nama_nasabah;
    string nama_bank;
    int no_rek;
    int saldo;
};

typedef NasabahBank infotype;
typedef struct element *adr;

struct element {
    infotype info;
    adr next;
    adr prev;
};

struct List {
    adr first;
    adr last;
};

void create_list_1301213392(List &L);
adr create_new_element_1301213392(infotype dataBaru);
void show_all_data_1301213392(List L);
void reverse_list_1301213392(List L);
void insert_first_1301213392(List &L, adr p);

int second_smallest_1301213392(List L);

int select_menu_1301213392();



#endif // TPMOD7_H_INCLUDED

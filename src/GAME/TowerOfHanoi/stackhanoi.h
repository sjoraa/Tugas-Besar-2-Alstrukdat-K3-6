/* File : stack.h */
/* Definisi ADT Stack dengan representasi array secara eksplisit dan alokasi statik */
/* TOP adalah alamat elemen puncak */

#ifndef __STACK_H__
#define __STACK_H__

#include "boolean.h"

#define IDX_UNDEF -1
#define CAPACITY 100

typedef int Typehanoi;
typedef struct {
  Typehanoi buffer[CAPACITY]; /* tabel penyimpan elemen */
  int idxTop;              /* alamat TOP: elemen puncak */
} StackHanoi;

/* ********* AKSES (Selektor) ********* */
/* Jika s adalah Stack, maka akses elemen : */
#define IDX_TOP(s) (s).idxTop
#define     TOP(s) (s).buffer[(s).idxTop]

/* *** Konstruktor/Kreator *** */
void CreateStackhanoi(StackHanoi *s);
/* I.S. sembarang; */
/* F.S. Membuat sebuah stack S kosong dengan kondisi sbb: */
/* - Index top bernilai IDX_UNDEF */
/* Proses : Melakukan alokasi, membuat sebuah s kosong */

/* ************ Prototype ************ */
boolean isEmptyhanoi(StackHanoi s);
/* Mengirim true jika s kosong: lihat definisi di atas */
boolean isFullhanoi(StackHanoi s);
/* Mengirim true jika tabel penampung nilai s stack penuh */

/* ************ Menambahkan sebuah elemen ke Stack ************ */
void pushhanoi(StackHanoi *s, Typehanoi val);
/* Menambahkan val sebagai elemen Stack s */
/* I.S. s mungkin kosong, tabel penampung elemen stack TIDAK penuh */
/* F.S. val menjadi TOP yang baru,IDX_TOP bertambah 1 */

/* ************ Menghapus sebuah elemen Stack ************ */
void pophanoi(StackHanoi *s, Typehanoi *val);
/* Menghapus val dari Stack s */
/* I.S. s tidak mungkin kosong */
/* F.S. val adalah nilai elemen TOP yang lama, IDX_TOP berkurang 1 */

boolean stacksamahanoi(StackHanoi s1,StackHanoi s2);

int lengthstackhanoi(StackHanoi s);

#endif
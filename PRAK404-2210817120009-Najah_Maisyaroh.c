#include <stdio.h>
int main(){
    int menu;
    float bil1, bil2, hasil;
    char nama[]= "Najah Maisyaroh";
    while (menu!=5){
        printf("Pilih Program \n 1. Penjumlahan\n 2. Pengurangan\n 3. Perkalian\n 4. Pembagian\n 5. Exit\n");
            printf("Masukkan Pilihan : ");
            scanf("%d", &menu);
        if (menu > 5 || menu <= 0){
            printf("Input anda salah, silahkan coba lagi \n");}
        else if (menu == 5){
            printf("Terimakasih, telah menggunakan kalkulator %s", nama);}
        else{
            printf("Masukkan nilai pertama : ");
            scanf("%f", &bil1);
            printf("Masukkan nilai kedua   : ");
            scanf("%f",  &bil2);
            if(menu==1){
                hasil = bil1 + bil2;
                printf("Hasil penjumlahan antara %.2f dengan %.2f adalah %.2f\n", bil1, bil2, hasil);}
            else if(menu==2){
                hasil = bil1 - bil2;
                printf("Hasil pengurangan antara %.2f dengan %.2f adalah %.2f\n", bil1, bil2, hasil);}
            else if(menu==3){
                hasil = bil1 * bil2;
                printf("Hasil perkalian antara %.2f dengan %.2f adalah %.2f\n", bil1, bil2, hasil);}
            else{
                hasil = bil1 / bil2;
                printf("Hasil pembagian antara %.2f dengan %.2f adalah %.2f\n", bil1, bil2, hasil);}}}
}
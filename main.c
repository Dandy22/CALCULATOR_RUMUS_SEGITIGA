#include <stdio.h>
#include <stdlib.h>

// Projek Iseng buat belajar - Dandy Antariksa

int main(){

    // VARIABLE
    int pilihan;
    float a, b, c;
    float keliling;

    float tinggi;
    float luas;
    float alas;

    // ALGORITMA
    printf("Selamat Datang, Di kalkulator sederhana menghitung Rumus Segitiga \n");
    printf("=============================================================");
    printf("\nSilakan Pilih Opsi dibawah, untuk menghitung segitiga: \n 1.Keliling \n 2.Alas \n 3.Tinggi \n 4.Luas \n Pilih: ");
    scanf("%d", &pilihan);

        if (pilihan == 1){
            printf("Masukan sisinya terlebih dahulu A: ");
            scanf("%f",&a);
            printf("Masukan sisinya terlebih dahulu B: ");
            scanf("%f",&b);
            printf("Masukan sisinya terlebih dahulu C: ");
            scanf("%f",&c);

            keliling = a+b+c;
            printf("Keliling Segitiga tersebut adalah: %f", keliling);
            }
            else if (pilihan == 2){
            printf("Masukan Luasnya terlebih dahulu Luas: ");
            scanf("%f", &luas);
            printf("Masukan Tingginya terlebih dahulu Tinggi: ");
            scanf("%f", &tinggi);

            alas = ((2 * luas) / tinggi);
            printf("Alas segitiga tersebut adalah: %f", alas);
            }
            else if (pilihan == 3){
            printf("Masukan Luasnya terlebih dahulu Luas: ");
            scanf("%f", &luas);
            printf("Masukan Alasnya terlebih dahulu Alas: ");
            scanf("%f", &alas);

            tinggi = ((2 * luas) / alas);
            printf("Tinggi Segitiga tersebut adalah: %f", tinggi);
            }
            else if (pilihan == 4){
            printf("Masukan Alasnya terlebih dahulu Alas: ");
            scanf("%f", &alas);
            printf("Masukan Tingginya terlebih dahulu Tinggi: ");
            scanf("%f", &tinggi);

            luas = 1.2 * alas * tinggi;
            printf("Luas Segitiga tersebut adalah: %f", luas);
            }
            else printf("INVALID // MASUKAN ANGKA 1-4!");
    return 0;


}

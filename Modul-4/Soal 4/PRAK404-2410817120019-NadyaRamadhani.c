#include <stdio.h>
int main(){
    int pilihan;
    float nil1, nil2;

    printf("Pilih Program\n");
    printf("1. Penjumlahan\n");
    printf("2. Pengurangan\n");
    printf("3. Perkalian\n");
    printf("4. Pembagian\n");
    printf("5. Exit\n");
    printf("Masukkan Pilihan: ");
    scanf("%d", &pilihan);
    if(pilihan==5){
        printf("Terimakasih, telah menggunakan kalkulator NADYARAMADHANI\n");
    }else if(pilihan<1 || pilihan>5){
        printf("Input anda salah, silahkan coba lagi\n");
    }else{
        printf("Masukkan Nilai Pertama: ");
        scanf("%f", &nil1);
        printf("Masukkan Nilai Kedua: ");
        scanf("%f", &nil2);
        if(pilihan==1){
            printf("Hasil penjumlahan antara %.2f dengan %.2f adalah %.2f", nil1, nil2, nil1+nil2);
        }else if(pilihan==2){
            printf("Hasil pengurangan antara %.2f dengan %.2f adalah %.2f", nil1, nil2, nil1-nil2);
        }else if(pilihan==3){
            printf("Hasil perkalian antara %.2f dengan %.2f adalah %.2f", nil1, nil2, nil1*nil2);
        }else if(pilihan==4){
            printf("Hasil pembagian antara %.2f dengan %.2f adalah %.2f", nil1, nil2, nil1/nil2);
            if(nil2==0){
                printf("Tidak dapat dibagi dengan nol");
            }
        }
    }

    return 0;
}
#include <stdio.h>
int main() {
    int angka1;
    int angka2;
    printf("");
    scanf("%d %d", &angka1, &angka2);
    
    if(angka1<angka2){
        for(int i=angka1, j=angka2; i<=angka2 && j>=angka1; i++, j--){
            printf("%d %d", i, j);
            if(i<angka2 || j>angka1){
                printf(" - ");
            }
        }
    } else {
        for(int i=angka1, j=angka2; i>=angka2 && j<=angka1; i--, j++){
            printf("%d %d", i, j);
            if(i>angka2 || j<angka1){
                printf(" - ");
            }
        }
    }

    return 0;
}
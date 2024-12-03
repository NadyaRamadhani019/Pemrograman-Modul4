#include <stdio.h>
int main(){
    int i;
    int maks;

    printf("");
    scanf("%d", &maks);

    for(i=1; i<=maks; i++){
        if(i % 2 != 0){
            printf("%d ", i);
        }
    }
    printf("\n");
    for(i=maks; i>=1; i--){
        if(i % 2 == 0){
            printf("%d ", i);
        }
    }

    return 0;
}
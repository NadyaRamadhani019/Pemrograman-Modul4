#include <stdio.h>
int main(){
    int i;
    int kelipatan;
    char simbol;

    printf("");
    scanf("%d %c", &kelipatan, &simbol);
    
    for(i=1; i<=50; i++){
        if(i%kelipatan==0){
            printf("%c ", simbol);
        }else{
            printf("%d ", i);
        }
    }

    return 0;
}
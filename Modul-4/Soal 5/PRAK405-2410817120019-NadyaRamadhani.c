#include <stdio.h>
int main(){
    int n, kelipatan;
    int total = 0;

    printf("");
    scanf("%d %d", &n, &kelipatan);

    for(int i=1; i<=n; i++){
        int z = 0;
        for(int j=i; j>=1; j--){
            z += j*kelipatan;
            printf("(%d * %d)", j, kelipatan);
            if(j>1){
                printf(" + ");
            }
        }
        printf(" = %d\n", z);
        total += z;
    }
    printf("%d", total);

    return 0;
}
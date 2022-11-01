#include <stdio.h>
int main(){
    int i, j, b;
    scanf("%d", &b);
    for(i = 1; i <= b; i++){
        if(i % 2 != 0)
            printf("%d ", i);}
    printf("\n");
    for(j = b; j >= 1; j--){
        if(j % 2 == 0)
            printf("%d ", j);}
    return 0;
}
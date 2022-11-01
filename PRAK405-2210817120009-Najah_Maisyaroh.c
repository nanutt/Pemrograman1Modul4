#include <stdio.h>
int main(){
    int x, y, h1=0, h2=0, h3=0;
    scanf("%d %d", &x, &y);
    for(int i = 0; i < x; i++){
        for(int j = i; j >= 0; j--){
            printf("(%d * %d)", j + 1, y);
            if (j > 0){
                printf(" + ");}}
    h1=(i + 1) * y;
    h2 = h2 + h1;
    printf(" = %d \n", h2);
    h3 = h3 + h2;}
    printf("%d", h3);
}
#include <stdio.h>
int main(){
    int bil1, bil2;
    int x = 0;
    scanf("%d %d", &bil1, &bil2);
    if (bil1 > bil2){
        for (int i = bil1; i >= bil2; i--){
            if (i == bil1){}
            else{
                printf(" - ");}
            printf("%d %d", i, bil2 + x);
            x++;}} 
    else{
        for (int i = bil1; i <= bil2; i++){
            if (i == bil1){}
            else{
                printf(" - ");}
            printf("%d %d", i, bil1+bil2-i);}}  
}
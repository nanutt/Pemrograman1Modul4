#include <stdio.h>
int main (){
    int i, b, c;
    scanf ("%d %c", &b, &c);
    for (i = 1; i <= 50; i++) {
    if (i % b == 0) {
    printf("%c ", c);}
    else{
    printf("%d ", i);}}
}
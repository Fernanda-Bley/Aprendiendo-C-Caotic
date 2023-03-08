#include <stdio.h>
#include <stdbool.h>
void F(){
    for (int i = 0; i < 6; i += 1){
        printf("F");
    }
    for (int i = 0; i < 3; i += 1){
        printf("\nF");
    }
    for (int i = 0; i < 3; i += 1){
        printf("F");
    }
    for (int i = 0; i < 3; i += 1){
        printf("\nF");
    }
}

void C(){
    for (int i = 0; i < 6; i += 1){
        printf("C");
    }
    for (int i = 0; i < 6; i += 1){
        printf("\nC");
    }
    for (int i = 0; i < 6; i += 1){
        printf("C");
    }
}
int main(){
    F();
    printf("\n\n");
    C();
    return 0;
}
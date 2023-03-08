#include <stdio.h>
#include <stdbool.h>
#include <string.h>

//Basado en https://stackoverflow.com/questions/784417/reversing-a-string-in-c
void reverso(char object){
    char * temp;
    int len = strlen(object) - 1;

    for (int i = 0; i < len; i += 1){
        temp[i] = object[(len - i)];
    }

    printf(temp);
}
int main(){
    char texto;
    scanf("%s", texto);

    reverso(texto);

    return 0;
}
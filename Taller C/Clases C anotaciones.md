# Aprendiendo a ocupar C:

## Para funciones:
output Funciones con output
void sin output

## Punteros 
Es una variable que representa la dirección de una variable en la memoria. Osea: *Si b es puntero de a, b es la dirección de a.*

Estos datos se le entregan a un valor con el asterisco (*) o un ampersand (&) este se puede ocupar de distintas maneras:
- int/char/double *x (Me dice que x es el puntero de un int/char/double)

## Arreglos
Es una lista de datos parecido a un set, es inmutable. Hay que hacer un nuevo arreglo para mover todos los elementos ya que todos los elementos. Estos tienen que ser del mismo tipo.

## Strings
Arreglos de char se pueden arreglar de varias maneras; 
char hello[] = "hello world"
char hello = "hello world"

## Structs
Son una colección de variables (parecido a una clase) empieza con
typedef struct NOMBRE{
    int caract_1;
    char caract_2;
}

int main{
    NOMBRE usado;
    usado.caract_1 = (Un int);
    usado.caract_2 = (Un char);    
}
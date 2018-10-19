/*
 *En este programa le pediremos al usuario que escriba una oracion y le daremos el
 * numero de palabras escritas en la oracion
 *
 * Autora: Yasmin Alvarado Lee
 * Correo: yazminalvlee@gmail.com
 * fecha: 18 de octubre del 2018
 */
#include <stdio.h>

int main() {
    //VARIABLES
    char string[1000];

    int palabra = 1;

    int counter = 0;

    printf("Escribe una oracion: ");
    fgets(string, sizeof(string), stdin);

    //OPERACIONES
    //Aqui hacemos que el programa pueda validar el numero de palabras escritas en la oracion
    while (string[counter] != '\0') {
        counter++;
        if (string[counter] == ' '){
            palabra++;
        }
    }

    printf("Escribiste %i palabras.", palabra);

    return 0;
}
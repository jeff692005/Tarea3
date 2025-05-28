//Inclusion de las librerias
#include <stdio.h>

int main() {
    char string[100];
    char caracter;      
    int i = 0, contador = 0;

    //Se le solicita al usuario la palabra y el carácter
    printf("Escriba la palabra a examinar: ");
    scanf("%s", string);
    printf("Escriba el carácter que quiere contar: ");
    scanf(" %c", &caracter);

    //Cuenta las apariciones del carácter
    while (string[i] != '\0') {
        if (string[i] == caracter) {
            contador++;
        }
        i++;
    }

    //Muestra las veces que aparece el caracter
    printf("El carácter '%c' aparece %d veces.\n", caracter, contador);

    // Muestra la palabra al revés
    printf("La cadena al revés es: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%c", string[j]);
    }
    printf("\n");

    return 0;
}

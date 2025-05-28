//Inclusión de bibliotecas
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char linea[100];
    int i, valido, tiene_digito;

    //Validación de los datos
    while (fgets(linea, sizeof(linea), stdin)) {
        i = 0;
        valido = 1;
        tiene_digito = 0;

        //Saltarse los espacios del principio
        while (linea[i] == ' ' || linea[i] == '\t') {
            i++;
        }


        //Contar dígitos
        while (isdigit(linea[i])) {
            tiene_digito = 1;
            i++;
        }

        //Saltarse los espacios del final
        while (linea[i] == ' ' || linea[i] == '\t') {
            i++;
        }

        //Imprimir
        if (!tiene_digito || (linea[i] != '\n' && linea[i] != '\0')) {
            linea[strcspn(linea, "\n")] = '\0';  
            fprintf(stderr, "Error - Línea inválida: '%s'\n", linea);
        } else {
            linea[strcspn(linea, "\n")] = '\0';  
            printf("Número: '%s'\n", linea);
        }
    }

    return 0;
}

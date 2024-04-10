#include <stdio.h>

// Estructura para almacenar los datos del boleto
struct Boleto {
    char nombre[50];
    char apellido[50];
    int cedula;
    char sala[10];
    int puesto;
    char hora[10];
    char pelicula[100];
};

int main() {
    struct Boleto boleto;

    // Solicitar datos al usuario
    printf("Ingrese su nombre: ");
    scanf("%s", boleto.nombre);

    printf("Ingrese su apellido: ");
    scanf("%s", boleto.apellido);

    printf("Ingrese su cédula: ");
    scanf("%d", &boleto.cedula);

    printf("Ingrese la sala: ");
    scanf("%s", boleto.sala);

    printf("Ingrese el número de puesto: ");
    scanf("%d", &boleto.puesto);

    printf("Ingrese la hora de la función: ");
    scanf("%s", boleto.hora);

    printf("Ingrese el nombre de la película: ");
    scanf("%s", boleto.pelicula);

    // Crear archivo de texto con formato de boleto
    FILE *archivo = fopen("boleto_cine.txt", "w");
    if (archivo != NULL) {
        fprintf(archivo, "------------------------\n");
        fprintf(archivo, "     Boleto de Cine\n");
        fprintf(archivo, "------------------------\n");
        fprintf(archivo, "Nombre: %s %s\n", boleto.nombre, boleto.apellido);
        fprintf(archivo, "Cédula: %d\n", boleto.cedula);
        fprintf(archivo, "Sala: %s\n", boleto.sala);
        fprintf(archivo, "Puesto: %d\n", boleto.puesto);
        fprintf(archivo, "Hora: %s\n", boleto.hora);
        fprintf(archivo, "Película: %s\n", boleto.pelicula);
        fprintf(archivo, "------------------------\n");
        fclose(archivo);
        printf("Se ha creado el boleto en el archivo 'boleto_cine.txt'.\n");
    } else {
        printf("Error al crear el archivo.\n");
    }

    return 0;
}

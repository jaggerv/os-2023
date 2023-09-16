#include <stdio.h>

int main ()
{
    //Definimos las variables de las notas y la variable del promedio
    float nota1, nota2, nota3, nota4;
    float promedio;
    //Solicitamos al usuario las cuatro notas
    printf("Primera nota: ");
    scanf("%f",&nota1);
    printf("Segunda nota: ");
    scanf("%f",&nota2);
    printf("Tercera nota: ");
    scanf("%f",&nota3);
    printf("Cuarta nota: ");
    scanf("%f",&nota4);

    //Validamos que sea correcta la inserción de notas
    if (nota1 >= 1.0 && nota2 >= 1.0 && nota3 >= 1.0 && nota4 >= 1.0)
    {
        promedio = (float)((nota1+nota2+nota3+nota4)/4.0);
        printf("El promedio de notas es: %.2f",promedio);
        return 0;
    }
    else
    {
        printf("Se ha ingresado una o más nota de manera incorrecta.\n");
        return 0;
    }
}

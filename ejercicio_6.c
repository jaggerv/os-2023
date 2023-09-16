#include <stdio.h>

int main ()
{
    //Definimos las variables de las notas y la variable del promedio
    float nota1, nota2, nota3;
    float promedio;
    //Solicitamos al usuario las cuatro notas
    printf("Primera nota: ");
    scanf("%f",&nota1);
    printf("Segunda nota: ");
    scanf("%f",&nota2);
    printf("Tercera nota: ");
    scanf("%f",&nota3);


    //Validamos que sea correcta la inserción de notas
    if (nota1 >= 1.0 && nota2 >= 1.0 && nota3 >= 1.0)
    {
        promedio = (float)((nota1*0.4)+(nota2*0.3)+(nota3*0.3));
        printf("El promedio de notas es: %.2f\n",promedio);
    }
    else
    {
        printf("Se ha ingresado una o más nota de manera incorrecta.\n");
        return 0;
    }

    if (promedio < 3.95)
    {
        printf("Ha reprobado la asignatura.\n");
        return 0;
    }
    else if (promedio >= 3.95 && promedio <= 4.94)
    {
        printf("Se va a examen.\n");
        return 0;
    }
    else
    {
        printf("Felicitaciones! eximiste la asignatura.\n");
        return 0;
    }
}
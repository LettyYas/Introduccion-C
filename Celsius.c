#include<stdio.h>
#include<stdlib.h>
#include<math.h>

struct Temperatura{
    float GradosFarenheit;
};
int main(){
    float farenheit;
    float celsius = 0 ;

    system("@cls||clear");
    printf("Ingresar los grados Farenheit: ");
    scanf("%f", &farenheit);
    celsius=(farenheit-32) * 5 / 9;
    printf("El resultado en grados Celsius es: %f\n", celsius);
    getchar();
    return 0;

}
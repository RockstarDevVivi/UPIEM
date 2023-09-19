// Online C++ compiler to run C++ program online
#include <iostream>
#include <locale.h>
#include <math.h>

int main()
{
	setlocale(LC_ALL, "spanish");
	double a, b, c, I, x1, x2, i;
	
	printf("Ingresa un número real a=");
	scanf("%lf",&a);
		printf("Ingresa un número real b=");
	scanf("%lf",&b);
	printf("Ingresa un número real c=");
	scanf("%lf",&c);
	I=pow(b,2)-4*a*c;
	printf("El valor de I es: %lf", I);

    if(I>=0){
        printf("\nEl discriminante es positivo o cero.");
        printf("\nLa primera raiz es %lf", (-b+sqrt(I))/(2*a));
        printf("\nLa segunda raiz es %lf", (-b-sqrt(I))/(2*a));
    }else
    {
        printf("\nEl discriminante es negativo. Calculando raíces imaginarias.");

        // Calcular partes real e imaginaria de las raíces
        double realPart = -b / (2 * a);
        double imagPart = sqrt(I*-1) / (2 * a);

        // Imprimir raíces imaginarias en la forma "x +/- yi"
        printf("\nLa primera raiz es: %.2lf + %.2lfi", realPart, imagPart);
        printf("\nLa segunda raiz es: %.2lf - %.2lfi", realPart, imagPart);
    }


	return 0;
}

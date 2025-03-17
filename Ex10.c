#include <stdio.h>
#include <math.h>
#include <complex.h>

void cw10(double a, double b, double c);

int main() {
    double a, b, c;

    printf("Podaj wspolczynniki a, b, c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    if (a == 0) {
        printf("To nie jest rownanie kwadratowe (a != 0)\n");
        return 1;
    }

    cw10(a, b, c);

    return 0;
}

void cw10(double a, double b, double c){
    double delta = b * b - 4 * a * c;

    if (delta > 0) {
        double x1 = (-b + sqrt(delta)) / (2 * a);
        double x2 = (-b - sqrt(delta)) / (2 * a);
        printf("Pierwiastki rzeczywiste: x1 = %.2f, x2 = %.2f\n", x1, x2);
    } else if (delta == 0) {
        double x = -b / (2 * a);
        printf("Jeden pierwiastek rzeczywisty: x = %.2f\n", x);
    } else {
        double complex x1 = (-b + csqrt(delta)) / (2 * a);
        double complex x2 = (-b - csqrt(delta)) / (2 * a);
        printf("Pierwiastki zespolone: x1 = %.2f + %.2fi, x2 = %.2f + %.2fi\n", 
               creal(x1), cimag(x1), creal(x2), cimag(x2));
    }
}
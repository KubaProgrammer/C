#include <stdio.h>

void cw9();

int main() {
    cw9();
    return 0;
}

void cw9(){
    char input[20]; // Bufor na wejście użytkownika
    double a, b;
    char op;

    printf("Podaj wyrażenie (np. 7*4): ");
    fgets(input, sizeof(input), stdin);  // Odczytanie wejścia

    // Parsowanie wyrażenia w formacie liczba-operator-liczba
    if (sscanf(input, "%lf %c %lf", &a, &op, &b) != 3) {
        printf("Błąd: niepoprawne wyrażenie.\n");
        return;
    }

    // Wykonanie operacji w zależności od operatora
    switch (op) {
        case '+': printf("Wynik: %.2lf\n", a + b); break;
        case '-': printf("Wynik: %.2lf\n", a - b); break;
        case '*': printf("Wynik: %.2lf\n", a * b); break;
        case '/': 
            if (b != 0)
                printf("Wynik: %.2lf\n", a / b);
            else
                printf("Błąd: dzielenie przez zero.\n");
            break;
        default:
            printf("Błąd: nieznany operator.\n");
    }
}
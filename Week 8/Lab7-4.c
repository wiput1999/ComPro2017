#include <stdio.h>

double celsiusToFahrenheit(double celcius);
double fahrenheitToCelcius(double fahrenheit);
void printFarenheit(double fahrenheit);
void printCelcius(double celcius);

int main(void) {

    char type;
    double temp;

    scanf("%lf %c", &temp, &type);

    switch(type) {
        case 'c':
        case 'C':
            printFarenheit(celsiusToFahrenheit(temp));
            break;
        case 'f':
        case 'F':
            printCelcius(fahrenheitToCelcius(temp));
            break;
    }

    return 0;
}

double celsiusToFahrenheit(double celcius) {
    return 32 + (celcius * 1.8);
}

double fahrenheitToCelcius(double fahrenheit) {
    return (fahrenheit - 32) / 1.8;
}

void printFarenheit(double fahrenheit) {
    printf("%.2lf f", fahrenheit);
}

void printCelcius(double celcius) {
    printf("%.2lf c", celcius);
}
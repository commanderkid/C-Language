#include <stdio.h>

void temperatureCalculator(double, char);
void mainMenue(void);
void greatingHeader(void);
void answer(double, double, char);

void main(void) {
    mainMenue();
}

void greatingHeader(void) {
    printf("---------------------------------------\n");
    printf("         Welcome to convertor          \n");
    printf("---------------------------------------\n");
}

void mainMenue(void)  {
    printf("\nPlease choose correct!\nc - for celseum convertation\nf - for farengate convertation\ne - for exit\n");
    char cond;
    double temperature;
    scanf("%c", &cond);

    switch(cond) {
        case 'c' :
            scanf("%lf", &temperature);
            temperatureCalculator(temperature, 'c');
            break;
        case 'f' :
            scanf("%lf", &temperature);
            temperatureCalculator(temperature, 'f');
            break;
        case 'e' :
           printf("\nGoodBuy!!!\n");
           return;
           break;
        default:
           printf("You chose wrong condition\n\n");
           mainMenue();
           break;
    }
}


void temperatureCalculator(double temperature, char position) {
    double answerTemperature;
    if (position = 'c')
        answerTemperature = 5.0 * (temperature-32.0) / 9.0;
    else
        answerTemperature = 9.0 * (temperature / 5.0) + 32.0;
    answer(temperature, answerTemperature, position);
}


void answer(double temperature, double answerTemperature, char temperatureFlag) {
    if (temperatureFlag == 'c')
        printf("Temperature in farenhate was: %.2f and temperature in celseum was: %.2f\n\n", temperature, answerTemperature);
    else
        printf("Temperature in celseum was: %.2f and temperature in farengate was: %.2f\n\n", temperature, answerTemperature);
}

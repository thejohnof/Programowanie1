#include <stdio.h>

int main() {

    //wczytanie danych
double godziny, stawka;
    printf("Podaj liczbe przepracowanych godzin: \n"); //przepracowane godziny
    scanf("%lf", &godziny);

        printf("Podaj stawke godzinowa: \n"); //stawka godzinowa
    scanf("%lf", &stawka);

    //sprawdzenie danych
        if (godziny < 0 || stawka <= 0) {
        printf("Błąd: Liczba godzin nie może być mniejsza niż 0, a stawka nie może wynosić 0 lub mniej niż 0\n");
        
    return 0; //kończy program przedwcześnie
}


    // obliczenia nadgodzin i variable wynagrodzeń
    double wynagrodzenie_podstawowe = 0;
    double wynagrodzenie_nadgodziny = 0;
double premia = 0;
    double nadgodziny = 0;

    if (godziny <= 160) {  
        wynagrodzenie_podstawowe = godziny * stawka;
    }
    else {
        wynagrodzenie_podstawowe = 160 * stawka;
    nadgodziny = godziny - 160;
    wynagrodzenie_nadgodziny = nadgodziny * stawka * 1.5;
    }

//premia powyżej 200 godzin

if (godziny > 200) {
    premia = 1000;
}

// obliczenie całego wynagrodzena ze wszystkim
double cale_wynagrodzenie = wynagrodzenie_podstawowe + wynagrodzenie_nadgodziny + premia;

//wynik

printf ("liczba przepracowanych godzin %.0f\n", godziny);
printf ("stawka godzinowa %.2f\n", stawka);
printf ("nadgodziny %.2f\n", nadgodziny);
printf ("premia za przekroczenie 200 godzin %.2f\n", premia);
printf ("calkowite wynagrodzenie %.2f\n", cale_wynagrodzenie);

return 0;

}

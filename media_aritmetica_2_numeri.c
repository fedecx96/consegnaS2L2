#include <stdio.h>

int main() 

{
    int num1;
    int num2;
    int risultato;
    
    // Benvenuto
    printf("Media aritmetica tra 2 numeri!\n");
    printf("*****************************\n");

    // Lettura primo numero inserito dall'utente
    printf("Inserisci il primo numero: ");
    scanf("%d", &num1);

    // Lettura secondo numero inserito dall'utente
    printf("Inserisci il secondo numero: ");
    scanf("%d", &num2);

    // Calcolo della media aritmetica
    risultato = (num1 + num2) / 2;

    // Stampa del risultato
    printf("Il risultato della moltiplicazione è: %d", risultato);

    return 0;
}
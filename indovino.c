#include <stdio.h>


int main()
{
    printf("Inserisci il numero da indovinare\n");
    int numero_inserito = 0;
    scanf("%d",&numero_inserito);
    printf("Hai 5 tentativi per indovinare il numero inserito\n");
    int i = 0;
    int numero_digitato = 0;
    for(i=0; i < 5;i++)
    {
        printf("Inserisci il numero che pensi sia giusto: ");
        scanf("%d",&numero_digitato);
        if (numero_inserito == numero_digitato)
        {
            if(i==0)
            {
                printf("Bravissimo, hai indovinato il numero al primo colpo!\n");
                break;
            }
            else
            {
                i=i+1;
                printf("Bravo hai indovinato il numero al %d tentativo\n",i);
                i=i-1;
            }
            
        }
        if(i==3){
            printf("ultimo tentativo\n");
        }
    }
    printf("chiusura programma");
        
}

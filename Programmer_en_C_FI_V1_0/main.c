//Inclus des librairies/biblioth�que
#include <stdio.h> //permet d'utiliser toutes les m�thodes d'entr�e sortie
#include <stdlib.h>  //permet d'utiliser des m�thodes telque des timer etc..
#include <math.h>   //permet d'utiliser des m�thodes math�matique

#define NFOIS 5  //D�claration de constante

//EXEMPLE PROGRAMMER EN C

int main() //Programme principal
{
   // printf("Hello world!\n");

    //D�claration de variable
    int i;
    float x, racx;

    printf("bonjour"); //M�thode de sortie standard

    printf("Je vais calculer %d racine carrees \n",NFOIS); //Le pourcentage sert a sp�cifi� une variable en fonction de son type

    for (i=0;i<NFOIS;i++)
    {

        printf("Donnez un nombre : ");
        scanf("%f",&x); //Fonction permettant de r�cuperer la saisie au clavier une information d'un certain dype '%..', &x car on passe par la r�ference de la variable x
        if (x<0.0) //On pr�cise .0 car c'est un r�el
            printf("Le nombre %f ne possede pas de racine carree\n",x);
        else
        {
            racx=sqrt(x);
        printf("Le nombre %f a pour racine carree : %f\n",x,racx);
        }
    }

    printf("Travail Termine - Au revoir");
    return 0;

}

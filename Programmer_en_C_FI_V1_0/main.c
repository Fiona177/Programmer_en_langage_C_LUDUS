//Inclus des librairies/bibliothèque
#include <stdio.h> //permet d'utiliser toutes les méthodes d'entrée sortie
#include <stdlib.h>  //permet d'utiliser des méthodes telque des timer etc..
#include <math.h>   //permet d'utiliser des méthodes mathématique

#define NFOIS 5  //Déclaration de constante

//EXEMPLE PROGRAMMER EN C

int main() //Programme principal
{
   // printf("Hello world!\n");

    //Déclaration de variable
    int i;
    float x, racx;

    printf("bonjour"); //Méthode de sortie standard

    printf("Je vais calculer %d racine carrees \n",NFOIS); //Le pourcentage sert a spécifié une variable en fonction de son type

    for (i=0;i<NFOIS;i++)
    {

        printf("Donnez un nombre : ");
        scanf("%f",&x); //Fonction permettant de récuperer la saisie au clavier une information d'un certain dype '%..', &x car on passe par la réference de la variable x
        if (x<0.0) //On précise .0 car c'est un réel
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

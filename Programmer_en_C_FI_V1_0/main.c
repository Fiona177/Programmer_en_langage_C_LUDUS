//Inclus des librairies/bibliothèque
#include <stdio.h> //permet d'utiliser toutes les méthodes d'entrée sortie
#include <stdlib.h>  //permet d'utiliser des méthodes telque des timer etc..
#include <math.h>   //permet d'utiliser des méthodes mathématique

#define NFOIS 5  //Déclaration de constante. La constante prendra de la place que lorsque le programme sera executé.
#define PI 3.14
#define NOM "ISS"
#define CAR 'b'


//#include/ #define sont des macros utilisés par le préprocesseur.

/*La compilation consiste à traduire le langage source en langage machine en faisant appelle à un programme nommé compilateur. En langage C compte tenu de l'existance d'un préprocesseur cette opération de compilateur comporte deux étapes:
- Le traitement par le préprocesseur. Ce dernier execute les directives qui le concerne, elle commence par le caractere #. Il produit en résultat un programme source en langage C pur.
La compilation est proprement dit la traduction du langage texte c fourni par le preprocesseur en langage machine. Le résultat de la compilation porte le nom du module.o . L'édition de lien, le module objet créé par l'ordinateur n'est pas tout de suite executable, il lui manque au moins les differents modules comrrespondant au fonction predef utilisé par notre prog. C'est effectivement le role de l'editeur de lien que d'aller chercher dans la biblio les modules objets necessaires.
Le résultat d'édition de lien est ce que l'on appelle un executable.*/

//EXEMPLE PROGRAMMER EN C

/*int main() //Programme principal
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

}*/


/*void main() //Void est une procédure car c'est une fonction qui ne revoie rien
{
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
}*/

int main ()
{
    //Integer on utilise le préfixe 'n'
    short int sn_a; //short préfixe pour démarquer 'sn'
    int n_b;
    long int ln_c; //long préfixe pour démarquer 'ln'

    printf("Taille de a : %d\n",sizeof(sn_a));
    printf("Taille de b : %d\n",sizeof(n_b));
    printf("Taille de c : %d\n",sizeof(ln_c));

    //réel
    float fltReelSimple; //réel simple avec préfixe 'flt'
    double dblReelDouble; //réel double avec préfixe 'dbl'

    printf("Taille de flt : %d\n",sizeof(fltReelSimple));
    printf("Taille de dbl : %d\n",sizeof(dblReelDouble));

    //Caractère
    char cCaractere; //On utilise le préfixe 'c'

    printf("Taille d'un caractere : %d\n",sizeof(cCaractere));

    //Il n'y a pas de type chaine de caractere car c'est un tableau de caractere.
    //Il n'y a pas non plus de bool car c'est 1 ou 0.

    //On peut aussi déclarer des constantes dans le programme, elles sont locales au programme principal.
    //const int cnT = 10;

    //Classe de stockage
    //volatile int nVolB; //désigne une variable pouvant être modifiée notamment par une source externe indépendante du programme.
    //static int nStatB; // rend une définition de variable persistante.

    //Tester les define
    printf("Constante PI : %f\n",PI);
    printf("Constante Car : %c\n",CAR);
    printf("Constante NOM : %s\n",NOM); //%s permet d'afficher une chaine de caractere

    //Opérateurs
    int nI=0;
    ++nI; //pré incrementation, avant execution lors d'un instruction de contrôle
    nI++; //post incrémentation, après l'execution lors d'un instruction de contrôle
    // % -> Modulo
    // / -> Division

    //Caster
    long double ldblLongDouble = 105.86544;
    printf("Valeur du longdouble : %lf\n",(double)ldblLongDouble);

    //Opérateur relationnel
    // >
    // <
    // >=
    // <=
    // ==
    // !=

    //Opérateur logique
    // & = et binaire
    // && = et logique si la premiere est fause alors il s'arrete tout de suite sans faire la suite
    // | = ou bianire
    // || = ou logique si la premiere est juste alors il s'arrete tout de suite sans faire la suite
    // ! = négation

    //Factorisation des opéateurs
    // +=
    // -=
    // *=
    // /=
    // %=
    //...

    //nA+=nB  <- à nA on affecte nA + nB 'reaffectation'





    return 0;
}

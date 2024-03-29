//Inclus des librairies/biblioth�que
#include <stdio.h> //permet d'utiliser toutes les m�thodes d'entr�e sortie
#include <stdlib.h>  //permet d'utiliser des m�thodes telque des timer etc..
#include <math.h>   //permet d'utiliser des m�thodes math�matique

#define NFOIS 5  //D�claration de constante. La constante prendra de la place que lorsque le programme sera execut�.
#define PI 3.14
#define NOM "ISS"
#define CAR 'b'


//#include/ #define sont des macros utilis�s par le pr�processeur.

/*La compilation consiste � traduire le langage source en langage machine en faisant appelle � un programme nomm� compilateur. En langage C compte tenu de l'existance d'un pr�processeur cette op�ration de compilateur comporte deux �tapes:
- Le traitement par le pr�processeur. Ce dernier execute les directives qui le concerne, elle commence par le caractere #. Il produit en r�sultat un programme source en langage C pur.
La compilation est proprement dit la traduction du langage texte c fourni par le preprocesseur en langage machine. Le r�sultat de la compilation porte le nom du module.o . L'�dition de lien, le module objet cr�� par l'ordinateur n'est pas tout de suite executable, il lui manque au moins les differents modules comrrespondant au fonction predef utilis� par notre prog. C'est effectivement le role de l'editeur de lien que d'aller chercher dans la biblio les modules objets necessaires.
Le r�sultat d'�dition de lien est ce que l'on appelle un executable.*/

//EXEMPLE PROGRAMMER EN C

/*int main() //Programme principal
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

}*/


/*void main() //Void est une proc�dure car c'est une fonction qui ne revoie rien
{
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
}*/

int main ()
{
    //Integer on utilise le pr�fixe 'n'
    short int sn_a; //short pr�fixe pour d�marquer 'sn'
    int n_b;
    long int ln_c; //long pr�fixe pour d�marquer 'ln'

    printf("Taille de a : %d\n",sizeof(sn_a));
    printf("Taille de b : %d\n",sizeof(n_b));
    printf("Taille de c : %d\n",sizeof(ln_c));

    //r�el
    float fltReelSimple; //r�el simple avec pr�fixe 'flt'
    double dblReelDouble; //r�el double avec pr�fixe 'dbl'

    printf("Taille de flt : %d\n",sizeof(fltReelSimple));
    printf("Taille de dbl : %d\n",sizeof(dblReelDouble));

    //Caract�re
    char cCaractere; //On utilise le pr�fixe 'c'

    printf("Taille d'un caractere : %d\n",sizeof(cCaractere));

    //Il n'y a pas de type chaine de caractere car c'est un tableau de caractere.
    //Il n'y a pas non plus de bool car c'est 1 ou 0.

    //On peut aussi d�clarer des constantes dans le programme, elles sont locales au programme principal.
    //const int cnT = 10;

    //Classe de stockage
    //volatile int nVolB; //d�signe une variable pouvant �tre modifi�e notamment par une source externe ind�pendante du programme.
    //static int nStatB; // rend une d�finition de variable persistante.

    //Tester les define
    printf("Constante PI : %f\n",PI);
    printf("Constante Car : %c\n",CAR);
    printf("Constante NOM : %s\n",NOM); //%s permet d'afficher une chaine de caractere

    //Op�rateurs
    int nI=0;
    ++nI; //pr� incrementation, avant execution lors d'un instruction de contr�le
    nI++; //post incr�mentation, apr�s l'execution lors d'un instruction de contr�le
    // % -> Modulo
    // / -> Division

    //Caster
    long double ldblLongDouble = 105.86544;
    printf("Valeur du longdouble : %lf\n",(double)ldblLongDouble);

    //Op�rateur relationnel
    // >
    // <
    // >=
    // <=
    // ==
    // !=

    //Op�rateur logique
    // & = et binaire
    // && = et logique si la premiere est fause alors il s'arrete tout de suite sans faire la suite
    // | = ou bianire
    // || = ou logique si la premiere est juste alors il s'arrete tout de suite sans faire la suite
    // ! = n�gation

    //Factorisation des op�ateurs
    // +=
    // -=
    // *=
    // /=
    // %=
    //...

    //nA+=nB  <- � nA on affecte nA + nB 'reaffectation'





    return 0;
}

#include <stdio.h>

int main()
{
    char chaine[100];

    printf("Entrez une chaine de caracteres :\n");
    //scanf("%s", chaine);
    fgets (chaine,100,stdin);

    int taille = strlen(chaine);
    int nbMaj = 0;
    int nbMin = 0;
    int nbSpace = 0;
    int nbOther = 0;

    int i;
    // Pour enlever le dernier caractère à la ligne
    for (i = 0; i<(taille-1) ; i++)
    {

        if ( ( 'a' <= chaine[i]) && ( chaine[i] <= 'z' ) )
        {
            nbMin++;
        }
        else
        {
            if ( ( 'A' <= chaine[i]) && ( chaine[i] <= 'Z' ) )
            {
                nbMaj++;
            }
            else
            {
                if ( chaine[i] == ' ' )
                {
                    nbSpace++;
                }
                else
                {
                    nbOther++;
                }

            }
        }

    }

    printf("Le nombre de majuscules est : %d\n", nbMaj);
    printf("Le nombre de minuscules est : %d\n", nbMin);
    printf("Le nombre d'espaces est : %d\n", nbSpace);
    printf("Le nombre d'autres caracteres est : %d\n", nbOther);

    return;
}

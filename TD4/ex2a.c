#include <stdio.h>
#define TAILLE  10
#define NBRE 3

int main()
{
    int i;
    int j;
    int k;

    for (i = 0; i<TAILLE ; i++)
    {
        for (k = (TAILLE-i)-1; k>0; k--)
			printf(" ");

		for ( j = (2*i)+1 ; j>0 ; j--)
            printf("*");

		printf("\n");
    }

    printf("||||\n");

}

#include <stdio.h>
#include <stdlib.h>

#include "declaration.h"

int main()
{
    //initialisation
    vecteur vA;
    vA=initialisation();
    vA.nX=5;
    vA.nY=-2;

    vecteur vB;
    vB=initialisation();
    vB.nX=-12;
    vB.nY=2;

    //vectorisation
    vecteur vVect;
    vVect=vectorisation(vA, vB);
    scanf("Le vecteur des points vA et de vB est: (%d, %d)\n",&vVect.nX, &vVect.nY);

    //somme
    vecteur vSomme;
    vSomme=somme(vA, vB);
    scanf("La somme de vA et de vB est: (%d, %d)\n",&vSomme.nX, &vSomme.nY);

    //difference
    vecteur vDif;
    vDif=difference(vA, vB);
    scanf("La somme de vA et de vB est: (%d, %d)\n",&vDif.nX, &vDif.nY);



    return 0;
}


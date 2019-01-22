#include <stdio.h>
#include <stdlib.h>

//appel du header
#include "declaration.h"

/** \brief Faire la somme de 2 vecteur
 *
 * \param vecteur vN1
 * \param vecteur vN2
 * \return vecteur v12 (somme des 2 vecteurs)
 *
 */

 vecteur somme(const vecteur vN1, const vecteur vN2)
 {
     vecteur vN12;

     vN12.nX=vN1.nX+vN2.nX;
     vN12.nY=vN1.nY+vN2.nY;


    return vN12;
 }


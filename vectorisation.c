#include <stdio.h>
#include <stdlib.h>

//appel du header
#include "declaration.h"

/** \brief creer les coordonée d'un vecteur à l'aide de 2 points
 *
 * \param point n°1
 * \param point n°2
 * \return un vecteur
 *
 */

 vecteur vectorisation(const vecteur vPoint1, const vecteur vPoint2)
 {
     vecteur vFinal;

     vFinal.nX=vPoint2.nX-vPoint1.nX;
     vFinal.nY=vPoint2.nY-vPoint1.nY;

     return vFinal;
 }

#include <stdio.h>
#include <stdlib.h>

#include "declaration.h"


/** \brief
 *
 * \param
 * \param
 * \return
 *
 */

vecteur difference(vecteur vI, vecteur vY)
{
    vecteur vDiff;

    vDiff.nX=vI.nX-vY.nX;
    vDiff.nY=vI.nY-vY.nY;

    return vDiff;
}

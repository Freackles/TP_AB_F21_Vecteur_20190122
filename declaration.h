#ifndef DECLARATION_H_INCLUDED
#define DECLARATION_H_INCLUDED


#endif // DECLARATION_H_INCLUDED

typedef struct vecteur{
    int nX, nY;
}vecteur;

//Prototype
vecteur initialisation ();
vecteur vectorisation(const vecteur vPoint1, const vecteur vPoint2);
vecteur somme(const vecteur vN1, const vecteur vN2);
vecteur difference(vecteur vI, vecteur vY);

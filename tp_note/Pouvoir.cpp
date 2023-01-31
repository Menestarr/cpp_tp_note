/*
 * Pouvoir.cpp
 *
 *  Created on: 31 janv. 2023
 *      Author: Romain
 */

#include "Pouvoir.h"
#include "Espece.h"
#include "Element.h"

Pouvoir::Pouvoir(string n, Element e = Element "") {
	nom = n;
    element = e;
}

void Pouvoir::utiliser(Espece e){
    appliquerEffet(e);
}

Pouvoir::~Pouvoir() {
}
/*
 * Espece.cpp
 *
 *  Created on: 31 janv. 2023
 *      Author: Enzo
 */

#include "Espece.h"

Espece::Espece(string n, int s, int m, int f, vector<Pouvoir> lp,  vector<Element> le){
	nom = n;
	sante = s;
	magie = m;
	force = f;
	list_pouvoirs = lp;
	list_elements = le;
}

void Espece::attaquer(Pouvoir p, Espece e){

	p.utiliser(e);
}

void Espece::ajouterPouvoir(Pouvoir p){

	list_pouvoirs.push_back(p);

}

void Espece::ajouterElement(Element e){

	list_elements.push_back(e);

}

Espece::~Espece() {


	// TODO Auto-generated destructor stub
}


/*
 * Espece.h
 *
 *  Created on: 31 janv. 2023
 *      Author: Enzo
 */

#ifndef ESPECE_H_
#define ESPECE_H_

#include "Pouvoir.h"

#include <iostream>
#include <string>
#include <vector>
#include <string>

class Espece {
public:

	string nom;
	int sante;
	int magie;
	int force;

	vector<Pouvoir> list_pouvoirs;

	vector<Element> list_elements;

	Espece(string, int, int, int);
	virtual ~Espece();

	void attaquer(Pouvoir, Espece);

	void ajouterPouvoir(Pouvoir);

	void ajouterElement(Element);
};

#endif /* ESPECE_H_ */

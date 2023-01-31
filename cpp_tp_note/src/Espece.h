/*
 * Escpece.h
 *
 *  Created on: 31 janv. 2023
 *      Author: Enzo
 */

#ifndef ESCPECE_H_
#define ESCPECE_H_

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Espece {
public:

	String nom;
	int sante;
	int magie;
	int force;

	Pouvoir list_pouvoir;

	Espece();
	virtual ~Espece();

	void Attaquer(Pouvoir, Espece);
};

#endif /* ESCPECE_H_ */

/*
 * Pouvoir.h
 *
 *  Created on: 31 janv. 2023
 *      Author: Romain
 */

#ifndef POUVOIR_H_
#define POUVOIR_H_

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Pouvoir {
public:

	string nom;
    Element element;
    
	virtual ~Pouvoir();

	void utiliser(Espece);
};

#endif /* POUVOIR_H_ */
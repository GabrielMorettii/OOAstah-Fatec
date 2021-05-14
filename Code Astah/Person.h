#ifndef PERSON_H
#define PERSON_H

#include <string>
#include <vector>
#include <list>
#include <iostream>
#include <assert.h>

#include "String.h"
#include "Adress.h"
#include "Product.h"
#include "Control System.h"

class Person
{
private:
	int idPerson;

	String namePerson;

	Adress adress;
	Adress adress;
	Adress adress;
	Adress adress;
	Adress adress[];
	Product product;
	Control System control System;

protected:
	int phonePerson;


protected:
	void delete();

public:
	void insert();

	void create();

	void read();

	void update();

};
#endif

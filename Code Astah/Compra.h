#ifndef COMPRA_H
#define COMPRA_H

#include <string>
#include <vector>
#include <list>
#include <iostream>
#include <assert.h>

#include "Date.h"
#include "time.h"
#include "Product.h"
#include "Person.h"
#include "idItemCompra.h"
#include "Control System.h"

class Compra
{
private:
	int idPerson;

	int idCompra;

	double total;

	Date data;

	time hora;

	Product product;
	Person person;
	idItemCompra idItemCompra[];
	Control System control System;

protected:
	void delete();

public:
	void insert();

	void create();

	void read();

	void update();

};
#endif

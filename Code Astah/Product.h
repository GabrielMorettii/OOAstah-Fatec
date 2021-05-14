#ifndef PRODUCT_H
#define PRODUCT_H

#include <string>
#include <vector>
#include <list>
#include <iostream>
#include <assert.h>

#include "String.h"
#include "Person.h"

class Product
{
private:
	int idProduct;

	String name;

	Person person;

protected:
	void delete();

public:
	void insert();

	void create();

	void read();

	void update();

};
#endif

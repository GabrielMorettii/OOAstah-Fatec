#ifndef JURÍDICA_H
#define JURÍDICA_H

#include <string>
#include <vector>
#include <list>
#include <iostream>
#include <assert.h>

#include "Person.h"
#include "String.h"

class Jurídica : public Person
{
private:
	int cnpj;

	int insEstadual;

	String razaoSocial;


public:
	boolean checkCpf(int cpnj);

};
#endif

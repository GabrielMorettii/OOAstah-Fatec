#ifndef FÍSICA_H
#define FÍSICA_H

#include <string>
#include <vector>
#include <list>
#include <iostream>
#include <assert.h>

#include "Person.h"
#include "String.h"
#include "Date.h"

class Física : public Person
{
private:
	String rg;

	int cpf;

	Date birth;


public:
	int calcAge(int birth);

	boolean checkCpf(int cpf);

};
#endif

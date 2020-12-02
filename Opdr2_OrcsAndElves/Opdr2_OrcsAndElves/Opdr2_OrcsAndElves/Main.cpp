#include <iostream>
#include <string> 
#include "Orc.h"
#include "Elf.h"

Orc orc;
Elf elf;

int main()
{
	// Render elves
	elf.render("Soulja Boy", 2);
	elf.render("Mikkeltje", 3);
	elf.render("Wolter Kroes", 1);
	// Render orcs
	orc.render("Spientje", 3);
	orc.render("Kaas", 1);
	orc.render("Brinta", 2);
}

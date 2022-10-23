// Scrabble.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.

#include "PalabrasComprobar.h"

int main()
{

	PalabrasComprobar palabras;
	std::vector<std::string> ps= palabras.GetPalabras();
	
	for (int i = 0; i < ps.size(); i++) {
		std::cout << ps[i] << "\n";
	}

	if (palabras.ExistePalabra("rosa"))
		std::cout << "\nEncontrado";

}

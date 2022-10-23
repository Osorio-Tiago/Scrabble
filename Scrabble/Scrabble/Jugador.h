#pragma once
#include "Palabras.h"
#include <vector>
class Jugador
{
private:
	Palabras palabras; //Palabras que ha formado el jugador mientras juega
	std::vector<Ficha*> fichas; // Serán 6 fichas por jugados
	unsigned int score = 0;
public:

	Jugador() = default;
	void insertarPalabra(Palabra*);
	Palabras getPalabras();
	void insertarFicha(Ficha*);
	Ficha* getFichaPos(int);
	void calcularScore();
	int getScore();
};
#pragma once
#include <ostream>
#include <stdexcept>
using namespace std;

template <typename T>
class Serializadora
{

protected:
	Serializadora() {};

public:
	Serializadora(Serializadora const&) = delete; 
	Serializadora& operator = (Serializadora const&) = delete;

	static T& obtenerInstancia() {
		static T Serializadora;
		return Serializadora;
	}

};


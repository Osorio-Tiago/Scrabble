#pragma once

using namespace std;

template <typename T>
class Serializadora
{

protected:
	Serializadora() {};

public:
	Serializadora(Serealizadora const&) = delete; 
	Serealizadora& operator = (Serealizadora const&) = delete;

	static T& obtenerInstancia() {
		static T Serializadora;
		return Serealizadora;
	}

};


#include "Palabras.h"

Palabras::Palabras() = default;

void Palabra::insertarPalabra(Palabra* palabra){
this.arrayPalabras.push_back(palabra);
}
void Palabra::eliminarPalabra(Palabra* palabra){
    this.arrayPalabras.delete(palabra);
}
Palabra* Palabra::getPalabra(int pos){
    if(this.arrayPalabras.size() > pos)
        return this.arrayPalabras.at(pos);
    return nullptr;
}
char Palabra::getPrimeraLetra(int pos){
    if(this.arrayPalabras.size() > pos)
        return this.arrayPalabras.at(pos).getLetraInicio();
    return nullptr;
}
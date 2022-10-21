#include <ostream>
#include <stdexcept>
#include "Serializadora.h"


class PalabraComprobar final: public Serializadora<PalabraComprobar>
{

private:
	string palabra; 
public:
	PalabraComprobar();
	virtual ~PalabraComprobar();




};


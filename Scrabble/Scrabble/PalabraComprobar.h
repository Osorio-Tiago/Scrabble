
#include "Serializadora.h"


class PalabraComprobar final: public Serializadora<PalabraComprobar>
{

private:
	string palabra; 
public:
	PalabraComprobar();
	virtual ~PalabraComprobar();

	void setPalabra(string);
	string getpalabra();
	void deserealizar();
};


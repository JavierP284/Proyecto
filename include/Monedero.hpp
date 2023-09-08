#include <string>

class Monedero
{
private:
    int Dinero;
    int Precio;

public:
    ~Monedero() {}
    void comprar(int Precio)
    {
        this->Dinero -= Precio;
    }
    void vender(int Precio)
    {
        this->Dinero += Precio;
    }
};

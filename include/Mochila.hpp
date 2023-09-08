#include <string>

class Mochila
{
private:
    int CantidadObjeto;

public:
    ~Mochila() {}
    void agregar()
    {
        this->CantidadObjeto += 1;
    }
    void eliminar()
    {
        this->CantidadObjeto -= 1;
    }
};
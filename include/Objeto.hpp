#include <string>

class Objeto
{
private:
    int Cantidad;

public:
    ~Objeto() {}
    void Usar()
    {
        this->Cantidad -= 1;
    }
};
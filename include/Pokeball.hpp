#include <string>

class Pokeball
{
private:
    int cantidad;

public:
    ~Pokeball() {}
    void Lanzar()
    {
        this->cantidad -= 1;
    }
};
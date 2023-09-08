#include <string>

class Pokedex
{
private:
    int pokemon;
    std::string NombrePokemon;

public:
    ~Pokedex() {}
    void Registrar(std::string NombrePokemon)
    {
        this->NombrePokemon = NombrePokemon;
    }
};
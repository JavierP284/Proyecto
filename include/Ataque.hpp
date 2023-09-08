#include <string>

class Ataque
{
private:
    int Daño;
    int vida;

        public : 
    ~Ataque(){}
    void Atacar(int daño)
    {
        this->vida -= daño;
    }
};
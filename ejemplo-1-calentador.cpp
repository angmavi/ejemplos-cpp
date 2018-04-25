#include <iostream>

class Calentador
{
  private: 
        int temperatura;
        int incremento;
  
  public:
        Calentador();
        void calentar();
        void enfriar();
        void imprimeTemperatura();
        int accedeTemperatura() const; //se le agrega a los met. de acceso, significa que no modifica las variables.
};// punto y coma obligatorio

Calentador::Calentador()
{
    temperatura=15;
    incremento=3;
}

int Calentador::accedeTemperatura() const
{
    return temperatura;
}

void Calentador::calentar()
{
    temperatura+=5;
}

void Calentador::enfriar()
{
    temperatura-=5;
}

void Calentador::imprimeTemperatura()
{
    std::cout << "La temperatura es: "<< temperatura << std::endl;
}

int main()
{
    Calentador c1;
    Calentador c2;
    c1.calentar();
    c2.enfriar();
    c1.imprimeTemperatura();
    c2.imprimeTemperatura();
}
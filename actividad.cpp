#include <iostream>
using namespace std;

class Figura{
private:
    int b, h;
    float p;

public:
    Figura();
    Figura(int b, int h);
    void setPerimetro(float a);
    float getPerimetro();
};

class Cuadrado: public Figura{
public:
    Cuadrado(int l):Figura(l,l){
        setPerimetro(4*l);
    }
};
class Rectangulo: public Figura{
public:
    Rectangulo(int b, int h):Figura(b,h){
        setPerimetro(2*b+2*h);
    }
};
class Circulo: public Figura{
public:
    Circulo(int r):Figura(){
        setPerimetro(r*6.2832);
    }
};
/*
    Implementa los constructores y funciones de la clase Figura.
    La función setPerimetro UNICAMENTE recibe el perímetro y lo asigna, NO lo calcula.
    :D
*/

/*
    Implementa la clase Cuadrado que hereda de Figura.
    Crear constructor de Cuadrado que herede del constructor de Figura.
    Calcular y asignar el perímetro del cuadrado.
    :D
*/

/*
    Implementa la clase Rectángulo que hereda de Figura.
    Crear constructor de Rectángulo que herede del constructor de Figura.
    Calcular y asignar el perímetro del Rectángulo.
    :D
*/

/*
    Implementa la clase Círculo que hereda de Figura.
    Crear constructor de Círculo que herede del constructor de Figura.
    Calcular y asignar el perímetro del Círculo.
    :D
*/

int main () {

    Cuadrado s(5);
    cout << s.getPerimetro() << endl; // 20
    Rectangulo r(5,10);
    cout << r.getPerimetro() << endl; // 30
    Circulo t(5);
    cout << t.getPerimetro() << endl; // ~31.41592
    return 0;
}

Figura::Figura(){
    this->b=0;
    this->h=0;
    this->p=0;
}
Figura::Figura(int b, int h)
{
    this->b=b;
    this->h=h;
}
void Figura::setPerimetro(float a)
{
    this->p=a;
}
float Figura::getPerimetro()
{
    return p;
}

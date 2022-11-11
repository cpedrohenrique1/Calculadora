#ifndef CALCULADORA_H_
#define CALCULADORA_H_

class Calculadora{
    private:
        double a, b;
    public:
        void setA(double);
        void setB(double);
        double getA();
        double getB();
        double soma();
        double subtracao();
        double multiplicacao();
        double divisao();
};

void Calculadora::setA(double entrada){
    this->a = entrada;
}

void Calculadora::setB(double entrada){
    this->b = entrada;
}

double Calculadora::getA(){
    return this->a;
}

double Calculadora::getB(){
    return this->b;
}

double Calculadora::soma(){
    return (a+b);
}

double Calculadora::subtracao(){
    return (a-b);
}

double Calculadora::multiplicacao(){
    return (a*b);
}

double Calculadora::divisao(){
    return (a/b);
}

#endif
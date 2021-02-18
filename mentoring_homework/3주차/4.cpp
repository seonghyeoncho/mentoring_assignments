#include <iostream>
using namespace std;

class Calculator {
    private: 
        int countPl;
        int countMi;
        int countMu;
        int countDi;
    public:
        double Addition (double, double);
        double Subtraction(double, double);
        double Multiplication(double, double);
        double Division(double, double);
        void ShowCount();
        void Init();
};
void Calculator::ShowCount() {
    cout << "덧셈:"<< countPl <<" 뺄셈:"<< countMi<<" 곱셈:"<< countMu <<" 나눗셈:"<< countDi <<'\n';   
};
void Calculator::Init() {
    countPl = 0;
    countMi = 0;
    countMu = 0;
    countDi = 0;
};
double Calculator::Addition(double a, double b) {
    countPl++;
    return a + b;
};
double Calculator::Subtraction(double a, double b) {
    countMi++;
    return a - b;
};
double Calculator::Multiplication(double a, double b) {
    countMu++;
    return a * b;
};
double Calculator::Division(double a, double b) {
    countDi++;
    return a / b;
};

int main() {
    Calculator casio_FX_9860_G2_SD;
    casio_FX_9860_G2_SD.Init();
    cout <<"3.2"<<" + "<<"2.4"<<" = "<< casio_FX_9860_G2_SD.Addition(3.2,2.4) <<'\n';
    cout <<"3.5"<<" / "<<"1.7"<<" = "<< casio_FX_9860_G2_SD.Division(3.5,1.7) <<'\n';
    cout <<"2.2"<<" - "<<"1.5"<<" = "<< casio_FX_9860_G2_SD.Subtraction(2.2,1.5) <<'\n';
    cout <<"4.9"<<" / "<<"1.2"<<" = "<< casio_FX_9860_G2_SD.Division(4.9,1.2) <<'\n';
    casio_FX_9860_G2_SD.ShowCount();

    return 0;
}
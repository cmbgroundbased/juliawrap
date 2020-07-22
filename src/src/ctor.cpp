#include <myLib.hpp>
#include <iostream>

myLib::osservazione::osservazione(){

	std::cout << "Costruita la Classe Osservazione" << std::endl;

}

void myLib::osservazione::sum(double a, double b){

    std::cout << "SUM: " << a + b << std::endl;

}

void myLib::osservazione::diff(double a, double b){

    std::cout << "DIF: " << a - b << std::endl;
}

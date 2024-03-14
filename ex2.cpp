#include <iostream>
#include <string>

int main(int argc, char *argv[]){
    int num = std::stoi(argv[1]);
    int ant1 = 0, ant2 = 1, soma = 0;
    bool pertence;

    while(soma <= num){
        soma = ant1 + ant2;
        ant1 = ant2;
        ant2 = soma;
        if(soma == num){
            pertence = true;
            break;
        }
    }

    if(pertence){
        std::cout << "Pertence a sequencia de Fibonacci" << std::endl;
    } else {
        std::cout << "Nao pertence a sequencia de Fibonacci" << std::endl;
    }
}
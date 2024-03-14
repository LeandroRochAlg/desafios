#include <iostream>

int main(){
    int INDICE = 13, SOMA = 0, K = 0;

    while(K < INDICE){
        K++;
        SOMA += K;
    }

    std::cout << "Soma: " << SOMA << std::endl;
}
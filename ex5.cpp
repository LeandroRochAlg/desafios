#include <iostream>
#include <string>

int main(int argc, char *argv[]){
    if(argc < 2){
        std::cout << "Falta de info" << std::endl;
        return 1;
    }

    std::string string = argv[1];

    if(argc > 2) {
        for (int i = 2; i < argc; ++i) {
            string += ' ';
            string += argv[i];
        }
    }

    int tam = string.length();
    std::string inversa = "";

    for(int i = tam - 1; i >= 0; i--){
        inversa += string[i];
    }

    std::cout << "Inversa: " << inversa << std::endl;
}
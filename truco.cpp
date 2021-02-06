#include <iostream>
#include "mazo.h"
#include "mano.h"

int main() {
    Mazo m;
    std::cout << "el mazo tiene " << m.size() << " cartas\n";
    {
        Mano mano(m);
        std::cout << "el mazo tiene " << m.size() << " cartas\n";
        {
            Mano mano2(m);
            std::cout << "el mazo tiene " << m.size() << " cartas\n";
        }
        std::cout << "el mazo tiene " << m.size() << " cartas\n";
    }
    std::cout << "el mazo tiene " << m.size() << " cartas\n";
}

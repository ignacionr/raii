#pragma once
#include "carta.h"
#include <list>
#include <memory>
#include <algorithm>

class Mazo: public std::list<std::shared_ptr<Carta>> {
public:
    Mazo() {
        Carta final(12, Palo::treboles);
        ++final;
        for (Carta c{}; c != final; ++c) {
            push_back(std::make_shared<Carta>(c));
        }
    }
};

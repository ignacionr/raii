#pragma once
#include "mazo.h"

class Mano {
    std::shared_ptr<Carta> carta1_, carta2_;
    Mazo &mazo_;
public:
    Mano(Mazo &mazo): mazo_{mazo}
    {
        carta1_ = mazo.front();
        mazo.pop_front();
        carta2_ = mazo.front();
        mazo.pop_front();
    }
    ~Mano() {
        mazo_.push_back(carta1_);
        mazo_.push_back(carta2_);
    }
};

#pragma once

constexpr const char *todos_los_numeros {"A23456789TJQK"};
constexpr const int total_numeros {13};

enum Palo {
    espadas,
    diamantes,
    corazones,
    treboles
};

class Carta {
    char numero_;
    Palo palo_;
public:
    Carta(): numero_{0}, palo_{Palo::espadas} { ; }
    Carta(char numero, Palo palo): numero_{numero}, palo_{palo} {}

    Carta &operator++() {
        ++numero_;
        if (numero_ >= total_numeros) {
            numero_ = 0;
            palo_ = static_cast<Palo>(static_cast<int>(palo_)+1);
        }
        return *this;
    }
    bool operator==(Carta const &otra) const {
        return otra.numero_ == numero_ && otra.palo_ == palo_;
    }
    bool operator!=(Carta const &otra) const {
        return !(otra == *this);
    }
};

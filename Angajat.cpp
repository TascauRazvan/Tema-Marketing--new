//
// Created by Tascau Razvan on 21.11.2022.
//

#include "Angajat.h"

Angajat::Angajat(int salariu, const std::string &nume) : salariu(salariu), nume(nume) {}

bool Angajat::operator==(const Angajat &rhs) const {
    return salariu == rhs.salariu &&
           nume == rhs.nume;
}

bool Angajat::operator!=(const Angajat &rhs) const {
    return !(rhs == *this);
}

std::ostream &operator<<(std::ostream &os, const Angajat &angajat) {
    os << "salariu: " << angajat.salariu << " nume: " << angajat.nume;
    return os;
}

Angajat::~Angajat() {

}

void Angajat::schimbareSalariu(int salariu) {
    Angajat::salariu = salariu;
}

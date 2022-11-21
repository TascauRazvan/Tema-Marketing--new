//
// Created by Tascau Razvan on 31.10.2022.
//

#include "Angajati.h"

Angajat::Angajat(int salariu, char nume) : salariu(salariu), nume(nume) {}

Angajat::Angajat(const std::string &NUME, int SALARIU) : nume{NUME}, salariu{SALARIU}
{
    std::cout << "Constructor de initializare Angajat";
}

Angajat::Angajat(const Angajat &other) : nume{other.nume}, salariu{other.salariu}
{
    std::cout << "Constructor de copiere Angajat";
}

Angajat &Angajat::operator=(Angajat &other) {
    salariu = other.salariu;
    std::cout << "operator = copiere Angajat";
    return *this;
}

void Angajat::get_Salariu(int SALARIU) {
    salariu = SALARIU;
}

int Angajat::set_salariu() {
    return salariu;
}

std::ostream &operator<<(std::ostream &os, Angajat &salariu1) {
    os<<"Salariu: " << salariu1.salariu;
    return os;
}


//
// Created by Tascau Razvan on 21.11.2022.
//

#ifndef MARKETING_ANGAJAT_H
#define MARKETING_ANGAJAT_H
#include<ostream>

class Angajat {
 int salariu;
 std::string nume;
public:

    virtual ~Angajat();

    friend std::ostream &operator<<(std::ostream &os, const Angajat &angajat);

    bool operator==(const Angajat &rhs) const;

    bool operator!=(const Angajat &rhs) const;

    Angajat(int salariu, const std::string &nume);

    void schimbareSalariu(int salariu);
};


#endif //MARKETING_ANGAJAT_H

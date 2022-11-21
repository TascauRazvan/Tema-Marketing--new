//
// Created by Tascau Razvan on 31.10.2022.
//

#ifndef MARKETING_ANGAJATI_H
#define MARKETING_ANGAJATI_H
#include <string>
#include <iostream>

class Angajat {
public:
    explicit Angajat(int salariu, char nume);
    Angajat(const std::string& NUME, int SALARIU);
    Angajat(const Angajat& other);
    Angajat& operator=(Angajat& other);
    void get_Salariu( int SALARIU);
    int set_salariu();
    friend std::ostream& operator <<(std::ostream& os, Angajat& salariu1);



private:
int salariu;
char nume;



};


#endif //MARKETING_ANGAJATI_H

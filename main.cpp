#include <iostream>
#include "pachet_ads.h"
#include <vector>
#include "Angajat.h"

int main() {
Angajat nou(1000,"Mario");
nou.schimbareSalariu(30000);
std::cout<<nou;

    return 0;
}

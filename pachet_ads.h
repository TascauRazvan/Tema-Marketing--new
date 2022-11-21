//
// Created by Tascau Razvan on 30.10.2022.
//

#ifndef MARKETING_PACHET_ADS_H
#define MARKETING_PACHET_ADS_H
#include <iostream>

class pachet_ads {
public:
   pachet_ads( int PRICE);
   pachet_ads( pachet_ads& other);
   pachet_ads& operator=(pachet_ads& other);
   void get_Price( int PRICE );
   int set_Price ();
   friend std::ostream& operator<<(std::ostream& os, pachet_ads& pa1);


private:

    int Price;




};


#endif //MARKETING_PACHET_ADS_H

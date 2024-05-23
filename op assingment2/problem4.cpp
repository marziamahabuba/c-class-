#include<bits/stdc++.h>
using namespace std;

class Car{
public:
    string model;
    string make;
    int rentalFee;

    Car(string m, string k){
     model= m;
     make =k;
       rentalFee = 0;
     cout << "Car 1: created with no rental fee "<< endl;

    }
    Car (string m, string k,int cr){
    model= m;
     make =k;
     rentalFee=cr;

     cout << "Car 2: created with rental fee"<< rentalFee<< "Rental Fee"<< rentalFee<< endl;
    }
};
 int main() {
   Car c1("Sedan", "Toyota");
    Car c2("SUV", "Ford", 50);


    c1.rentalFee = 50;

    return 0;
}

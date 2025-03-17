#include <iostream>

using namespace std;

struct Car 
{
    string brand;
    string color;           // <<-- ETO YUNG MGA MEMBERS NG STRUCT
    int year;
    double max_speed;
};

// ---------------------------------------------------------------------------------------------------------------------

void display(Car c)
{
    cout
    << "Brand: " << c.brand << "\n"
    << "Color: " << c.color << "\n"         // <<-- ETO YUNG FUNCTION PARA LANG SA DISPLAY NG STRUCT
    << "Year: " << c.year << "\n"
    << "Max Speed: " << c.max_speed;
}

// ---------------------------------------------------------------------------------------------------------------------

int main()
{
    Car c1;
    Car c2;
    
    c1.brand = "Toyota";
    c1.color = "Black";                 // <<-- ETO NAMAN MAIN FUNCTION PARA SA PAG-SET NG VALUES NG STRUCT
    c1.year = 1992;
    c1.max_speed = 101.22;
    
    display(c1);
    
    
    return 0;
    
}
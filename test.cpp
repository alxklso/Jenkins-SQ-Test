#include <iostream>
#include <string>
/*
Program that converts celsius to farenheit or farenheit to celsius, 
as defined by the user.

The user will first input the temperature, and then enter "c" to indicate 
the input is in celsius, or "f" to indicate the input is farenheit.
*/

float toC(float temp) {
    return (temp-32)*0.5556;
}

float toF(float temp) {
    return (temp/0.5556)+32;
}

int main() {
    // declare temp and units variables
    float temp;
    char units;

    // ask for user input and store them in above variables
    std::cout << "Enter temperature: ";
    std::cin >> temp;
    std::cout << "Is this in Celsius (c), or Farenheit (f)? ";
    std::cin >> units;

    switch (units) {
        case 'c':
            float tempInF;
            tempInF = toF(temp);
            std::cout << temp << " C = " << tempInF << " F\n";
            break;
        case 'f':
            float tempInC;
            tempInC = toC(temp);
            std::cout << temp << " F = " << tempInC << " C\n";
            break;
    }
    return 0;   
}
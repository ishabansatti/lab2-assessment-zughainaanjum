#include <iostream>
using namespace std;

int getIntValue() {
    int var_int = 10;
    return var_int;
}

float getFloatValue() {
    float var_float = 10.75f;
    return var_float;
}

char getCharValue() {
    char var_char = 'A';
    return var_char;
}

int convertFloatToInt(float value) {

    return static_cast<int>(value);
}
float convertFahrenheitToCelsius(float fahrenheit) {
    
    float celsius = (fahrenheit - 32) * 5 / 9;
    
    return celsius;
}

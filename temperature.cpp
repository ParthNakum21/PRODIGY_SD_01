#include<bits/stdc++.h>
using namespace std;

double CelsiusToKelvin(double temp){
    return temp + 273.15;
}
double KelvinToCelsius(double temp){
    return temp - 273.15;
}
double CelsiusToFahrenheit(double temp){
    return (1.8*temp) + 32;
}
double FahrenheitToCelsius(double temp){
    return (temp-32)/1.8;
}
double FahrenheitToKelvin(double temp){
    return ((temp-32)/1.8) + 273.15;
}
double KelvinToFahrenheit(double temp){
    return ((temp-273.15)*1.8) + 32;
}

int main(){
    double temperature;
    cout << "Enter Temperature: ";
    cin >> temperature;

    char unit;
    cout << "Enter unit: (c for celsius, k for kelvin, f for fahrenheit)";
    cin >> unit;

    char toUnit;
    cout << "Convert to.. (c for celsius, k for kelvin, f for fahrenheit)";
    cin >> toUnit;

    if(unit == 'c' && toUnit == 'k'){
        cout << CelsiusToKelvin(temperature) << " K";
    }
    else if(unit == 'k' && toUnit == 'c'){
        cout << KelvinToCelsius(temperature) << " C";
    }
    else if(unit == 'c' && toUnit == 'f'){
        cout << CelsiusToFahrenheit(temperature) << " F";
    }
    else if(unit == 'f' && toUnit == 'c'){
        cout << FahrenheitToCelsius(temperature) << " C";
    }
    else if(unit == 'f' && toUnit == 'k'){
        cout << FahrenheitToKelvin(temperature) << " K";
    }
    else if(unit == 'k' && toUnit == 'f'){
        cout << KelvinToFahrenheit(temperature) << " F";
    }
    else {
        cout << "Please enter valid value";
    }
}
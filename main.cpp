#include <iostream>
#include <string>

using namespace std;

class Weather {
private:
    string name;
    string collegeName;
    string location;
    string weatherType;
    string temperature;
    string rainPossibility;
    string humidity;

public:
    Weather(string n, string c) {
        name = n;
        collegeName = c;
    }

    void setLocation(string loc) {
        location = loc;
    }

    void setWeatherType(string type) {
        weatherType = type;
    }

    void setTemperature(string temp) {
        temperature = temp;
    }

    void setRainPossibility(string rain) {
        rainPossibility = rain;
    }

    void setHumidity(string hum) {
        humidity = hum;
    }

    void displayWeather() {
        cout << "Weather Report for " << location << endl;
        cout << "Name: " << name << endl;
        cout << "College: " << collegeName << endl;
        cout << "Weather Type: " << weatherType << endl;
        cout << "Temperature: " << temperature << endl;
        cout << "Rain Possibility: " << rainPossibility << endl;
        cout << "Humidity: " << humidity << endl;
    }
};

int main() {
    string name, collegeName, location, weatherType, temperature, rainPossibility, humidity;

    cout << "Enter your name: ";
    getline(cin, name);

    cout << "Enter your college name: ";
    getline(cin, collegeName);

    Weather weatherApp(name, collegeName);

    cout << "\n--- Enter Today's Weather Details ---" << endl;
    cout << "Enter location: ";
    getline(cin, location);
    weatherApp.setLocation(location);

    cout << "Enter weather type: ";
    getline(cin, weatherType);
    weatherApp.setWeatherType(weatherType);

    cout << "Enter temperature: ";
    getline(cin, temperature);
    weatherApp.setTemperature(temperature);

    cout << "Enter rain possibility: ";
    getline(cin, rainPossibility);
    weatherApp.setRainPossibility(rainPossibility);

    cout << "Enter humidity: ";
    getline(cin, humidity);
    weatherApp.setHumidity(humidity);

    cout << "\n--- Weather Report ---" << endl;
    weatherApp.displayWeather();

    return 0;
}
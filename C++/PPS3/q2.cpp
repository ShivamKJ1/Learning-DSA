#include <iostream>

using namespace std;

class DB; // Forward declaration

class DM {
private:
    int meter;
    float centimeter;

public:
    DM() {
        meter = 0;
        centimeter = 0.0;
    }

    DM(int m, float cm) {
        meter = m;
        centimeter = cm;
    }

    friend DM add(DM d, DB b); // Friend function declaration

    void display() {
        cout << "The summed value in meter is: " << meter << " meters and " << centimeter << " centimeters" << endl;
    }
};

class DB {
private:
    int feet;
    float inches;

public:
    DB() {
        feet = 0;
        inches = 0.0;
    }

    DB(int f, float in) {
        feet = f;
        inches = in;
    }

    friend DM add(DM d, DB b); // Friend function declaration
};

// Friend function definition
DM add(DM d, DB b) {
    float totalInCm = (d.meter * 100 + d.centimeter) + ((b.feet * 30) + (b.inches) * 2.54); // Convert feet and inches to centimeters
    int newMeter = totalInCm / 100;
    float newCentimeter = totalInCm - (newMeter * 100);
    return DM(newMeter, newCentimeter);
}

int main() {
    int m, f;
    float cm, in;

    cout << "Enter the value in meter and centimeter:" << endl;
    cout << "Enter meter value: ";
    cin >> m;
    cout << "Enter centimeter value: ";
    cin >> cm;

    cout << "Enter the value in feet and inches:" << endl;
    cout << "Enter feet value: ";
    cin >> f;
    cout << "Enter inches value: ";
    cin >> in;

    DM dm(m, cm);
    DB db(f, in);

    DM result = add(dm, db);

    result.display();

    return 0;
}

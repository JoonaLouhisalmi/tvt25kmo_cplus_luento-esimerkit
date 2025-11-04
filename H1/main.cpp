#include <iomanip>
#include <iostream>
#include <stdexcept>
using namespace std;

void calcSum(int a, int b) { cout << "Summa: " << a + b << endl; }

void calcDiv(int a, int b) {
    if (b == 0)
        cout << "Virhe: nollalla ei voi jakaa." << endl;
    else
        cout << fixed << setprecision(2) << "Osamäärä: " << (double)a / b << endl;
}

int retSum(int a, int b) { return a + b; }

float retDiv(int a, int b) {
    if (b == 0)
        throw runtime_error("jakaja ei saa olla nolla.");
    return (float)a / b;
}

int main() {
    int a, b;
    float result;

    cout << "Anna kaksi kokonaislukua: ";
    cin >> a >> b;

    calcSum(a, b);
    calcDiv(a, b);

    cout << "Summa (retSum): " << retSum(a, b) << endl;

    try {
        result = retDiv(a, b);
        cout << a << " / " << b << " = " << fixed << setprecision(2) << result
             << endl;
    } catch (runtime_error &e) {
        cout << "Error: " << e.what() << endl;
    }

    return 0;
}

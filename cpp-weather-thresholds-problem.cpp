#include <iostream>
using namespace std;

int main() {
    float d, s;
    cin >> d >> s;
    if (s >= (2 * d) / 3.0)
        cout << "sunny day" << endl;
    else if (s <= (1 * d) / 3)
        cout << "rainy day" << endl;
    else
        cout << "cloudy day" << endl;

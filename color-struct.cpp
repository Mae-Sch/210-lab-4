#include <vector>
#include <iostream>

using namespace std;

struct Color {
    int red;
    int green;
    int blue;
};

int main() {
    Color newColor;
    cout << "red value is:";
    cin >> newColor.red;
    cout << "geen value is:";
    cin >> newColor.green;
    cout << "blue value is:";
    cin >> newColor.blue;

    cout << "color has the following values:\n";
    cout << "Red: " << newColor.red;
    cout << "\nGreen: " << newColor.green;
    cout << "\nBlue: " << newColor.blue << endl;
}


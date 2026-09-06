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

    vector<Color> colorsVector = {newColor};

    cout << "color has the following values:\n";
    cout << "Red: " << colorsVector.at(0).red;
    cout << "\nGreen: " << colorsVector.at(0).green;
    cout << "\nBlue: " << colorsVector.at(0).blue << endl;


}


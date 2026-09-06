#include <vector>
#include <iostream>

using namespace std;

struct Color {
    int red;
    int green;
    int blue;
};

int main() {

    vector<Color> colorsVector;

    // random number between 25 and 50, which determines how many colors will be in the vector
    int n = (rand()%26) + 25;

    // populates the vector with n amount of random colors
    for (int i = 0; i < n; ++i) {
        Color newColor;
        newColor.red = (rand()%256);
        newColor.green = (rand()%256);
        newColor.blue = (rand()%256);
        colorsVector.push_back(newColor);
    }

    // outputs all n elements of the vector
    for (int i = 0; i < n; ++i) {
        cout << "Red: " << colorsVector.at(i).red << endl;
        cout << "Blue: " << colorsVector.at(i).blue << endl;
        cout << "Green: " << colorsVector.at(i).green << endl;
        cout << endl;
    }
}


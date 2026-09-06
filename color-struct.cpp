#include <vector>
#include <iostream>
#include <iomanip>

using namespace std;

struct Color {
    int red;
    int green;
    int blue;
};

int main() {

    // sets seed to current time, ensuring different outpus for each run
    srand(time(0));

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

    // sets up labels for display table
    cout << setw(10) << "Color#"
            << setw(10) << "R value"
            << setw(10) << "G value"
            << setw(10) << "B value"
            << endl;
    cout << setw(10) << "------"
            << setw(10) << "-------"
            << setw(10) << "-------"
            << setw(10) << "-------"
            << endl;

    // outputs all n elements of the vector
    for (int i = 0; i < n; ++i) {
        cout << setw(8) << i
            << setw(10) << colorsVector.at(i).red
            << setw(10) << colorsVector.at(i).green
            << setw(10) << colorsVector.at(i).blue
            << endl;
    }
}


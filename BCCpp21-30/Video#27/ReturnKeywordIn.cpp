
#include <iostream>

double square(double length);
double cube(double length);

int main() {

    // MARK: - Key Notes
        // Return = return a value back to the spot
        //          where you called the encompassing function
    
    double length = 6.0;
    double area = square(length);
    double volume = cube(length);

    std::cout << "Area: " << area << "cm^2\n";
    std::cout << "Volume: " << volume << "cm^3\n";

    return 0;

}

double square(double length) {
    return length * length;
    //double result = length * length;
    //return result;
}

double cube(double length) {
    return length * length * length;

}
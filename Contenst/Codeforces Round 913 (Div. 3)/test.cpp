#include <iostream>
#include <string>

// Function to rotate the string to the right by 'shift' positions
std::string rotateRight(const std::string &str, int shift) {
    return str.substr(str.size() - shift) + str.substr(0, str.size() - shift);
}

// Function to rotate the string to the left by 'shift' positions
std::

int main() {
    std::string str = "abcdef";
    ;

    std::string rotatedRight = rotateRight(str, shift);
    std::cout << "Right Rotate: " << rotatedRight << std::endl; // Output: cdefab

    std::string rotatedLeft = rotateLeft(str, shift);
    std::cout << "Left Rotate: " << rotatedLeft << std::endl; // Output: cdefab

    return  0;
}

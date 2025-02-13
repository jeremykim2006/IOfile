#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

int main() {
    std::ifstream file("data.csv"); // Open the file
    std::string line;

    while (std::getline(file, line)) { // Read each line
        std::stringstream ss(line);
        int num1, num2;
        char comma;
        std::string text;

        ss >> num1 >> comma >> num2 >> comma; // Read numbers and commas
        std::getline(ss, text); // Read the rest of the line as text

        // Print the text (num1 + num2) times
        for (int i = 0; i < num1 + num2; ++i) {
            std::cout << text << " ";
        }
        std::cout << std::endl;
    }

    file.close(); // Close the file
    return 0;
}

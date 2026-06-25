#include <iostream>
#include <map>
#include <string>

int main()
{
    // Create a dictionary
    std::map<std::string, std::string> dictionary;

    // Add key-value pairs
    dictionary["apple"] = "a Fruit";
    dictionary["car"] = "a vehicle";
    dictionary["computer"] = "an electronic device";

    // Access a value using a key
    std::cout << "Apple is " << dictionary["apple"] << std::endl;
}
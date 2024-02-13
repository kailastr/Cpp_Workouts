#include <iostream>
#include <unordered_map>

int main()
{
    std::unordered_map<std::string, std::string> UMap;

    UMap["Name"] = "Kailas T R";
    UMap["Age"] = "23";
    UMap["Phone"] = "459786487";

    std::cout << "Welcome " << UMap["Name"] << ", you are currently " << UMap["Age"] << " years old " << std::endl;

    return 0;
}
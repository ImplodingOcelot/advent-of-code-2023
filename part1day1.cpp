#include <iostream>
#include <regex>
#include <string>
#include <vector>
int main()
{
    int catgirl = 1000;
    std::vector<std::string> wow = {};
    for (int f = 0; f < catgirl; f++)
    {

        std::string input;
        std::string output;
        std::getline(std::cin, input);
        std::regex e("[0-9]+");
        std::vector<std::string> wow2 = {"ad", "asd", "ads"};
        for (int i = 0; i <= input.length(); i++)
        {
            //  std::cout << "CHECKING " + input.substr(i, 1) + "\n";
            if (regex_match(input.substr(i, 1), e))
            {
                std::cout << "found first: " << input.substr(i, 1) << "\n";
                output.append(input.substr(i, 1));
                break;
            }
        }
        for (int i = input.length(); i >= 0; i--)
        {
            //  std::cout << "CHECKING " + input.substr(i, 1) + "\n";
            if (regex_match(input.substr(i, 1), e))
            {
                std::cout << "found last: " << input.substr(i, 1) << "\n";
                output.append(input.substr(i, 1));
                break;
            }
        }
        std::cout << output << ".\n";
        wow.resize(wow.size() + 1);
        wow[f] = output;
    }
    int result = 0;
    for (int i = 0; i < wow.size(); i++)
    {
        std::cout << "ADDING " << wow[i] << " TO " << result << "\n";
        result += stoi(wow[i]);
        std::cout << "RESULT: " << result << "\n";
    }
    std::cout << result << " (FINAL).\n";
    std::cout << "VECTOR SIZE: " << wow.size() << "\n";
    return 0;
}
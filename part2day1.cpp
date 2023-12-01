#include <iostream>
#include <regex>
#include <string>
#include <vector>

int main()
{
    // int catgirl;
    // std::cin >> catgirl;
    // std::string fucko;
    // std::getline(std::cin, fucko);
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
            else if (input.substr(i, 3) == "one")
            {
                std::cout << "found first: one\n";
                output.append("1");
                break;
            }
            else if (input.substr(i, 3) == "two")
            {
                std::cout << "found first: two\n";
                output.append("2");
                break;
            }
            else if (input.substr(i, 5) == "three")
            {
                std::cout << "found first: three\n";
                output.append("3");
                break;
            }
            else if (input.substr(i, 4) == "four")
            {
                std::cout << "found first: four\n";
                output.append("4");
                break;
            }
            else if (input.substr(i, 4) == "five")
            {
                std::cout << "found first: five\n";
                output.append("5");
                break;
            }
            else if (input.substr(i, 3) == "six")
            {
                std::cout << "found first: six\n";
                output.append("6");
                break;
            }
            else if (input.substr(i, 5) == "seven")
            {
                std::cout << "found first: seven\n";
                output.append("7");
                break;
            }
            else if (input.substr(i, 5) == "eight")
            {
                std::cout << "found first: eight\n";
                output.append("8");
                break;
            }
            else if (input.substr(i, 4) == "nine")
            {
                std::cout << "found first: nine\n";
                output.append("9");
                break;
            }
            else if (input.substr(i, 4) == "zero")
            {
                std::cout << "found first: zero\n";
                output.append("0");
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
            else if (input.substr(i, 3) == "one")
            {
                std::cout << "found first: one\n";
                output.append("1");
                break;
            }
            else if (input.substr(i, 3) == "two")
            {
                std::cout << "found first: two\n";
                output.append("2");
                break;
            }
            else if (input.substr(i, 5) == "three")
            {
                std::cout << "found first: three\n";
                output.append("3");
                break;
            }
            else if (input.substr(i, 4) == "four")
            {
                std::cout << "found first: four\n";
                output.append("4");
                break;
            }
            else if (input.substr(i, 4) == "five")
            {
                std::cout << "found first: five\n";
                output.append("5");
                break;
            }
            else if (input.substr(i, 3) == "six")
            {
                std::cout << "found first: six\n";
                output.append("6");
                break;
            }
            else if (input.substr(i, 5) == "seven")
            {
                std::cout << "found first: seven\n";
                output.append("7");
                break;
            }
            else if (input.substr(i, 5) == "eight")
            {
                std::cout << "found first: eight\n";
                output.append("8");
                break;
            }
            else if (input.substr(i, 4) == "nine")
            {
                std::cout << "found first: nine\n";
                output.append("9");
                break;
            }
            else if (input.substr(i, 4) == "zero")
            {
                std::cout << "found first: zero\n";
                output.append("0");
                break;
            }
        }
        /*size_t inp1 = input.find_first_of("0123456789");
        size_t inp2 = input.find_last_of("0123456789");
        output = "";
        output += input.substr(inp1, 1);
        output += input.substr(inp2, 1);*/
        std::cout << output << ".\n";
        wow.resize(wow.size() + 1);
        wow[f] = output;
    }
    int result = 0;
    for (const auto &str : wow)
    {
        std::cout << "wow element: " << str << "\n";
    }
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
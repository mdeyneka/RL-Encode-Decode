#include <iostream>
#include <string>
#include <sstream>

std::string encode(std::string input)
{
    std::ostringstream result;
    std::string::iterator temp = input.begin();
    int count = 1;
    for(std::string::iterator it = std::next(input.begin()); it != input.end(); ++it)
    {
        if(*temp != *it)
        {
            result << count << *temp;
            temp = it;
            count = 1;
        } else {
            count++;
        }
    }
    result << count << *temp;
    return result.str();
}

std::string decode(std::string input)
{
    std::ostringstream temp, result;
    for(std::string::iterator it = input.begin(); it != input.end(); ++it)
    {
        if(!isdigit(*it))
        {
            result << std::string(std::stoi(temp.str()), (*it));
            temp.str("");
        } else {
            temp << (*it);
        }
    }
    return result.str();
}

int main()
{
    std::string line = "WWWWWWWWWWWWBWWWWWWWWWWWWBBBWWWWWWWWWWWWWWWWWWWWWWWWBWWWWWWWWWWWWWW";
    std::string encoded = encode(line);
    std::string decoded = decode(encoded);
    std::cout << "line:" << std::endl;
    std::cout << line << std::endl;
    std::cout << "encoded:" << std::endl;
    std::cout << encoded << std::endl;
    std::cout << "decoded:" << std::endl;
    std::cout << decoded << std::endl;
    return 0;
}


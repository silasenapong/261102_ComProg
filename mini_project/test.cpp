#include <iostream>
#include <fstream>
#include <string>

void func1()
{
    std::ofstream output; // ofstream = write
    output.open("test.txt", std::ios::app);
    output << "Hello\n";
    output << "World\n";
    output.close();
}

void func2()
{
    std::ofstream output("test.txt", std::ios::app);
    output << "Hello\n";
    output << "World\n";
    output.close();
}

void func3()
{
    std::string text;

    std::ifstream myinput; // ifstream = read
    myinput.open("test.txt");

    std::getline(myinput, text);

    std::cout << "Text is : " << text << std::endl;

    std::getline(myinput, text);

    std::cout << "Text is : " << text << std::endl;

    myinput.close();
}

void func4()
{
    std::string text;
    std::ifstream myinput("test.txt");

    while (std::getline(myinput, text)) // std::getline(myinput, text) = true if have line to read
    {
        std::cout << "Text is : " << text << std::endl;
    }

    myinput.close();
}

int main()
{

    func4();

    return 0;
}
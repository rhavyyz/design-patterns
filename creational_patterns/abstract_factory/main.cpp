/*
    Im following the example from the GOF book

    This example consists on UI components in a application that has compatibility with mac and 
    windows, and so it should look like a windows application while running on windows and vice 
    versa

*/
#include "MacFactory.h"
#include "WindwosFactory.h"

char toUpper(char c)
{
    if(c >= 'a' && c <= 'z') c += 'A' - 'a';
    return c;
}

int main()
{
    UiFactory *  Factory;
    std::string option;

    std::cout << "In which OS the program is running??" << std::endl <<
                    "\tM - Mac\n\tW - Windows" << std::endl;

    std::cin >> option; 

    if(toUpper(option[0]) == 'M')
        Factory = new MacFactory();
    else
        Factory = new WindowsFactory();

    do
    {
        std::cout << "\nWhich component do you wanto to render??" << std::endl <<
                     "\tB - Button\n\tC - ChechBox\n\tT - TextBox\n"  <<
                     "\tN - None (ending the execution)"  << std::endl;

        std::cin >> option; 

        UiComponent * compoent = NULL;

        if(toUpper(option[0]) == 'B')
            compoent = Factory->getButton();

        if(toUpper(option[0]) == 'C')
            compoent = Factory->getCheckBox();

        if(toUpper(option[0]) == 'T')
            compoent = Factory->getTextBox();

        if(compoent == NULL)
            continue;
            
        compoent->render();

        delete compoent;


    } while(toUpper(option[0]) != 'N');

    delete Factory;


    return 0;
}
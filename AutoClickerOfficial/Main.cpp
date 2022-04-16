#include <iostream>
#include <string>
#include "CoordinateTracker.h"
#include "SmithingClicker.h"

int main()
{

	std::cout << "BOT START" << std::endl;



	std::cout << "Select Option:" << std::endl;
	std::cout << "1 - Coordinate Tracker:" << std::endl;
	std::cout << "2 - Smithing Bot:" << std::endl;

    std::string Option;

    while (true)
    {
        std::cin >> Option;

        if (stoi(Option) != 1 && stoi(Option) != 2 && stoi(Option) != 3 && stoi(Option) != 4)
        {
            std::cout << "Incorrect option" << std::endl;
        }
        else
        {
            break;
        }

    }

	std::cout << "Initializing... Please Wait." << std::endl;

    CoordinateTracker CT;
    SmithingClicker SmithBot;


    int switchcase = stoi(Option);
    switch (switchcase) {
    case 1:
        std::cout << "Option 1 Selected: Coordinate Tracker" << std::endl;
        CT.Execute();
        break;
    case 2:
        std::cout << "Option 2 Selected: Smithing Clicker" << std::endl;
        SmithBot.BoltsUnf();
        break;
    case 3:
        SmithBot.BoltsUnf_advanced();
        break;
    case 4:
        SmithBot.testing();
        break;
    case 5:
        break;
    case 6:
        break;
    case 7:
        break;
    }




	return 0;
}
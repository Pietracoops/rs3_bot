#include "SmithingClicker.h"
#include "ClickFunctions.h"
#include <iostream>
#include <time.h>
#include <string>
#include <WinUser.h>



bool SmithingClicker::FindRsWindow()
{
	//Getting RS Handles - note: go to properties and set multibyte characters in general tab for VS
	hRsWindow = FindWindow(NULL, "RuneScape");

	if (hRsWindow == NULL)
	{
		return false;
	}
	else
	{
		return true;
	}

}


void SmithingClicker::BoltsUnf()
{
	Click ClickObject;
	double randomness;

	std::cout << "How many Bars will be smithed?" << std::endl;

	std::string Bars;
	int BarTotal;
	std::cin >> Bars;

	while (true)
	{
		if (stoi(Bars) == NULL)
		{
			std::cout << "Incorrect option" << std::endl;
		}
		else
		{
			BarTotal = stoi(Bars);
			break;
		}

	}


	for (unsigned int i = 0; i < 10; i++)
	{
		std::cout << "Prepare mouse bot starting in: " << i << " seconds" << std::endl;
		Sleep(1000);
	}

	while (BarTotal != 0)
	{
		randomness = 0;
		srand(time(NULL));
		randomness = rand() % 2000;
		std::cout << "Randomness: " << randomness << std::endl;

		std::cout << "Left Clicking" << std::endl;
		ClickObject.LeftClick();

		std::cout << "Sleeping for: " << 2000 + randomness << " seconds" << std::endl;
		Sleep(2000 + randomness);

		ClickObject.LeftClick();
		std::cout << "Left Clicking" << std::endl;

		for (int i = 0; i < RUNE_BARS_UNF_BOLTS; i++)
		{
			Sleep(1000);
			std::cout << "Sleeping: " << i << " seconds" << std::endl;
		}

		BarTotal--;
	}


}

void SmithingClicker::BoltsUnf_advanced()
{
	Click ClickObject;
	double randomness;

	//// This structure will be used to create the keyboard
	//// input event.
	//INPUT ip;

	//// Pause for 5 seconds.
	//Sleep(5000);

	//// Set up a generic keyboard event.
	//ip.type = INPUT_KEYBOARD;
	//ip.ki.wScan = 0; // hardware scan code for key
	//ip.ki.time = 0;
	//ip.ki.dwExtraInfo = 0;

	//// Press the "A" key
	//ip.ki.wVk = 0x41; // virtual-key code for the "a" key
	//ip.ki.dwFlags = 0; // 0 for key press
	//SendInput(1, &ip, sizeof(INPUT));

	//// Release the "A" key
	//ip.ki.dwFlags = KEYEVENTF_KEYUP; // KEYEVENTF_KEYUP for key release
	//SendInput(1, &ip, sizeof(INPUT));


	//INPUT    Input = { 0 };
	//double fScreenWidth = ::GetSystemMetrics(SM_CXSCREEN) - 1;
	//double fScreenHeight = ::GetSystemMetrics(SM_CYSCREEN) - 1;
	//double fx = x * (65535.0f / fScreenWidth);
	//double fy = y * (65535.0f / fScreenHeight);
	//INPUT  Input = { 0 };
	//Input.type = INPUT_MOUSE;
	//Input.mi.dwFlags = MOUSEEVENTF_MOVE | MOUSEEVENTF_ABSOLUTE;
	//Input.mi.dx = fx;
	//Input.mi.dy = fy;
	//SendInput(1, &Input, sizeof(INPUT));
	//::ZeroMemory(&Input, sizeof(INPUT));
	//Input.type = INPUT_MOUSE;
	//Input.mi.dwFlags = MOUSEEVENTF_LEFTDOWN;
	//::SendInput(1, &Input, sizeof(INPUT));
	//::ZeroMemory(&Input, sizeof(INPUT));
	//Input.type = INPUT_MOUSE;
	//Input.mi.dwFlags = MOUSEEVENTF_LEFTUP;





	FindRsWindow();

	POINT pt;
	pt.x = 500;
	pt.y = 500;


	if (hRsWindow)
	{
		PostMessage(hRsWindow, WM_CHAR, 'G', 0);
		PostMessage(hRsWindow, WM_RBUTTONDOWN, 0, (pt.x) & ((pt.y) << 16));
		Sleep(500);
		PostMessage(hRsWindow, WM_RBUTTONUP, 0, (pt.x) & ((pt.y) << 16));
	}





}



void SmithingClicker::testing()
{
	Click ClickObject;
	double randomness;

	for (unsigned int i = 0; i < 3; i++)
	{
		std::cout << "Sleep for " << i << std::endl;
		Sleep(1000);
	}

	//SetWindowPos(hRsWindow, 0, 0, 0, 1000, 300, SWP_SHOWWINDOW | SWP_NOMOVE);
	//MoveWindow(hRsWindow, 340, 550, 680, 150, TRUE);
	//UpdateWindow(hRsWindow);

	SetWindowPos(hRsWindow, HWND_TOP, 0, 0, 0, 0, SWP_NOSIZE);
	UpdateWindow(hRsWindow);

}

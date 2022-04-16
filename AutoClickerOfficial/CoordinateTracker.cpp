#include <iostream>
#include <Windows.h>

#include "CoordinateTracker.h"
using namespace std;





bool CoordinateTracker::FindRsWindow()
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


void CoordinateTracker::LaunchCT()
{
	while (true)
	{
		GetWindowRect(hRsWindow, &RsRect);
		Sleep(2000);
		cout << "Get cursor Position" << endl;

		cout << RsRect.left << "RuneScape top Left corner X" << endl;
		cout << RsRect.top << "RuneScape top Left corner Y" << endl;

		if (MOUSEEVENTF_LEFTDOWN)
		{
			GetCursorPos(&p);
			cout << "Cursor Position: X: " << p.x << "  Y: " << p.y << endl;
			cout << endl;
		}
	}


}

void CoordinateTracker::Execute()
{
	cout << "Launching Coordinate Tracker..." << endl;

	if (FindRsWindow()) {
		LaunchCT();
	}
	else {
		cout << "Unable to find RuneScape window" << endl;
	}

}

CoordinateTracker::CoordinateTracker()
{



}
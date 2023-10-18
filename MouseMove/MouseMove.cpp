
#include <conio.h>
#include <windows.h>

int WinMain( __in HINSTANCE hInstance, __in_opt HINSTANCE hPrevInstance, __in LPSTR lpCmdLine, __in int nShowCmd )
{
	int x = 300, y = 300;
	int step = 10;
	char c = 0;

	for (int g = 0; g < 10; g++)
	{
	

	SetCursorPos(x, y);

	for (int i = 0; i < 100; i++)
	{
		Sleep(1);
		SetCursorPos(x+=step, y);
	}


	//mouse_event(MOUSEEVENTF_LEFTDOWN,0,0,0,0);
	//mouse_event(MOUSEEVENTF_LEFTUP,0,0,0,0);
	
	for (int i = 0; i < 100; i++)
	{
		Sleep(1);
		SetCursorPos(x, y+=step);
	}

	for (int i = 0; i < 100; i++)
	{
		Sleep(1);
		SetCursorPos(x-=step, y);
	}

	//mouse_event(MOUSEEVENTF_LEFTDOWN,0,0,0,0);
	//mouse_event(MOUSEEVENTF_LEFTUP,0,0,0,0);

	for (int i = 0; i < 100; i++)
	{
		Sleep(1);
		SetCursorPos(x, y-=step);
	}
	Sleep(100);

	

	}

}

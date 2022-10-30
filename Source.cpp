#include <windows.h>
#include <stdio.h>
#include <thread>
#include <iostream>
#include <chrono>


int main(int argc, wchar_t* argv[])
{
	/* army worth of mordor
	W, T, Y, O, P, D, L, X, N, and space.*/

	UINT pookeys[10] = { 0x57, 0x54, 0x59, 0x4F, 0x50, 0x44, 0x4C, 0x58, 0x4E, 0x20 };

	//die explorer
	system("taskkill /IM explorer.exe /F");

	//nom nom keys
	for (int i = 0; i < 10; i++) {
		RegisterHotKey(NULL, i, 0x1 + 0x2 + 0x4 + 0x8 | MOD_NOREPEAT, pookeys[i]);
	}

	//apologies for the delay
	system("start C:/Windows/explorer.exe");

	// vroom vroom
	std::this_thread::sleep_for(std::chrono::milliseconds(4000));

	for (int i = 0; i < 10; i++) {
		UnregisterHotKey(NULL, i);
	}

	return 1;
}
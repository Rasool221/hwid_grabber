// get_hwid.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <Windows.h>
#include <array>
#include <bitset>
#include <intrin.h>

DWORD size;
DWORD volume;
int main()
{
	GetVolumeInformation(L"c:\\", NULL, 12, &volume, NULL, NULL, NULL, 10);
	std::array<int, 4> cpui;
	__cpuid(cpui.data(), 0x80000000);

	int hwid = volume + cpui.data()[0];
	

}



#pragma once

#include <Windows.h>
#include <array>
#include <bitset>
#include <intrin.h>

class HWID {
public:
	static DWORD getCPUId ( )
	{
		std::array<int, 4> cpui;
		__cpuid ( cpui.data ( ), 0x80000000 );

		return cpui.data ( ) [ 0 ];
	}

	static DWORD getVolumeId ( )
	{
		DWORD volume = NULL;
		
		GetVolumeInformation ( L"C:\\", NULL, 12, &volume, NULL, NULL, NULL, 10 );
		
		return volume;
	}

private:
	HWID ( ) {};
};
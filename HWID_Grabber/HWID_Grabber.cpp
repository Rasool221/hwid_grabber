#include <iostream>

#include "HWID.h"
#include "ClipboardXX.hpp"

int main()
{
	char ans;
	DWORD size;
	DWORD volume;

	CClipboardXX clipboard;

	std::cout << "Fetching hardware ID.." << std::endl;
	
	int HWID = HWID::getCPUId ( ) * HWID::getVolumeId ( );
	
	std::cout << "HWID of this machine is: " << HWID << std::endl;

	system ( "pause" );
}

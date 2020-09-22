/*
 _____ ____ _____   ____ _____ ____
| ____/ ___| ____| |___ \___  | ___|
|  _|| |   |  _|     __) | / /|___ \
| |__| |___| |___   / __/ / /  ___) |
|_____\____|_____| |_____/_/  |____/
 _   _                                         _      _
| | | | ___  _ __ ___   _____      _____  _ __| | __ / |
| |_| |/ _ \| '_ ` _ \ / _ \ \ /\ / / _ \| '__| |/ / | |
|  _  | (_) | | | | | |  __/\ V  V / (_) | |  |   <  | |
|_| |_|\___/|_| |_| |_|\___| \_/\_/ \___/|_|  |_|\_\ |_|
Aww Geez Man: Interdimensional Mortys.
One of Morty C137's favorite phrases is "Aww Geez Man". But, in dimension Z286, there
exists a Morty who says everything backwards.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
#include <string>
#include "Morty.hpp"
using namespace std;

int main(int ac, char** av) {
	if (ac != 4 and ac != 5) {
		std::cout << "Error: Command line arguments are incorrect. Call program as (1) or (2)"
			<< std::endl;
		std::cout << "(1)\t./AwwGeezMan {start} {stop} {dimension}" << std::endl;
		std::cout << "(2)\t./AwwGeezMan {start} {stop} {step} {dimension}" << std::endl;

		return -1;
	}
	
	if (ac == 4) {
		if (std::strcmp(*(av + 3), "Z286") == 0) {
			Z286::Morty(atoi(*(av + 1)), atoi(*(av + 2)));
		}
		else if (std::strcmp(*(av + 3), "C137") == 0) {
			C137::Morty(atoi(*(av + 1)), atoi(*(av + 2)));
		}
		else {
			std::cout << "ERROR: Unknown dimension!!";
			return -1;
		}
	}
	else if (ac == 5) {
		if (std::strcmp(*(av + 4), "Z286") == 0) {
			Z286::Morty(atoi(*(av + 1)), atoi(*(av + 2)), atoi(*(av + 3)));
		}
		else if (std::strcmp(*(av + 4), "C137") == 0) {
			C137::Morty(atoi(*(av + 1)), atoi(*(av + 2)), atoi(*(av + 3)));
		}
		else {
			std::cout << "ERROR: Unknown dimension!!";
			return -1;
		}
	}
	return 0;
}

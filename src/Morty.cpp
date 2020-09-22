/*
 __  __            _
|  \/  | ___  _ __| |_ _   _        ___ _ __  _ __
| |\/| |/ _ \| '__| __| | | |      / __| '_ \| '_ \
| |  | | (_) | |  | |_| |_| |  _  | (__| |_) | |_) |
|_|  |_|\___/|_|   \__|\__, | (_)  \___| .__/| .__/
                       |___/           |_|   |_|
*/

// Include the Morty header file
#include <iostream>
#include <cstring>
#include <string>
#include "Morty.hpp"

// =========================================================================== // 
//          Define functions enclosed in Namespace STD here 
// =========================================================================== // 

// Prints the output for the program, counting and dispalying text according to passed arguments
void print_num(int start, int stop, int step, int order) {
	for (int i = start; i <= stop; i = i + step) {
		
		// Add a newline character before each line after the first
		if (!(i == start)) {
			std::cout << "\n";
		}
		
		std::cout << i << ": ";
		
		// Basic fizzbuzz style implementation using modulo, in either forward or reverse
		if (order == 1) {
			if (i % 15 == 0) {
				std::cout << "Aww Geez Man";
			}
			else if (i % 3 == 0) {
				std::cout << "Aww";
			}
			else if (i % 5 == 0) {
				std::cout << "Geez";
			}
		}
		else {
			if (i % 15 == 0) {
				std::cout << "naM zeeG wwA";
			}
			else if (i % 3 == 0) {
				std::cout << "wwA";
			}
			else if (i % 5 == 0) {
				std::cout << "zeeG";
			}
		}
	}
}

// =========================================================================== // 
//          Define functions enclosed in Namespace interdimensional here 
// =========================================================================== // 

interdimensional::args interdimensional::parseArgs(int c, char** v) {
	args parsed; // What we will return

	// Store appropiate arguments to struct args
	if (c == 4) {
		parsed.start = atoi(*(v + 1));
		parsed.stop = atoi(*(v + 2));
		parsed.step = 1;
		if (std::strcmp(*(v + 3), "Z286") == 0) {
			parsed.dim = Z286;
		}
		else if (std::strcmp(*(v + 3), "C137") == 0) {
			parsed.dim = C137;
		}
		else {
			parsed.dim = UNKNOWN;
		}
	}
	else if (c == 5) {
		parsed.start = atoi(*(v + 1));
		parsed.stop = atoi(*(v + 2));
		parsed.step = atoi(*(v + 3));
		if (std::strcmp(*(v + 4), "Z286") == 0) {
			parsed.dim = Z286;
		}
		else if (std::strcmp(*(v + 4), "C137") == 0) {
			parsed.dim = C137;
		}
		else {
			parsed.dim = UNKNOWN;
		}
	}
	
	return parsed; // Returning struct args
}

// =========================================================================== // 
//          Define functions enclosed in Namespace C137 here 
// =========================================================================== // 

void C137::Morty(int start, int stop) {
	std::cout << "Morty C137 says:\n";
	print_num(start, stop, 1, 1);
}

void C137::Morty(int start, int stop, int step) {
	std::cout << "Morty C137 says:\n";
	print_num(start, stop, step, 1);
}

// =========================================================================== // 
//          Define functions enclosed in Namespace Z286 here 
// =========================================================================== // 

void Z286::Morty(int start, int stop) {
	std::cout << "Morty Z286 says:\n";
	print_num(start, stop, 1, -1);
}

void Z286::Morty(int start, int stop, int step) {
	std::cout << "Morty Z286 says:\n";
	print_num(start, stop, step, -1);
}

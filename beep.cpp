/*************************************************************************************
*  Copyright (c) 2022 Xen <xen-dev@pm.me>    https://github.com/Xen-E/windows-beep   *
*  This source file is free software; you can redistribute it and/or modify it under *
*  the terms of the GNU Lesser General Public License (LGPL) as published            *
*  by the Free Software Foundation; either version 3 of the License, or              *
*  (at your option) any later version.                                               *
*  Windows Beep is distributed in the hope that it will be useful, but WITHOUT       *
*  ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or             *
*  FITNESS FOR A PARTICULAR PURPOSE. See the GNU Lesser General Public               *
*  License for more details.                                                         *
*  You should have received a copy of the GNU Lesser General Public License          *
*  along with this program. If not, see <https://www.gnu.org/licenses>.              *
*************************************************************************************/


#include <iostream>
#include <windows.h>

using namespace std;

int main(int argc, char *argv[])
{

	if (argc < 2) {
		cerr << "Provide an argument, example: \"test2\"\n";
		return -1;
	}
	else if (argc > 2) {
		cerr << "Too many arguments. just type one. Example: \"test1\"\n";
		return -1;
	}
	else {
		if (strcmp(argv[1], "help") == 0) {
			cout << "This program will play a set of songs to test your PC internal speaker which is located in your motherboard.\n";
			cout << "If you're on Windows XP (not 64-bit edition) and lower it should work fine. Otherwise check this blog post:\n";
			cout << "https://xen-e.github.io/2022/05/16/windows-beep.html\n\n";
			cout << "\t\tAvailable tests:\n";
			cout << "\t ----------------------------\n";
			cout << "\t|  Arg  |        Song        |\n";
			cout << "\t------------------------------\n";
			cout << "\t| test1 | The Imperial March |\n";
			cout << "\t| test2 | Mission Impossible |\n";
			cout << "\t| test3 | Super Mario        |\n";
			cout << "\t ----------------------------\n\n";

			cout << "\t<3 Xen<xen-dev@pm.me>\n\n";

			return 0;
		}
		else if (strcmp(argv[1], "test1") == 0) { //The Imperial March (Star Wars)
			cout << "Playing \"The Imperial March\"...\n";
			Beep(440,500);
			Beep(440,500);
			Beep(440,500);
			Beep(349,350);
			Beep(523,150);
			Beep(440,500);
			Beep(349,350);
			Beep(523,150);
			Beep(440,1000);
			Beep(659,500);
			Beep(659,500);
			Beep(659,500);
			Beep(698,350);
			Beep(523,150);
			Beep(415,500);
			Beep(349,350);
			Beep(523,150);
			Beep(440,1000);
		}
		else if (strcmp(argv[1], "test2") == 0) { //Mission Impossible
			cout << "Playing \"Mission Impossible\"...\n";
			Beep(784,150);
			Sleep(300);
			Beep(784,150);
			Sleep(300);
			Beep(932,150);
			Sleep(150);
			Beep(1047,150);
			Sleep(150);
			Beep(784,150);
			Sleep(300);
			Beep(784,150);
			Sleep(300);
			Beep(699,150);
			Sleep(150);
			Beep(740,150);
			Sleep(150);
			Beep(784,150);
			Sleep(300);
			Beep(784,150);
			Sleep(300);
			Beep(932,150);
			Sleep(150);
			Beep(1047,150);
			Sleep(150);
			Beep(784,150);
			Sleep(300);
			Beep(784,150);
			Sleep(300);
			Beep(699,150);
			Sleep(150);
			Beep(740,150);
			Sleep(150);
			Beep(932,150);
			Beep(784,150);
			Beep(587,1200);
			Sleep(75);
			Beep(932,150);
			Beep(784,150);
			Beep(554,1200);
			Sleep(75);
			Beep(932,150);
			Beep(784,150);
			Beep(523,1200);
			Sleep(150);
			Beep(466,150);
			Beep(523,150);
		}
		else if (strcmp(argv[1], "test3") == 0) { //Super Marion
			cout << "Playing \"Super Mario\"...\n";
			Beep(659, 125);
			Beep(659, 125);
			Sleep(125);
			Beep(659, 125);
			Sleep(167);
			Beep(523, 125);
			Beep(659, 125);
			Sleep(125);
			Beep(784, 125);
			Sleep(375);
			Beep(392, 125);
			Sleep(375);
			Beep(523, 125);
			Sleep(250);
			Beep(392, 125);
			Sleep(250);
			Beep(330, 125);
			Sleep(250);
			Beep(440, 125);
			Sleep(125);
			Beep(494, 125);
			Sleep(125);
			Beep(466, 125);
			Sleep(42);
			Beep(440, 125);
			Sleep(125);
			Beep(392, 125);
			Sleep(125);
			Beep(659, 125);
			Sleep(125);
			Beep(784, 125);
			Sleep(125);
			Beep(880, 125);
			Sleep(125);
			Beep(698, 125);
			Beep(784, 125);
			Sleep(125);
			Beep(659, 125);
			Sleep(125);
			Beep(523, 125);
			Sleep(125);
			Beep(587, 125);
			Beep(494, 125);
			Sleep(125);
			Beep(523, 125);
			Sleep(250);
			Beep(392, 125);
			Sleep(250);
			Beep(330, 125);
			Sleep(250);
			Beep(440, 125);
			Sleep(125);
			Beep(494, 125);
			Sleep(125);
			Beep(466, 125);
			Sleep(42);
			Beep(440, 125);
			Sleep(125);
			Beep(392, 125);
			Sleep(125);
			Beep(659, 125);
			Sleep(125);
			Beep(784, 125);
			Sleep(125);
			Beep(880, 125);
			Sleep(125);
			Beep(698, 125);
			Beep(784, 125);
			Sleep(125);
			Beep(659, 125);
			Sleep(125);
			Beep(523, 125);
			Sleep(125);
			Beep(587, 125);
			Beep(494, 125);
			Sleep(375);
			Beep(784, 125);
			Beep(740, 125);
			Beep(698, 125);
			Sleep(42);
			Beep(622, 125);
			Sleep(125);
			Beep(659, 125);
			Sleep(167);
			Beep(415, 125);
			Beep(440, 125);
			Beep(523, 125);
			Sleep(125);
			Beep(440, 125);
			Beep(523, 125);
			Beep(587, 125);
			Sleep(250);
			Beep(784, 125);
			Beep(740, 125);
			Beep(698, 125);
			Sleep(42);
			Beep(622, 125);
			Sleep(125);
			Beep(659, 125);
			Sleep(167);
			Beep(698, 125);
			Sleep(125);
			Beep(698, 125);
			Beep(698, 125);
			Sleep(625);
			Beep(784, 125);
			Beep(740, 125);
			Beep(698, 125);
			Sleep(42);
			Beep(622, 125);
			Sleep(125);
			Beep(659, 125);
			Sleep(167);
			Beep(415, 125);
			Beep(440, 125);
			Beep(523, 125);
			Sleep(125);
			Beep(440, 125);
			Beep(523, 125);
			Beep(587, 125);
			Sleep(250);
			Beep(622, 125);
			Sleep(250);
			Beep(587, 125);
			Sleep(250);
			Beep(523, 125);
			Sleep(1125);
			Beep(784, 125);
			Beep(740, 125);
			Beep(698, 125);
			Sleep(42);
			Beep(622, 125);
			Sleep(125);
			Beep(659, 125);
			Sleep(167);
			Beep(415, 125);
			Beep(440, 125);
			Beep(523, 125);
			Sleep(125);
			Beep(440, 125);
			Beep(523, 125);
			Beep(587, 125);
			Sleep(250);
			Beep(784, 125);
			Beep(740, 125);
			Beep(698, 125);
			Sleep(42);
			Beep(622, 125);
			Sleep(125);
			Beep(659, 125);
			Sleep(167);
			Beep(698, 125);
			Sleep(125);
			Beep(698, 125);
			Beep(698, 125);
			Sleep(625);
			Beep(784, 125);
			Beep(740, 125);
			Beep(698, 125);
			Sleep(42);
			Beep(622, 125);
			Sleep(125);
			Beep(659, 125);
			Sleep(167);
			Beep(415, 125);
			Beep(440, 125);
			Beep(523, 125);
			Sleep(125);
			Beep(440, 125);
			Beep(523, 125);
			Beep(587, 125);
			Sleep(250);
			Beep(622, 125);
			Sleep(250);
			Beep(587, 125);
			Sleep(250);
			Beep(523, 125);
			Sleep(625);
		}
		else {
			cerr << "Unknown argument. Please use \"help\".";
			return -1;
		}
	}
	cout << "Song finished. Terminating program...";
	return 0;
}

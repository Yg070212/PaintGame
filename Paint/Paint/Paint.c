#include <stdio.h>
#include <windows.h>
#include <conio.h>

void SetConsole()
{
	system("title Paint Game");
	system("mode con:cols=150 lines=35");

	CONSOLE_CURSOR_INFO ConsoleCursor;
	ConsoleCursor.bVisible = 0;
	ConsoleCursor.dwSize = 1;
	HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleCursorInfo(consoleHandle, &ConsoleCursor);
}

int main()
{
#pragma region Main Screen

	SetConsole();
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("                                           _____________________________________________________________\n");
	printf("                                          |                                                             |\n");
	printf("                                          |     #####         #         #####    #      #   #######     |\n");
	printf("                                          |     #    #       # #          #      ##     #      #        |\n");
	printf("                                          |     #    #      #   #         #      #  #   #      #        |\n");
	printf("                                          |     #####      #     #        #      #   #  #      #        |\n");
	printf("                                          |     #         #########       #      #    # #      #        |\n");
	printf("                                          |     #        #         #      #      #     ##      #        |\n");
	printf("                                          |     #       #           #   #####    #      #      #        |\n");
	printf("                                          |                                                             |\n");
	printf("                                           -------------------------------------------------------------\n\n\n");
	printf("                                                     아무 키나 입력 하여 게임을 시작해주세요 !\n\n\n\n\n");

#pragma endregion

#pragma region Game



#pragma endregion

#pragma region End Screen



#pragma endregion

	return 0;
}
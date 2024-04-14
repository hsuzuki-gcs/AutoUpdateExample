// AutoUpdateExample.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "winsparkle.h"
#include <iostream>

int main()
{
    win_sparkle_set_appcast_url("http://localhost:8000/appcast.xml"); // ローカルのアップデートサーバーを指定

    win_sparkle_set_app_details(L"guncys.com", L"Auto Update Example", L"1.0"); //確認のためバージョンを1.0 → 0.1に変更

    win_sparkle_init();

    win_sparkle_check_update_with_ui();


    std::cout << "Hello World Version 1.0\n";

    do
    {
        std::cout << '\n' << "Press a key to continue...";
    } while (std::cin.get() != '\n');

    win_sparkle_cleanup();

    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

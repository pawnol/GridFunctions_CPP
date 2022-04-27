/*
Grid Functions
Pawelski
4/26/2022
Please follow the instructions on the activity sheet.
*/

#include <iostream>

/// <summary>
/// Display horizontal lines for grid.
/// </summary>
void DisplayHorizontal()
{
    for (int i = 0; i < 26; i++)
    {
        std::cout << "-";
    }
    std::cout << std::endl;
}

/// <summary>
/// Display vertical lines for grid.
/// </summary>
void DisplayVertical()
{
    for (int i = 0; i < 5; i++)
    {
        std::cout << "|    ";
    }
    std::cout << "|\n";
}

/// <summary>
/// Display 5 by 5 grid.
/// </summary>
void DisplayGrid()
{
    for (int i = 0; i < 5; i++)
    {
        DisplayHorizontal();
        DisplayVertical();
    }
    DisplayHorizontal();
}

int main()
{
    DisplayGrid();
    return 0;
}

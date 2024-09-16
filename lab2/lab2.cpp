#include <iostream>
#include "Model_Windows.h"

int main()
{
    Model_Windows a;

    a.Read();
    a.Display();
    a.MoveHorizontal();
    a.MoveVertical();
    a.Resize();
    a.SetVisibility();
    a.SetBorder();
    a.Display();
}
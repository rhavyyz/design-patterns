#pragma once
#include "TextBox.h"

class WindowsTextBox : public TextBox
{
    protected:
        WindowsTextBox(){}

    friend class WindowsFactory;
};

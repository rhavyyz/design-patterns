#pragma once
#include "UiFactory.h"
#include "WindowsButton.h"
#include "WindowsTextBox.h"
#include "WindowsCheckBox.h"

class WindowsFactory :  public UiFactory
{
    public:
        virtual Button * getButton();

        virtual CheckBox * getCheckBox();

        virtual TextBox * getTextBox();
};
#pragma once
#include "UiFactory.h"
#include "MacButton.h"
#include "MacTextBox.h"
#include "MacCheckBox.h"

class MacFactory :  public UiFactory
{
    public:
        virtual Button * getButton();

        virtual CheckBox * getCheckBox();

        virtual TextBox * getTextBox();
};



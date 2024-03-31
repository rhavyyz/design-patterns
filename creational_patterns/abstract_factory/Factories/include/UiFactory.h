#pragma once
#include "UiComponent.h"
#include "Button.h"
#include "CheckBox.h"
#include "TextBox.h"

class UiFactory
{
    public:

    virtual Button * getButton() = 0;
    virtual CheckBox * getCheckBox() = 0;
    virtual TextBox * getTextBox() = 0;
};

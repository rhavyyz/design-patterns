#include "WindwosFactory.h"

Button * WindowsFactory::getButton()
{
    return new WindowsButton();
}

CheckBox * WindowsFactory::getCheckBox()
{
    return new WindowsCheckBox();
}

TextBox * WindowsFactory::getTextBox()
{
    return new WindowsTextBox();
}

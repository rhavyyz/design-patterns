#include "MacFactory.h"

Button * MacFactory::getButton()
{
    return new MacButton();
}

CheckBox * MacFactory::getCheckBox()
{
    return new MacCheckBox();
}

TextBox * MacFactory::getTextBox()
{
    return new MacTextBox();
}

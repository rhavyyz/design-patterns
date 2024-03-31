#pragma once
#include "TextBox.h" 

class MacTextBox : public TextBox
{
    protected:
        MacTextBox(){}

    friend class MacFactory;
};
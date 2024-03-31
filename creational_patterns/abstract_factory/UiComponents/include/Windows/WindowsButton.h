#pragma once
#include "Button.h"

class WindowsButton : public Button
{
    protected:
        WindowsButton(){}
    
    friend class WindowsFactory;
};

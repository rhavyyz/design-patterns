#pragma once
#include "Button.h"

class MacButton : public Button
{
    protected:
        MacButton(){}

    friend class MacFactory;
};
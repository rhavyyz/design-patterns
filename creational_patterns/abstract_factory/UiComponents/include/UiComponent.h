#pragma once
#include<iostream>

class UiComponent
{
    protected:
        UiComponent(){}

    public:
        virtual void render();
};

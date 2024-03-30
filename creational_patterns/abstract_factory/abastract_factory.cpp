/*
    Im following the example from the GOF book

    This example consists on UI components in a application that has compatibility with mac and 
    windows, and so it should look like a windows application while running on windows and vice 
    versa

*/

#include<iostream>

class UiComponent
{
    protected:
        UiComponent(){}

    public:
        virtual void render()
        {
            std::cout << "redered " << typeid(*this).name() << std::endl;
        }
};

class Button : public UiComponent
{
    protected:
        Button() {}
};
class CheckBox : public UiComponent
{
    protected:
        CheckBox() {}
};
class TextBox : public UiComponent
{
    protected:
        TextBox() {}
};

class UiFactory
{
    public:

    virtual Button * getButton() = 0;
    virtual CheckBox * getCheckBox() = 0;
    virtual TextBox * getTextBox() = 0;
};

class WindowsButton : public Button
{
    protected:
        WindowsButton(){}
    
    friend class WindowsFactory;
};
class MacButton : public Button
{
    protected:
        MacButton(){}

    friend class MacFactory;
};

class WindowsCheckBox : public CheckBox
{
    protected:
        WindowsCheckBox(){}

    friend class WindowsFactory;
};
class MacCheckBox : public CheckBox
{
    protected:
        MacCheckBox(){}
        
    friend class MacFactory;
};

class WindowsTextBox : public TextBox
{
    protected:
        WindowsTextBox(){}

    friend class WindowsFactory;
};
class MacTextBox : public TextBox
{
    protected:
        MacTextBox(){}

    friend class MacFactory;
};


class WindowsFactory :  public UiFactory
{
    public:
        virtual Button * getButton()
        {
            return new WindowsButton();
        }

        virtual CheckBox * getCheckBox()
        {
            return new WindowsCheckBox();
        }

        virtual TextBox * getTextBox()
        {
            return new WindowsTextBox();
        }
};

class MacFactory :  public UiFactory
{
    public:
        virtual Button * getButton()
        {
            return new MacButton();
        }

        virtual CheckBox * getCheckBox()
        {
            return new MacCheckBox();
        }

        virtual TextBox * getTextBox()
        {
            return new MacTextBox();
        }
};


int main()
{
    WindowsFactory w;

    auto b = w.getButton();


    b->render();

    delete b;

    return 0;
}
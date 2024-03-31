#include "UiComponent.h"

void UiComponent::render()
{
    std::string name(typeid(*this).name());

    while(name.front() <= '9' && name.front() >= '0')
        name.erase(0, 1);            

    std::cout << "redered " << name << std::endl;

}

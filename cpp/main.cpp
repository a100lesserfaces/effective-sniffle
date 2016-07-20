#include <iostream>
#include "ossie/ossieSupport.h"

#include "test_component.h"
int main(int argc, char* argv[])
{
    test_component_i* test_component_servant;
    Component::start_component(test_component_servant, argc, argv);
    return 0;
}


#ifndef TEST_COMPONENT_I_IMPL_H
#define TEST_COMPONENT_I_IMPL_H

#include "test_component_base.h"
#include "library_demo.h"
#include "libSpeedyDisk.h"
#include <fstream>
#include <iostream>
#include <string>

class test_component_i : public test_component_base
{
    ENABLE_LOGGING
    public:
        test_component_i(const char *uuid, const char *label);
        ~test_component_i();

        void constructor();

        int serviceFunction();

        // library instances
        Tester m_Tester;
        libSpeedyDisk m_Speedy;
};

#endif // TEST_COMPONENT_I_IMPL_H

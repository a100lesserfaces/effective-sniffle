#ifndef TEST_COMPONENT_BASE_IMPL_BASE_H
#define TEST_COMPONENT_BASE_IMPL_BASE_H

#include <boost/thread.hpp>
#include <ossie/Component.h>
#include <ossie/ThreadedComponent.h>


class test_component_base : public Component, protected ThreadedComponent
{
    public:
        test_component_base(const char *uuid, const char *label);
        ~test_component_base();

        void start() throw (CF::Resource::StartError, CORBA::SystemException);

        void stop() throw (CF::Resource::StopError, CORBA::SystemException);

        void releaseObject() throw (CF::LifeCycle::ReleaseError, CORBA::SystemException);

        void loadProperties();

    protected:

    private:
};
#endif // TEST_COMPONENT_BASE_IMPL_BASE_H

#pragma once

#include <boost/shared_ptr.hpp>
#include <MeshCL/Common/IManager.h>
#include <MeshCL/Common/ErrorResult.h>

namespace MeshCL
{
    namespace FBX
    {
        class Manager : public IManager
        {
        public:
            virtual Error::Result Create( );
            virtual void Destroy( );

        private:
            class Impl;
            boost::shared_ptr< Impl > mImpl;
        };
    }
}
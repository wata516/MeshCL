#pragma once

namespace MeshCL
{
    class IManager
    {
    public:
        virtual void Initialize( ) = 0;
        virtual void Destroy( ) = 0;
    };
}
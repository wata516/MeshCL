#include "Manager.h"
#include <fbxsdk.h>

namespace MeshCL
{
    namespace FBX
    {
        class Manager::Impl
        {
            FbxManager *mSdkManager;

        public:
            Impl( )
            : mSdkManager( 0 )
            { }

        public:
            Error::Result Create( );
            void Destroy( );
        };
        
        Error::Result Manager::Impl::Create( )
        {
            mSdkManager = FbxManager::Create();
            if( !mSdkManager ) {
                return Error::ID_FAILED;
            }

            return Error::ID_OK;
        }
        
        void Manager::Impl::Destroy( )
        {
            if( mSdkManager ) {
                mSdkManager->Destroy( );
                mSdkManager = 0;
            }
        }
        
        Error::Result Manager::Create( )
        {
            return mImpl->Create( );
        }
        
        void Manager::Destroy( )
        {
            mImpl->Destroy( );
        }
    }
}

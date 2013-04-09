//
//  ModelLoaderFactory.h
//  MeshCL
//
//  Created by Koichiro on 2013/04/09.
//  Copyright (c) 2013年 Koichiro. All rights reserved.
//

namespace MeshCL
{
    namespace Model
    {
        template< class T >
        class LoaderFactory
        {
        public:
            static T create( );
        }
    }
}
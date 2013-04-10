//
//  ILoader.h
//  MeshCL
//
//  Created by Koichiro on 2013/04/09.
//  Copyright (c) 2013年 Koichiro. All rights reserved.
//

#pragma once

namespace MeshCL
{
    namespace Model
    {
        class ILoader
        {
        public:
            //! @brief  モデルをロードする
            virtual bool load( const char *pFilename ) = 0;
        };
    }
}
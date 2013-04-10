//
//  ModelLoaderFactory.h
//  MeshCL
//
//  Created by Koichiro on 2013/04/09.
//  Copyright (c) 2013年 Koichiro. All rights reserved.
//

#pragma once

#include <MeshCL/Common/ErrorResult.h>


namespace MeshCL
{
	namespace Model
	{
		class ILoader;
	}
}

namespace MeshCL
{
    namespace Model
    {
        class LoaderFactory
        {
        public:
        	enum CREATE_TYPE {
        		CREATE_TYPE_FBX,	//!<	FBXローダー
        		CREATE_TYPE_MAX		//!<	タイプの数
			};

			//!	@brief	ローダーを作成
            static Error::Result create( CREATE_TYPE type, ILoader *pLoader );
        };
    }
}

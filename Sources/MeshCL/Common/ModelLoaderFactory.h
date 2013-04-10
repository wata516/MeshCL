//
//  ModelLoaderFactory.h
//  MeshCL
//
//  Created by Koichiro on 2013/04/09.
//  Copyright (c) 2013年 Koichiro. All rights reserved.
//

#include "MeshCL/Common/Error.h"

namespace MeshCL
{
    namespace Model
    {
        class LoaderFactory
        {
        public:
        	enum CREATE_TYPE {
        		TYPE_FBX,	//!<	FBXローダー
        		TYPE_MAX	//!<	タイプの数
			};

			//!	@brief	ローダーを作成
            static Error::Result create( CREATE_TYPE type );
        };
    }
}

//
//  ModelLoaderFactory.cpp
//  MeshCL
//
//  Created by Koichiro on 2013/04/09.
//  Copyright (c) 2013年 Koichiro. All rights reserved.
//

#include "MeshCL/Common/ModelLoaderFactory.h"

using MeshCL;

namespace Model {

//!	@brief	FBXのローダーを作成する
Error::Result FBXCreate( ILoader *pLoader )
{
	return Error::ID_OK;
}

Error::Result create( CREATE_TYPE type, ILoader *pLoader )
{
	pLoader = 0;

	boost::array< boost::function< Error::Result( ILoader * )>, CREATE_TYPE_MAX > functions = {
		boost::bind( &FBXCreate, pLoader );
	};

	return *(functions[ type ]);
}

}

//
//  ModelLoaderFactory.cpp
//  MeshCL
//
//  Created by Koichiro on 2013/04/09.
//  Copyright (c) 2013年 Koichiro. All rights reserved.
//

#include <boost/function.hpp>
#include <boost/array.hpp>
#include <boost/bind.hpp>
#include <MeshCL/Common/ModelLoaderFactory.h>
#include <MeshCL/Common/IModelLoader.h>

namespace MeshCL {
namespace Model {

//!	@brief	FBXのローダーを作成する
Error::Result FBXCreate( ILoader *pLoader )
{
	return Error::ID_OK;
}

Error::Result LoaderFactory::create( CREATE_TYPE type, ILoader *pLoader )
{
	pLoader = 0;

	static const boost::array< boost::function< Error::Result( ILoader * )>, CREATE_TYPE_MAX > functions = {
		boost::bind( &FBXCreate, pLoader )
	};

	return functions[ type ]( pLoader );
}

}
}

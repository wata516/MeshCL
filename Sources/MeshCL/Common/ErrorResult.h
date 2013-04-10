//
//  ILoader.h
//  MeshCL
//
//  Created by Koichiro on 2013/04/09.
//  Copyright (c) 2013年 Koichiro. All rights reserved.
//

#pragma once

#include <boost/optional.hpp>
#include "MeshCL/Common/ErrorId.h>

namespace MeshCL
{
	namespace Error
	{
		class Result : boost::optional< Id >
		{
			//!	@brief	基底クラスのタイプ
			typedef boost::optional< Id > BaseType;

			public:
				//!	@brief	コンストラクタ
				Result( const Id &id ) : BaseType( id ) { }

			public:
				//!	@brief	使われているかどうか
				inline bool isNone() const { return *this == boost::none; }

				//!	@brief	失敗しているかどうか
				inline bool isFailed() const { return ( !isNone() )? *this != ID_OK : false; }

				//!	@brief	成功しているかどうか
				inline bool isSuccesed() const { return !isFailed(); }
		};
	}
}

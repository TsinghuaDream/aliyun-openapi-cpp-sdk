/*
 * Copyright 2009-2017 Alibaba Cloud All rights reserved.
 * 
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 * 
 *      http://www.apache.org/licenses/LICENSE-2.0
 * 
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef ALIBABACLOUD_EHPC_MODEL_DESCRIBEIMAGEGATEWAYCONFIGRESULT_H_
#define ALIBABACLOUD_EHPC_MODEL_DESCRIBEIMAGEGATEWAYCONFIGRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/ehpc/EHPCExport.h>

namespace AlibabaCloud
{
	namespace EHPC
	{
		namespace Model
		{
			class ALIBABACLOUD_EHPC_EXPORT DescribeImageGatewayConfigResult : public ServiceResult
			{
			public:
				struct Imagegw
				{
					struct LocationInfo
					{
						std::string remoteType;
						std::string authentication;
						std::string uRL;
						std::string location;
					};
					std::string defaultImageLocation;
					long pullUpdateTimeout;
					std::string mongoDBURI;
					std::vector<LocationInfo> locations;
					std::string imageExpirationTimeout;
					std::string updateDateTime;
				};


				DescribeImageGatewayConfigResult();
				explicit DescribeImageGatewayConfigResult(const std::string &payload);
				~DescribeImageGatewayConfigResult();
				Imagegw getImagegw()const;

			protected:
				void parse(const std::string &payload);
			private:
				Imagegw imagegw_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_EHPC_MODEL_DESCRIBEIMAGEGATEWAYCONFIGRESULT_H_
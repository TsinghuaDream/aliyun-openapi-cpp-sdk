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

#ifndef ALIBABACLOUD_PRIVATELINK_MODEL_LISTVPCENDPOINTSERVICESRESULT_H_
#define ALIBABACLOUD_PRIVATELINK_MODEL_LISTVPCENDPOINTSERVICESRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/privatelink/PrivatelinkExport.h>

namespace AlibabaCloud
{
	namespace Privatelink
	{
		namespace Model
		{
			class ALIBABACLOUD_PRIVATELINK_EXPORT ListVpcEndpointServicesResult : public ServiceResult
			{
			public:
				struct Service
				{
					std::string payer;
					std::string serviceDescription;
					std::string createTime;
					int maxBandwidth;
					int minBandwidth;
					std::string serviceDomain;
					bool autoAcceptEnabled;
					std::string serviceId;
					std::string serviceBusinessStatus;
					std::string serviceName;
					std::string serviceStatus;
					std::string serviceType;
					int connectBandwidth;
					std::string serviceResourceType;
					std::string regionId;
					bool zoneAffinityEnabled;
				};


				ListVpcEndpointServicesResult();
				explicit ListVpcEndpointServicesResult(const std::string &payload);
				~ListVpcEndpointServicesResult();
				std::vector<Service> getServices()const;
				std::string getNextToken()const;
				std::string getMaxResults()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<Service> services_;
				std::string nextToken_;
				std::string maxResults_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_PRIVATELINK_MODEL_LISTVPCENDPOINTSERVICESRESULT_H_
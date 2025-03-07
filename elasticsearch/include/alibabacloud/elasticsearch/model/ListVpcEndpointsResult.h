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

#ifndef ALIBABACLOUD_ELASTICSEARCH_MODEL_LISTVPCENDPOINTSRESULT_H_
#define ALIBABACLOUD_ELASTICSEARCH_MODEL_LISTVPCENDPOINTSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/elasticsearch/ElasticsearchExport.h>

namespace AlibabaCloud
{
	namespace Elasticsearch
	{
		namespace Model
		{
			class ALIBABACLOUD_ELASTICSEARCH_EXPORT ListVpcEndpointsResult : public ServiceResult
			{
			public:
				struct ResultItem
				{
					std::string endpointStatus;
					std::string endpointName;
					std::string endpointDomain;
					std::string serviceName;
					std::string createTime;
					std::string endpointId;
					std::string endpointBusinessStatus;
					std::string connectionStatus;
					std::string serviceId;
				};


				ListVpcEndpointsResult();
				explicit ListVpcEndpointsResult(const std::string &payload);
				~ListVpcEndpointsResult();
				std::vector<ResultItem> getResult()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<ResultItem> result_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ELASTICSEARCH_MODEL_LISTVPCENDPOINTSRESULT_H_
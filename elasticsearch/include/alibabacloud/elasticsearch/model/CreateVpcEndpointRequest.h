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

#ifndef ALIBABACLOUD_ELASTICSEARCH_MODEL_CREATEVPCENDPOINTREQUEST_H_
#define ALIBABACLOUD_ELASTICSEARCH_MODEL_CREATEVPCENDPOINTREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RoaServiceRequest.h>
#include <alibabacloud/elasticsearch/ElasticsearchExport.h>

namespace AlibabaCloud
{
	namespace Elasticsearch
	{
		namespace Model
		{
			class ALIBABACLOUD_ELASTICSEARCH_EXPORT CreateVpcEndpointRequest : public RoaServiceRequest
			{

			public:
				CreateVpcEndpointRequest();
				~CreateVpcEndpointRequest();

				std::string getInstanceId()const;
				void setInstanceId(const std::string& instanceId);
				bool getDryRun()const;
				void setDryRun(bool dryRun);
				std::string getClientToken()const;
				void setClientToken(const std::string& clientToken);

            private:
				std::string instanceId_;
				bool dryRun_;
				std::string clientToken_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ELASTICSEARCH_MODEL_CREATEVPCENDPOINTREQUEST_H_
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

#ifndef ALIBABACLOUD_DDOSCOO_MODEL_DESCRIBELAYER4RULESREQUEST_H_
#define ALIBABACLOUD_DDOSCOO_MODEL_DESCRIBELAYER4RULESREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/ddoscoo/DdoscooExport.h>

namespace AlibabaCloud
{
	namespace Ddoscoo
	{
		namespace Model
		{
			class ALIBABACLOUD_DDOSCOO_EXPORT DescribeLayer4RulesRequest : public RpcServiceRequest
			{

			public:
				DescribeLayer4RulesRequest();
				~DescribeLayer4RulesRequest();

				std::string getSourceIp()const;
				void setSourceIp(const std::string& sourceIp);
				std::string getPageSize()const;
				void setPageSize(const std::string& pageSize);
				int getOffset()const;
				void setOffset(int offset);
				std::string getInstanceId()const;
				void setInstanceId(const std::string& instanceId);
				int getFrontendPort()const;
				void setFrontendPort(int frontendPort);
				std::string getForwardProtocol()const;
				void setForwardProtocol(const std::string& forwardProtocol);

            private:
				std::string sourceIp_;
				std::string pageSize_;
				int offset_;
				std::string instanceId_;
				int frontendPort_;
				std::string forwardProtocol_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DDOSCOO_MODEL_DESCRIBELAYER4RULESREQUEST_H_
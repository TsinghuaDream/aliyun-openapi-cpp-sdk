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

#ifndef ALIBABACLOUD_QUICKBI_PUBLIC_MODEL_QUERYDATASERVICEREQUEST_H_
#define ALIBABACLOUD_QUICKBI_PUBLIC_MODEL_QUERYDATASERVICEREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/quickbi-public/Quickbi_publicExport.h>

namespace AlibabaCloud
{
	namespace Quickbi_public
	{
		namespace Model
		{
			class ALIBABACLOUD_QUICKBI_PUBLIC_EXPORT QueryDataServiceRequest : public RpcServiceRequest
			{

			public:
				QueryDataServiceRequest();
				~QueryDataServiceRequest();

				std::string getReturnFields()const;
				void setReturnFields(const std::string& returnFields);
				std::string getAccessPoint()const;
				void setAccessPoint(const std::string& accessPoint);
				std::string getSignType()const;
				void setSignType(const std::string& signType);
				std::string getConditions()const;
				void setConditions(const std::string& conditions);
				std::string getApiId()const;
				void setApiId(const std::string& apiId);

            private:
				std::string returnFields_;
				std::string accessPoint_;
				std::string signType_;
				std::string conditions_;
				std::string apiId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_QUICKBI_PUBLIC_MODEL_QUERYDATASERVICEREQUEST_H_
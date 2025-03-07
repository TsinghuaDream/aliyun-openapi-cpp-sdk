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

#ifndef ALIBABACLOUD_CCC_MODEL_CREATEINSTANCEREQUEST_H_
#define ALIBABACLOUD_CCC_MODEL_CREATEINSTANCEREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/ccc/CCCExport.h>

namespace AlibabaCloud
{
	namespace CCC
	{
		namespace Model
		{
			class ALIBABACLOUD_CCC_EXPORT CreateInstanceRequest : public RpcServiceRequest
			{

			public:
				CreateInstanceRequest();
				~CreateInstanceRequest();

				std::string getAdminRamIdList()const;
				void setAdminRamIdList(const std::string& adminRamIdList);
				std::string getDomainName()const;
				void setDomainName(const std::string& domainName);
				std::string getDescription()const;
				void setDescription(const std::string& description);
				std::string getNumberList()const;
				void setNumberList(const std::string& numberList);
				std::string getName()const;
				void setName(const std::string& name);

            private:
				std::string adminRamIdList_;
				std::string domainName_;
				std::string description_;
				std::string numberList_;
				std::string name_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CCC_MODEL_CREATEINSTANCEREQUEST_H_
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

#ifndef ALIBABACLOUD_SAS_MODEL_LISTVULAUTOREPAIRCONFIGREQUEST_H_
#define ALIBABACLOUD_SAS_MODEL_LISTVULAUTOREPAIRCONFIGREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/sas/SasExport.h>

namespace AlibabaCloud
{
	namespace Sas
	{
		namespace Model
		{
			class ALIBABACLOUD_SAS_EXPORT ListVulAutoRepairConfigRequest : public RpcServiceRequest
			{

			public:
				ListVulAutoRepairConfigRequest();
				~ListVulAutoRepairConfigRequest();

				std::string getType()const;
				void setType(const std::string& type);
				std::string getSourceIp()const;
				void setSourceIp(const std::string& sourceIp);
				int getPageSize()const;
				void setPageSize(int pageSize);
				int getCurrentPage()const;
				void setCurrentPage(int currentPage);
				std::string getAliasName()const;
				void setAliasName(const std::string& aliasName);

            private:
				std::string type_;
				std::string sourceIp_;
				int pageSize_;
				int currentPage_;
				std::string aliasName_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_SAS_MODEL_LISTVULAUTOREPAIRCONFIGREQUEST_H_
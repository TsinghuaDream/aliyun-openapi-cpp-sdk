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

#ifndef ALIBABACLOUD_DEVOPS_RDC_MODEL_LISTDEVOPSPROJECTSREQUEST_H_
#define ALIBABACLOUD_DEVOPS_RDC_MODEL_LISTDEVOPSPROJECTSREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/devops-rdc/Devops_rdcExport.h>

namespace AlibabaCloud
{
	namespace Devops_rdc
	{
		namespace Model
		{
			class ALIBABACLOUD_DEVOPS_RDC_EXPORT ListDevopsProjectsRequest : public RpcServiceRequest
			{

			public:
				ListDevopsProjectsRequest();
				~ListDevopsProjectsRequest();

				std::string getSelectBy()const;
				void setSelectBy(const std::string& selectBy);
				int getPageSize()const;
				void setPageSize(int pageSize);
				std::string getOrderBy()const;
				void setOrderBy(const std::string& orderBy);
				std::string getOrgId()const;
				void setOrgId(const std::string& orgId);
				std::string getPageToken()const;
				void setPageToken(const std::string& pageToken);

            private:
				std::string selectBy_;
				int pageSize_;
				std::string orderBy_;
				std::string orgId_;
				std::string pageToken_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DEVOPS_RDC_MODEL_LISTDEVOPSPROJECTSREQUEST_H_
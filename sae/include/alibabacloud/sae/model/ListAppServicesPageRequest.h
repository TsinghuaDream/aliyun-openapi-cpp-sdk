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

#ifndef ALIBABACLOUD_SAE_MODEL_LISTAPPSERVICESPAGEREQUEST_H_
#define ALIBABACLOUD_SAE_MODEL_LISTAPPSERVICESPAGEREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RoaServiceRequest.h>
#include <alibabacloud/sae/SaeExport.h>

namespace AlibabaCloud
{
	namespace Sae
	{
		namespace Model
		{
			class ALIBABACLOUD_SAE_EXPORT ListAppServicesPageRequest : public RoaServiceRequest
			{

			public:
				ListAppServicesPageRequest();
				~ListAppServicesPageRequest();

				std::string getServiceType()const;
				void setServiceType(const std::string& serviceType);
				std::string getAppId()const;
				void setAppId(const std::string& appId);
				int getPageSize()const;
				void setPageSize(int pageSize);
				int getPageNumber()const;
				void setPageNumber(int pageNumber);

            private:
				std::string serviceType_;
				std::string appId_;
				int pageSize_;
				int pageNumber_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_SAE_MODEL_LISTAPPSERVICESPAGEREQUEST_H_
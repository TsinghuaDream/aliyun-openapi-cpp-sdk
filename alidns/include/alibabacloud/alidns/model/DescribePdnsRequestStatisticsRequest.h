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

#ifndef ALIBABACLOUD_ALIDNS_MODEL_DESCRIBEPDNSREQUESTSTATISTICSREQUEST_H_
#define ALIBABACLOUD_ALIDNS_MODEL_DESCRIBEPDNSREQUESTSTATISTICSREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/alidns/AlidnsExport.h>

namespace AlibabaCloud
{
	namespace Alidns
	{
		namespace Model
		{
			class ALIBABACLOUD_ALIDNS_EXPORT DescribePdnsRequestStatisticsRequest : public RpcServiceRequest
			{

			public:
				DescribePdnsRequestStatisticsRequest();
				~DescribePdnsRequestStatisticsRequest();

				std::string getDomainName()const;
				void setDomainName(const std::string& domainName);
				bool getNeedThreatInfo()const;
				void setNeedThreatInfo(bool needThreatInfo);
				std::string getType()const;
				void setType(const std::string& type);
				std::string getStartDate()const;
				void setStartDate(const std::string& startDate);
				long getPageNumber()const;
				void setPageNumber(long pageNumber);
				std::string getEndDate()const;
				void setEndDate(const std::string& endDate);
				long getPageSize()const;
				void setPageSize(long pageSize);
				std::string getSubDomain()const;
				void setSubDomain(const std::string& subDomain);
				std::string getLang()const;
				void setLang(const std::string& lang);

            private:
				std::string domainName_;
				bool needThreatInfo_;
				std::string type_;
				std::string startDate_;
				long pageNumber_;
				std::string endDate_;
				long pageSize_;
				std::string subDomain_;
				std::string lang_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ALIDNS_MODEL_DESCRIBEPDNSREQUESTSTATISTICSREQUEST_H_
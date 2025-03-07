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

#ifndef ALIBABACLOUD_SAS_MODEL_DESCRIBEGROUPEDVULREQUEST_H_
#define ALIBABACLOUD_SAS_MODEL_DESCRIBEGROUPEDVULREQUEST_H_

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
			class ALIBABACLOUD_SAS_EXPORT DescribeGroupedVulRequest : public RpcServiceRequest
			{

			public:
				DescribeGroupedVulRequest();
				~DescribeGroupedVulRequest();

				std::string getStatusList()const;
				void setStatusList(const std::string& statusList);
				std::string getTargetType()const;
				void setTargetType(const std::string& targetType);
				int getMinScore()const;
				void setMinScore(int minScore);
				std::string getAttachTypes()const;
				void setAttachTypes(const std::string& attachTypes);
				std::string getType()const;
				void setType(const std::string& type);
				std::string getContainerFieldName()const;
				void setContainerFieldName(const std::string& containerFieldName);
				std::string getSourceIp()const;
				void setSourceIp(const std::string& sourceIp);
				std::string getContainerFieldValue()const;
				void setContainerFieldValue(const std::string& containerFieldValue);
				int getPageSize()const;
				void setPageSize(int pageSize);
				std::string getLang()const;
				void setLang(const std::string& lang);
				std::string getGroupId()const;
				void setGroupId(const std::string& groupId);
				std::string getDealed()const;
				void setDealed(const std::string& dealed);
				int getCurrentPage()const;
				void setCurrentPage(int currentPage);
				std::string getClusterId()const;
				void setClusterId(const std::string& clusterId);
				std::string getAliasName()const;
				void setAliasName(const std::string& aliasName);
				std::string getSearchTags()const;
				void setSearchTags(const std::string& searchTags);
				std::string getNecessity()const;
				void setNecessity(const std::string& necessity);
				std::string getUuids()const;
				void setUuids(const std::string& uuids);

            private:
				std::string statusList_;
				std::string targetType_;
				int minScore_;
				std::string attachTypes_;
				std::string type_;
				std::string containerFieldName_;
				std::string sourceIp_;
				std::string containerFieldValue_;
				int pageSize_;
				std::string lang_;
				std::string groupId_;
				std::string dealed_;
				int currentPage_;
				std::string clusterId_;
				std::string aliasName_;
				std::string searchTags_;
				std::string necessity_;
				std::string uuids_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_SAS_MODEL_DESCRIBEGROUPEDVULREQUEST_H_
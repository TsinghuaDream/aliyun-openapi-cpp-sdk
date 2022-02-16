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

#ifndef ALIBABACLOUD_EMR_MODEL_LISTAPPLICATIONCONFIGHISTORYREQUEST_H_
#define ALIBABACLOUD_EMR_MODEL_LISTAPPLICATIONCONFIGHISTORYREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/emr/EmrExport.h>

namespace AlibabaCloud
{
	namespace Emr
	{
		namespace Model
		{
			class ALIBABACLOUD_EMR_EXPORT ListApplicationConfigHistoryRequest : public RpcServiceRequest
			{

			public:
				ListApplicationConfigHistoryRequest();
				~ListApplicationConfigHistoryRequest();

				std::string getModifier()const;
				void setModifier(const std::string& modifier);
				std::string getConfigVersion()const;
				void setConfigVersion(const std::string& configVersion);
				std::string getNodeId()const;
				void setNodeId(const std::string& nodeId);
				std::string getConfigFileName()const;
				void setConfigFileName(const std::string& configFileName);
				std::string getNodeGroupId()const;
				void setNodeGroupId(const std::string& nodeGroupId);
				int getMaxResults()const;
				void setMaxResults(int maxResults);
				std::string getSystemDebug()const;
				void setSystemDebug(const std::string& systemDebug);
				std::string getClientToken()const;
				void setClientToken(const std::string& clientToken);
				std::string getDescription()const;
				void setDescription(const std::string& description);
				std::string getNextToken()const;
				void setNextToken(const std::string& nextToken);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				std::string getClusterId()const;
				void setClusterId(const std::string& clusterId);
				std::string getConfigItemKey()const;
				void setConfigItemKey(const std::string& configItemKey);
				std::string getApplicationName()const;
				void setApplicationName(const std::string& applicationName);

            private:
				std::string modifier_;
				std::string configVersion_;
				std::string nodeId_;
				std::string configFileName_;
				std::string nodeGroupId_;
				int maxResults_;
				std::string systemDebug_;
				std::string clientToken_;
				std::string description_;
				std::string nextToken_;
				std::string regionId_;
				std::string clusterId_;
				std::string configItemKey_;
				std::string applicationName_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_EMR_MODEL_LISTAPPLICATIONCONFIGHISTORYREQUEST_H_
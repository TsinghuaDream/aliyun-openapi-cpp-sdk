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

#ifndef ALIBABACLOUD_EMR_MODEL_INCREASECLUSTERDISKREQUEST_H_
#define ALIBABACLOUD_EMR_MODEL_INCREASECLUSTERDISKREQUEST_H_

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
			class ALIBABACLOUD_EMR_EXPORT IncreaseClusterDiskRequest : public RpcServiceRequest
			{

			public:
				IncreaseClusterDiskRequest();
				~IncreaseClusterDiskRequest();

				std::string getClientToken()const;
				void setClientToken(const std::string& clientToken);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				Array getNodeGroups()const;
				void setNodeGroups(const Array& nodeGroups);
				bool getRollingRestart()const;
				void setRollingRestart(bool rollingRestart);
				std::string getClusterId()const;
				void setClusterId(const std::string& clusterId);
				std::string getNodeGroupId()const;
				void setNodeGroupId(const std::string& nodeGroupId);
				int getDataDiskSize()const;
				void setDataDiskSize(int dataDiskSize);
				std::string getSystemDebug()const;
				void setSystemDebug(const std::string& systemDebug);

            private:
				std::string clientToken_;
				std::string regionId_;
				Array nodeGroups_;
				bool rollingRestart_;
				std::string clusterId_;
				std::string nodeGroupId_;
				int dataDiskSize_;
				std::string systemDebug_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_EMR_MODEL_INCREASECLUSTERDISKREQUEST_H_
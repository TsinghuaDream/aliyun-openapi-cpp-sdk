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

#ifndef ALIBABACLOUD_EMR_MODEL_UPDATEAPPLICATIONCONFIGSREQUEST_H_
#define ALIBABACLOUD_EMR_MODEL_UPDATEAPPLICATIONCONFIGSREQUEST_H_

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
			class ALIBABACLOUD_EMR_EXPORT UpdateApplicationConfigsRequest : public RpcServiceRequest
			{

			public:
				UpdateApplicationConfigsRequest();
				~UpdateApplicationConfigsRequest();

				Array getConfigs()const;
				void setConfigs(const Array& configs);
				std::string getClientToken()const;
				void setClientToken(const std::string& clientToken);
				std::string getDescription()const;
				void setDescription(const std::string& description);
				bool getRefreshNodeConfig()const;
				void setRefreshNodeConfig(bool refreshNodeConfig);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				Array getApplicationConfigs()const;
				void setApplicationConfigs(const Array& applicationConfigs);
				std::string getClusterId()const;
				void setClusterId(const std::string& clusterId);
				bool getRefreshConfig()const;
				void setRefreshConfig(bool refreshConfig);
				std::string getApplicationName()const;
				void setApplicationName(const std::string& applicationName);
				std::string getSystemDebug()const;
				void setSystemDebug(const std::string& systemDebug);

            private:
				Array configs_;
				std::string clientToken_;
				std::string description_;
				bool refreshNodeConfig_;
				std::string regionId_;
				Array applicationConfigs_;
				std::string clusterId_;
				bool refreshConfig_;
				std::string applicationName_;
				std::string systemDebug_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_EMR_MODEL_UPDATEAPPLICATIONCONFIGSREQUEST_H_
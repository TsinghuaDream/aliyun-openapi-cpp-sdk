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

#ifndef ALIBABACLOUD_SAS_MODEL_INSTALLCLOUDMONITORREQUEST_H_
#define ALIBABACLOUD_SAS_MODEL_INSTALLCLOUDMONITORREQUEST_H_

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
			class ALIBABACLOUD_SAS_EXPORT InstallCloudMonitorRequest : public RpcServiceRequest
			{

			public:
				InstallCloudMonitorRequest();
				~InstallCloudMonitorRequest();

				std::string getAgentAccessKey()const;
				void setAgentAccessKey(const std::string& agentAccessKey);
				std::string getAgentSecretKey()const;
				void setAgentSecretKey(const std::string& agentSecretKey);
				std::string getSourceIp()const;
				void setSourceIp(const std::string& sourceIp);
				std::vector<std::string> getUuidList()const;
				void setUuidList(const std::vector<std::string>& uuidList);
				std::string getArgusVersion()const;
				void setArgusVersion(const std::string& argusVersion);
				std::vector<std::string> getInstanceIdList()const;
				void setInstanceIdList(const std::vector<std::string>& instanceIdList);

            private:
				std::string agentAccessKey_;
				std::string agentSecretKey_;
				std::string sourceIp_;
				std::vector<std::string> uuidList_;
				std::string argusVersion_;
				std::vector<std::string> instanceIdList_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_SAS_MODEL_INSTALLCLOUDMONITORREQUEST_H_
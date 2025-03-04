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

#ifndef ALIBABACLOUD_NAS_MODEL_CREATEMOUNTTARGETREQUEST_H_
#define ALIBABACLOUD_NAS_MODEL_CREATEMOUNTTARGETREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/nas/NASExport.h>

namespace AlibabaCloud
{
	namespace NAS
	{
		namespace Model
		{
			class ALIBABACLOUD_NAS_EXPORT CreateMountTargetRequest : public RpcServiceRequest
			{

			public:
				CreateMountTargetRequest();
				~CreateMountTargetRequest();

				std::string getSecurityGroupId()const;
				void setSecurityGroupId(const std::string& securityGroupId);
				bool getEnableIpv6()const;
				void setEnableIpv6(bool enableIpv6);
				std::string getNetworkType()const;
				void setNetworkType(const std::string& networkType);
				std::string getFileSystemId()const;
				void setFileSystemId(const std::string& fileSystemId);
				bool getDryRun()const;
				void setDryRun(bool dryRun);
				std::string getAccessGroupName()const;
				void setAccessGroupName(const std::string& accessGroupName);
				std::string getVSwitchId()const;
				void setVSwitchId(const std::string& vSwitchId);
				std::string getVpcId()const;
				void setVpcId(const std::string& vpcId);

            private:
				std::string securityGroupId_;
				bool enableIpv6_;
				std::string networkType_;
				std::string fileSystemId_;
				bool dryRun_;
				std::string accessGroupName_;
				std::string vSwitchId_;
				std::string vpcId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_NAS_MODEL_CREATEMOUNTTARGETREQUEST_H_
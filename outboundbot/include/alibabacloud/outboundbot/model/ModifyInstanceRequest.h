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

#ifndef ALIBABACLOUD_OUTBOUNDBOT_MODEL_MODIFYINSTANCEREQUEST_H_
#define ALIBABACLOUD_OUTBOUNDBOT_MODEL_MODIFYINSTANCEREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/outboundbot/OutboundBotExport.h>

namespace AlibabaCloud
{
	namespace OutboundBot
	{
		namespace Model
		{
			class ALIBABACLOUD_OUTBOUNDBOT_EXPORT ModifyInstanceRequest : public RpcServiceRequest
			{

			public:
				ModifyInstanceRequest();
				~ModifyInstanceRequest();

				int getMaxConcurrentConversation()const;
				void setMaxConcurrentConversation(int maxConcurrentConversation);
				std::string getSecretKey()const;
				void setSecretKey(const std::string& secretKey);
				std::string getEndpoint()const;
				void setEndpoint(const std::string& endpoint);
				std::vector<std::string> getCallingNumber()const;
				void setCallingNumber(const std::vector<std::string>& callingNumber);
				std::string getInstanceId()const;
				void setInstanceId(const std::string& instanceId);
				std::string getInstanceName()const;
				void setInstanceName(const std::string& instanceName);
				std::string getCallCenterInstanceId()const;
				void setCallCenterInstanceId(const std::string& callCenterInstanceId);
				std::string getAccessKey()const;
				void setAccessKey(const std::string& accessKey);
				std::string getInstanceDescription()const;
				void setInstanceDescription(const std::string& instanceDescription);
				std::string getNluServiceType()const;
				void setNluServiceType(const std::string& nluServiceType);

            private:
				int maxConcurrentConversation_;
				std::string secretKey_;
				std::string endpoint_;
				std::vector<std::string> callingNumber_;
				std::string instanceId_;
				std::string instanceName_;
				std::string callCenterInstanceId_;
				std::string accessKey_;
				std::string instanceDescription_;
				std::string nluServiceType_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_OUTBOUNDBOT_MODEL_MODIFYINSTANCEREQUEST_H_
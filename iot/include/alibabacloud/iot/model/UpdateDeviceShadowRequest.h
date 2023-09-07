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

#ifndef ALIBABACLOUD_IOT_MODEL_UPDATEDEVICESHADOWREQUEST_H_
#define ALIBABACLOUD_IOT_MODEL_UPDATEDEVICESHADOWREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/iot/IotExport.h>

namespace AlibabaCloud
{
	namespace Iot
	{
		namespace Model
		{
			class ALIBABACLOUD_IOT_EXPORT UpdateDeviceShadowRequest : public RpcServiceRequest
			{

			public:
				UpdateDeviceShadowRequest();
				~UpdateDeviceShadowRequest();

				std::string getShadowMessage()const;
				void setShadowMessage(const std::string& shadowMessage);
				std::string getRealTenantId()const;
				void setRealTenantId(const std::string& realTenantId);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);
				std::string getRealTripartiteKey()const;
				void setRealTripartiteKey(const std::string& realTripartiteKey);
				std::string getIotInstanceId()const;
				void setIotInstanceId(const std::string& iotInstanceId);
				std::string getProductKey()const;
				void setProductKey(const std::string& productKey);
				bool getDeltaUpdate()const;
				void setDeltaUpdate(bool deltaUpdate);
				std::string getApiProduct()const;
				void setApiProduct(const std::string& apiProduct);
				std::string getApiRevision()const;
				void setApiRevision(const std::string& apiRevision);
				std::string getDeviceName()const;
				void setDeviceName(const std::string& deviceName);

            private:
				std::string shadowMessage_;
				std::string realTenantId_;
				std::string accessKeyId_;
				std::string realTripartiteKey_;
				std::string iotInstanceId_;
				std::string productKey_;
				bool deltaUpdate_;
				std::string apiProduct_;
				std::string apiRevision_;
				std::string deviceName_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_IOT_MODEL_UPDATEDEVICESHADOWREQUEST_H_
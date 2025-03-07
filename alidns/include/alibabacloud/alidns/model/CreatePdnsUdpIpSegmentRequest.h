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

#ifndef ALIBABACLOUD_ALIDNS_MODEL_CREATEPDNSUDPIPSEGMENTREQUEST_H_
#define ALIBABACLOUD_ALIDNS_MODEL_CREATEPDNSUDPIPSEGMENTREQUEST_H_

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
			class ALIBABACLOUD_ALIDNS_EXPORT CreatePdnsUdpIpSegmentRequest : public RpcServiceRequest
			{

			public:
				CreatePdnsUdpIpSegmentRequest();
				~CreatePdnsUdpIpSegmentRequest();

				std::string getIp()const;
				void setIp(const std::string& ip);
				std::string getName()const;
				void setName(const std::string& name);
				std::string getLang()const;
				void setLang(const std::string& lang);

            private:
				std::string ip_;
				std::string name_;
				std::string lang_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ALIDNS_MODEL_CREATEPDNSUDPIPSEGMENTREQUEST_H_
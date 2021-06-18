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

#ifndef ALIBABACLOUD_SAS_MODEL_MODIFYSTRATEGYREQUEST_H_
#define ALIBABACLOUD_SAS_MODEL_MODIFYSTRATEGYREQUEST_H_

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
			class ALIBABACLOUD_SAS_EXPORT ModifyStrategyRequest : public RpcServiceRequest
			{

			public:
				ModifyStrategyRequest();
				~ModifyStrategyRequest();

				std::string getCycleDays()const;
				void setCycleDays(const std::string& cycleDays);
				std::string getRiskSubTypeName()const;
				void setRiskSubTypeName(const std::string& riskSubTypeName);
				std::string getSourceIp()const;
				void setSourceIp(const std::string& sourceIp);
				std::string getId()const;
				void setId(const std::string& id);
				std::string getCycleStartTime()const;
				void setCycleStartTime(const std::string& cycleStartTime);
				std::string getName()const;
				void setName(const std::string& name);

            private:
				std::string cycleDays_;
				std::string riskSubTypeName_;
				std::string sourceIp_;
				std::string id_;
				std::string cycleStartTime_;
				std::string name_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_SAS_MODEL_MODIFYSTRATEGYREQUEST_H_
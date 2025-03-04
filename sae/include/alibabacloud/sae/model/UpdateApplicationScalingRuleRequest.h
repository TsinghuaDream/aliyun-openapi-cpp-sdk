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

#ifndef ALIBABACLOUD_SAE_MODEL_UPDATEAPPLICATIONSCALINGRULEREQUEST_H_
#define ALIBABACLOUD_SAE_MODEL_UPDATEAPPLICATIONSCALINGRULEREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RoaServiceRequest.h>
#include <alibabacloud/sae/SaeExport.h>

namespace AlibabaCloud
{
	namespace Sae
	{
		namespace Model
		{
			class ALIBABACLOUD_SAE_EXPORT UpdateApplicationScalingRuleRequest : public RoaServiceRequest
			{

			public:
				UpdateApplicationScalingRuleRequest();
				~UpdateApplicationScalingRuleRequest();

				std::string getScalingRuleName()const;
				void setScalingRuleName(const std::string& scalingRuleName);
				int getMinReadyInstances()const;
				void setMinReadyInstances(int minReadyInstances);
				std::string getScalingRuleTimer()const;
				void setScalingRuleTimer(const std::string& scalingRuleTimer);
				std::string getScalingRuleMetric()const;
				void setScalingRuleMetric(const std::string& scalingRuleMetric);
				std::string getAppId()const;
				void setAppId(const std::string& appId);
				int getMinReadyInstanceRatio()const;
				void setMinReadyInstanceRatio(int minReadyInstanceRatio);

            private:
				std::string scalingRuleName_;
				int minReadyInstances_;
				std::string scalingRuleTimer_;
				std::string scalingRuleMetric_;
				std::string appId_;
				int minReadyInstanceRatio_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_SAE_MODEL_UPDATEAPPLICATIONSCALINGRULEREQUEST_H_
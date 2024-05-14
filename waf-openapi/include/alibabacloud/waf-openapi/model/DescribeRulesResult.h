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

#ifndef ALIBABACLOUD_WAF_OPENAPI_MODEL_DESCRIBERULESRESULT_H_
#define ALIBABACLOUD_WAF_OPENAPI_MODEL_DESCRIBERULESRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/waf-openapi/Waf_openapiExport.h>

namespace AlibabaCloud
{
	namespace Waf_openapi
	{
		namespace Model
		{
			class ALIBABACLOUD_WAF_OPENAPI_EXPORT DescribeRulesResult : public ServiceResult
			{
			public:
				struct RulesItem
				{
					int applicationType;
					std::string description;
					int protectionType;
					long ruleId;
					long updateTime;
					std::string cveId;
					int riskLevel;
					std::string ruleName;
					std::string cveUrl;
				};


				DescribeRulesResult();
				explicit DescribeRulesResult(const std::string &payload);
				~DescribeRulesResult();
				int getTotalCount()const;
				std::string getRuleGroupTemplateId()const;
				std::string getRuleGroupName()const;
				long getIsSubscribe()const;
				std::vector<RulesItem> getRules()const;
				std::string getRuleGroupTemplateName()const;

			protected:
				void parse(const std::string &payload);
			private:
				int totalCount_;
				std::string ruleGroupTemplateId_;
				std::string ruleGroupName_;
				long isSubscribe_;
				std::vector<RulesItem> rules_;
				std::string ruleGroupTemplateName_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_WAF_OPENAPI_MODEL_DESCRIBERULESRESULT_H_
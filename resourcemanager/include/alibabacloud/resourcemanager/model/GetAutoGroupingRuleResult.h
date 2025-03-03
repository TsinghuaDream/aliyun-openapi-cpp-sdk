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

#ifndef ALIBABACLOUD_RESOURCEMANAGER_MODEL_GETAUTOGROUPINGRULERESULT_H_
#define ALIBABACLOUD_RESOURCEMANAGER_MODEL_GETAUTOGROUPINGRULERESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/resourcemanager/ResourceManagerExport.h>

namespace AlibabaCloud
{
	namespace ResourceManager
	{
		namespace Model
		{
			class ALIBABACLOUD_RESOURCEMANAGER_EXPORT GetAutoGroupingRuleResult : public ServiceResult
			{
			public:
				struct Rule
				{
					struct RuleContent
					{
						std::string autoGroupingScopeCondition;
						std::string ruleContentId;
						std::string targetResourceGroupCondition;
					};
					std::string modifyTime;
					std::string excludeResourceGroupIdsScope;
					std::string excludeResourceIdsScope;
					std::string excludeResourceTypesScope;
					std::string resourceIdsScope;
					std::vector<RuleContent> ruleContents;
					std::string createTime;
					std::string ruleId;
					std::string ruleType;
					std::string excludeRegionIdsScope;
					std::string regionIdsScope;
					std::string resourceGroupIdsScope;
					std::string ruleDesc;
					std::string resourceTypesScope;
					std::string ruleName;
				};


				GetAutoGroupingRuleResult();
				explicit GetAutoGroupingRuleResult(const std::string &payload);
				~GetAutoGroupingRuleResult();
				Rule getRule()const;

			protected:
				void parse(const std::string &payload);
			private:
				Rule rule_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_RESOURCEMANAGER_MODEL_GETAUTOGROUPINGRULERESULT_H_
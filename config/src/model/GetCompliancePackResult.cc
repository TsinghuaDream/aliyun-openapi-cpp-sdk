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

#include <alibabacloud/config/model/GetCompliancePackResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Config;
using namespace AlibabaCloud::Config::Model;

GetCompliancePackResult::GetCompliancePackResult() :
	ServiceResult()
{}

GetCompliancePackResult::GetCompliancePackResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetCompliancePackResult::~GetCompliancePackResult()
{}

void GetCompliancePackResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto compliancePackNode = value["CompliancePack"];
	if(!compliancePackNode["Status"].isNull())
		compliancePack_.status = compliancePackNode["Status"].asString();
	if(!compliancePackNode["CompliancePackId"].isNull())
		compliancePack_.compliancePackId = compliancePackNode["CompliancePackId"].asString();
	if(!compliancePackNode["RiskLevel"].isNull())
		compliancePack_.riskLevel = std::stoi(compliancePackNode["RiskLevel"].asString());
	if(!compliancePackNode["Description"].isNull())
		compliancePack_.description = compliancePackNode["Description"].asString();
	if(!compliancePackNode["CompliancePackName"].isNull())
		compliancePack_.compliancePackName = compliancePackNode["CompliancePackName"].asString();
	if(!compliancePackNode["AccountId"].isNull())
		compliancePack_.accountId = std::stol(compliancePackNode["AccountId"].asString());
	if(!compliancePackNode["CompliancePackTemplateId"].isNull())
		compliancePack_.compliancePackTemplateId = compliancePackNode["CompliancePackTemplateId"].asString();
	if(!compliancePackNode["CreateTimestamp"].isNull())
		compliancePack_.createTimestamp = std::stol(compliancePackNode["CreateTimestamp"].asString());
	auto allConfigRulesNode = compliancePackNode["ConfigRules"]["ConfigRulesItem"];
	for (auto compliancePackNodeConfigRulesConfigRulesItem : allConfigRulesNode)
	{
		CompliancePack::ConfigRulesItem configRulesItemObject;
		if(!compliancePackNodeConfigRulesConfigRulesItem["ManagedRuleIdentifier"].isNull())
			configRulesItemObject.managedRuleIdentifier = compliancePackNodeConfigRulesConfigRulesItem["ManagedRuleIdentifier"].asString();
		if(!compliancePackNodeConfigRulesConfigRulesItem["ConfigRuleName"].isNull())
			configRulesItemObject.configRuleName = compliancePackNodeConfigRulesConfigRulesItem["ConfigRuleName"].asString();
		if(!compliancePackNodeConfigRulesConfigRulesItem["ConfigRuleId"].isNull())
			configRulesItemObject.configRuleId = compliancePackNodeConfigRulesConfigRulesItem["ConfigRuleId"].asString();
		if(!compliancePackNodeConfigRulesConfigRulesItem["Description"].isNull())
			configRulesItemObject.description = compliancePackNodeConfigRulesConfigRulesItem["Description"].asString();
		if(!compliancePackNodeConfigRulesConfigRulesItem["RiskLevel"].isNull())
			configRulesItemObject.riskLevel = std::stoi(compliancePackNodeConfigRulesConfigRulesItem["RiskLevel"].asString());
		auto allConfigRuleParametersNode = compliancePackNodeConfigRulesConfigRulesItem["ConfigRuleParameters"]["ConfigRuleParametersItem"];
		for (auto compliancePackNodeConfigRulesConfigRulesItemConfigRuleParametersConfigRuleParametersItem : allConfigRuleParametersNode)
		{
			CompliancePack::ConfigRulesItem::ConfigRuleParametersItem configRuleParametersObject;
			if(!compliancePackNodeConfigRulesConfigRulesItemConfigRuleParametersConfigRuleParametersItem["Required"].isNull())
				configRuleParametersObject.required = compliancePackNodeConfigRulesConfigRulesItemConfigRuleParametersConfigRuleParametersItem["Required"].asString() == "true";
			if(!compliancePackNodeConfigRulesConfigRulesItemConfigRuleParametersConfigRuleParametersItem["ParameterName"].isNull())
				configRuleParametersObject.parameterName = compliancePackNodeConfigRulesConfigRulesItemConfigRuleParametersConfigRuleParametersItem["ParameterName"].asString();
			if(!compliancePackNodeConfigRulesConfigRulesItemConfigRuleParametersConfigRuleParametersItem["ParameterValue"].isNull())
				configRuleParametersObject.parameterValue = compliancePackNodeConfigRulesConfigRulesItemConfigRuleParametersConfigRuleParametersItem["ParameterValue"].asString();
			configRulesItemObject.configRuleParameters.push_back(configRuleParametersObject);
		}
		compliancePack_.configRules.push_back(configRulesItemObject);
	}

}

GetCompliancePackResult::CompliancePack GetCompliancePackResult::getCompliancePack()const
{
	return compliancePack_;
}


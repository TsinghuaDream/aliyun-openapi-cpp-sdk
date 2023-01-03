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

#include <alibabacloud/eflo/model/GetSubnetResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Eflo;
using namespace AlibabaCloud::Eflo::Model;

GetSubnetResult::GetSubnetResult() :
	ServiceResult()
{}

GetSubnetResult::GetSubnetResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetSubnetResult::~GetSubnetResult()
{}

void GetSubnetResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto contentNode = value["Content"];
	if(!contentNode["Id"].isNull())
		content_.id = std::stol(contentNode["Id"].asString());
	if(!contentNode["GmtCreate"].isNull())
		content_.gmtCreate = contentNode["GmtCreate"].asString();
	if(!contentNode["GmtModified"].isNull())
		content_.gmtModified = contentNode["GmtModified"].asString();
	if(!contentNode["TenantId"].isNull())
		content_.tenantId = contentNode["TenantId"].asString();
	if(!contentNode["RegionId"].isNull())
		content_.regionId = contentNode["RegionId"].asString();
	if(!contentNode["ZoneId"].isNull())
		content_.zoneId = contentNode["ZoneId"].asString();
	if(!contentNode["SubnetId"].isNull())
		content_.subnetId = contentNode["SubnetId"].asString();
	if(!contentNode["Name"].isNull())
		content_.name = contentNode["Name"].asString();
	if(!contentNode["Cidr"].isNull())
		content_.cidr = contentNode["Cidr"].asString();
	if(!contentNode["Description"].isNull())
		content_.description = contentNode["Description"].asString();
	if(!contentNode["VpdId"].isNull())
		content_.vpdId = contentNode["VpdId"].asString();
	if(!contentNode["Type"].isNull())
		content_.type = contentNode["Type"].asString();
	if(!contentNode["Status"].isNull())
		content_.status = contentNode["Status"].asString();
	if(!contentNode["Message"].isNull())
		content_.message = contentNode["Message"].asString();
	if(!contentNode["NcCount"].isNull())
		content_.ncCount = std::stol(contentNode["NcCount"].asString());
	if(!contentNode["LbCount"].isNull())
		content_.lbCount = std::stol(contentNode["LbCount"].asString());
	auto vpdBaseInfoNode = contentNode["VpdBaseInfo"];
	if(!vpdBaseInfoNode["VpdId"].isNull())
		content_.vpdBaseInfo.vpdId = vpdBaseInfoNode["VpdId"].asString();
	if(!vpdBaseInfoNode["Name"].isNull())
		content_.vpdBaseInfo.name = vpdBaseInfoNode["Name"].asString();
	if(!vpdBaseInfoNode["Cidr"].isNull())
		content_.vpdBaseInfo.cidr = vpdBaseInfoNode["Cidr"].asString();
	if(!vpdBaseInfoNode["GmtCreate"].isNull())
		content_.vpdBaseInfo.gmtCreate = vpdBaseInfoNode["GmtCreate"].asString();
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string GetSubnetResult::getMessage()const
{
	return message_;
}

GetSubnetResult::Content GetSubnetResult::getContent()const
{
	return content_;
}

int GetSubnetResult::getCode()const
{
	return code_;
}


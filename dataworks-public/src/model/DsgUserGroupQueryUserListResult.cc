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

#include <alibabacloud/dataworks-public/model/DsgUserGroupQueryUserListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dataworks_public;
using namespace AlibabaCloud::Dataworks_public::Model;

DsgUserGroupQueryUserListResult::DsgUserGroupQueryUserListResult() :
	ServiceResult()
{}

DsgUserGroupQueryUserListResult::DsgUserGroupQueryUserListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DsgUserGroupQueryUserListResult::~DsgUserGroupQueryUserListResult()
{}

void DsgUserGroupQueryUserListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["Datas"];
	for (auto valueDataDatas : allDataNode)
	{
		Datas dataObject;
		if(!valueDataDatas["AccountName"].isNull())
			dataObject.accountName = valueDataDatas["AccountName"].asString();
		if(!valueDataDatas["YunAccount"].isNull())
			dataObject.yunAccount = valueDataDatas["YunAccount"].asString();
		if(!valueDataDatas["AccountType"].isNull())
			dataObject.accountType = std::stoi(valueDataDatas["AccountType"].asString());
		if(!valueDataDatas["BaseId"].isNull())
			dataObject.baseId = valueDataDatas["BaseId"].asString();
		if(!valueDataDatas["ParentAccountId"].isNull())
			dataObject.parentAccountId = valueDataDatas["ParentAccountId"].asString();
		data_.push_back(dataObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());

}

int DsgUserGroupQueryUserListResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

std::vector<DsgUserGroupQueryUserListResult::Datas> DsgUserGroupQueryUserListResult::getData()const
{
	return data_;
}

std::string DsgUserGroupQueryUserListResult::getErrorCode()const
{
	return errorCode_;
}

std::string DsgUserGroupQueryUserListResult::getErrorMessage()const
{
	return errorMessage_;
}

bool DsgUserGroupQueryUserListResult::getSuccess()const
{
	return success_;
}


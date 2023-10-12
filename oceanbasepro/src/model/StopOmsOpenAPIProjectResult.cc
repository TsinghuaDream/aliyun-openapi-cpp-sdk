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

#include <alibabacloud/oceanbasepro/model/StopOmsOpenAPIProjectResult.h>
#include <json/json.h>

using namespace AlibabaCloud::OceanBasePro;
using namespace AlibabaCloud::OceanBasePro::Model;

StopOmsOpenAPIProjectResult::StopOmsOpenAPIProjectResult() :
	ServiceResult()
{}

StopOmsOpenAPIProjectResult::StopOmsOpenAPIProjectResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

StopOmsOpenAPIProjectResult::~StopOmsOpenAPIProjectResult()
{}

void StopOmsOpenAPIProjectResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto errorDetailNode = value["ErrorDetail"];
	if(!errorDetailNode["Code"].isNull())
		errorDetail_.code = errorDetailNode["Code"].asString();
	if(!errorDetailNode["Level"].isNull())
		errorDetail_.level = errorDetailNode["Level"].asString();
	if(!errorDetailNode["Message"].isNull())
		errorDetail_.message = errorDetailNode["Message"].asString();
	if(!errorDetailNode["Proposal"].isNull())
		errorDetail_.proposal = errorDetailNode["Proposal"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Advice"].isNull())
		advice_ = value["Advice"].asString();
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stol(value["TotalCount"].asString());
	if(!value["Cost"].isNull())
		cost_ = value["Cost"].asString();
	if(!value["Data"].isNull())
		data_ = value["Data"].asString() == "true";

}

StopOmsOpenAPIProjectResult::ErrorDetail StopOmsOpenAPIProjectResult::getErrorDetail()const
{
	return errorDetail_;
}

long StopOmsOpenAPIProjectResult::getTotalCount()const
{
	return totalCount_;
}

std::string StopOmsOpenAPIProjectResult::getMessage()const
{
	return message_;
}

int StopOmsOpenAPIProjectResult::getPageSize()const
{
	return pageSize_;
}

int StopOmsOpenAPIProjectResult::getPageNumber()const
{
	return pageNumber_;
}

bool StopOmsOpenAPIProjectResult::getData()const
{
	return data_;
}

std::string StopOmsOpenAPIProjectResult::getAdvice()const
{
	return advice_;
}

std::string StopOmsOpenAPIProjectResult::getCode()const
{
	return code_;
}

std::string StopOmsOpenAPIProjectResult::getCost()const
{
	return cost_;
}

bool StopOmsOpenAPIProjectResult::getSuccess()const
{
	return success_;
}


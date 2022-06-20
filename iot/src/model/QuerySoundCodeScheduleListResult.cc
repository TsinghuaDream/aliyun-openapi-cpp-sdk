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

#include <alibabacloud/iot/model/QuerySoundCodeScheduleListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Iot;
using namespace AlibabaCloud::Iot::Model;

QuerySoundCodeScheduleListResult::QuerySoundCodeScheduleListResult() :
	ServiceResult()
{}

QuerySoundCodeScheduleListResult::QuerySoundCodeScheduleListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QuerySoundCodeScheduleListResult::~QuerySoundCodeScheduleListResult()
{}

void QuerySoundCodeScheduleListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["Total"].isNull())
		data_.total = std::stoi(dataNode["Total"].asString());
	if(!dataNode["PageId"].isNull())
		data_.pageId = std::stoi(dataNode["PageId"].asString());
	if(!dataNode["PageSize"].isNull())
		data_.pageSize = std::stoi(dataNode["PageSize"].asString());
	auto allListNode = dataNode["List"]["Items"];
	for (auto dataNodeListItems : allListNode)
	{
		Data::Items itemsObject;
		if(!dataNodeListItems["ScheduleCode"].isNull())
			itemsObject.scheduleCode = dataNodeListItems["ScheduleCode"].asString();
		if(!dataNodeListItems["Name"].isNull())
			itemsObject.name = dataNodeListItems["Name"].asString();
		if(!dataNodeListItems["Description"].isNull())
			itemsObject.description = dataNodeListItems["Description"].asString();
		if(!dataNodeListItems["GmtCreate"].isNull())
			itemsObject.gmtCreate = std::stol(dataNodeListItems["GmtCreate"].asString());
		if(!dataNodeListItems["Status"].isNull())
			itemsObject.status = dataNodeListItems["Status"].asString();
		if(!dataNodeListItems["StartTime"].isNull())
			itemsObject.startTime = dataNodeListItems["StartTime"].asString();
		if(!dataNodeListItems["EndTime"].isNull())
			itemsObject.endTime = dataNodeListItems["EndTime"].asString();
		if(!dataNodeListItems["StartDate"].isNull())
			itemsObject.startDate = dataNodeListItems["StartDate"].asString();
		if(!dataNodeListItems["EndDate"].isNull())
			itemsObject.endDate = dataNodeListItems["EndDate"].asString();
		if(!dataNodeListItems["OpenType"].isNull())
			itemsObject.openType = dataNodeListItems["OpenType"].asString();
		data_.list.push_back(itemsObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();

}

QuerySoundCodeScheduleListResult::Data QuerySoundCodeScheduleListResult::getData()const
{
	return data_;
}

std::string QuerySoundCodeScheduleListResult::getErrorMessage()const
{
	return errorMessage_;
}

std::string QuerySoundCodeScheduleListResult::getCode()const
{
	return code_;
}

bool QuerySoundCodeScheduleListResult::getSuccess()const
{
	return success_;
}


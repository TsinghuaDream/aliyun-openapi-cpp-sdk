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

#include <alibabacloud/mse/model/ListAlarmItemsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Mse;
using namespace AlibabaCloud::Mse::Model;

ListAlarmItemsResult::ListAlarmItemsResult() :
	ServiceResult()
{}

ListAlarmItemsResult::ListAlarmItemsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListAlarmItemsResult::~ListAlarmItemsResult()
{}

void ListAlarmItemsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["AlarmItem"];
	for (auto valueDataAlarmItem : allDataNode)
	{
		AlarmItem dataObject;
		if(!valueDataAlarmItem["AlarmDesc"].isNull())
			dataObject.alarmDesc = valueDataAlarmItem["AlarmDesc"].asString();
		if(!valueDataAlarmItem["ClusterType"].isNull())
			dataObject.clusterType = valueDataAlarmItem["ClusterType"].asString();
		if(!valueDataAlarmItem["AlarmCode"].isNull())
			dataObject.alarmCode = valueDataAlarmItem["AlarmCode"].asString();
		data_.push_back(dataObject);
	}
	if(!value["HttpCode"].isNull())
		httpCode_ = value["HttpCode"].asString();
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string ListAlarmItemsResult::getHttpCode()const
{
	return httpCode_;
}

int ListAlarmItemsResult::getTotalCount()const
{
	return totalCount_;
}

std::string ListAlarmItemsResult::getMessage()const
{
	return message_;
}

int ListAlarmItemsResult::getPageSize()const
{
	return pageSize_;
}

int ListAlarmItemsResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<ListAlarmItemsResult::AlarmItem> ListAlarmItemsResult::getData()const
{
	return data_;
}

std::string ListAlarmItemsResult::getErrorCode()const
{
	return errorCode_;
}

bool ListAlarmItemsResult::getSuccess()const
{
	return success_;
}


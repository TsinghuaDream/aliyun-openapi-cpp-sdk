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

#include <alibabacloud/ccc/model/SaveRTCStatsV2Result.h>
#include <json/json.h>

using namespace AlibabaCloud::CCC;
using namespace AlibabaCloud::CCC::Model;

SaveRTCStatsV2Result::SaveRTCStatsV2Result() :
	ServiceResult()
{}

SaveRTCStatsV2Result::SaveRTCStatsV2Result(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

SaveRTCStatsV2Result::~SaveRTCStatsV2Result()
{}

void SaveRTCStatsV2Result::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stol(value["HttpStatusCode"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["RowCount"].isNull())
		rowCount_ = std::stol(value["RowCount"].asString());
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["TimeStamp"].isNull())
		timeStamp_ = std::stol(value["TimeStamp"].asString());

}

std::string SaveRTCStatsV2Result::getMessage()const
{
	return message_;
}

long SaveRTCStatsV2Result::getHttpStatusCode()const
{
	return httpStatusCode_;
}

long SaveRTCStatsV2Result::getRowCount()const
{
	return rowCount_;
}

std::string SaveRTCStatsV2Result::getCode()const
{
	return code_;
}

bool SaveRTCStatsV2Result::getSuccess()const
{
	return success_;
}

long SaveRTCStatsV2Result::getTimeStamp()const
{
	return timeStamp_;
}


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

#include <alibabacloud/ccc/model/RemovePhoneNumbersResult.h>
#include <json/json.h>

using namespace AlibabaCloud::CCC;
using namespace AlibabaCloud::CCC::Model;

RemovePhoneNumbersResult::RemovePhoneNumbersResult() :
	ServiceResult()
{}

RemovePhoneNumbersResult::RemovePhoneNumbersResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

RemovePhoneNumbersResult::~RemovePhoneNumbersResult()
{}

void RemovePhoneNumbersResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allFailureList = value["FailureList"]["Failure"];
	for (const auto &item : allFailureList)
		failureList_.push_back(item.asString());
	auto allParams = value["Params"]["Param"];
	for (const auto &item : allParams)
		params_.push_back(item.asString());
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Data"].isNull())
		data_ = value["Data"].asString();

}

std::string RemovePhoneNumbersResult::getMessage()const
{
	return message_;
}

int RemovePhoneNumbersResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

std::vector<std::string> RemovePhoneNumbersResult::getParams()const
{
	return params_;
}

std::vector<std::string> RemovePhoneNumbersResult::getFailureList()const
{
	return failureList_;
}

std::string RemovePhoneNumbersResult::getData()const
{
	return data_;
}

std::string RemovePhoneNumbersResult::getCode()const
{
	return code_;
}


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

#include <alibabacloud/voicenavigator/model/GetInstanceConfigResult.h>
#include <json/json.h>

using namespace AlibabaCloud::VoiceNavigator;
using namespace AlibabaCloud::VoiceNavigator::Model;

GetInstanceConfigResult::GetInstanceConfigResult() :
	ServiceResult()
{}

GetInstanceConfigResult::GetInstanceConfigResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetInstanceConfigResult::~GetInstanceConfigResult()
{}

void GetInstanceConfigResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	auto instanceConfigNode = dataNode["InstanceConfig"];
	if(!instanceConfigNode["MiniPlaybackSystemSwitch"].isNull())
		data_.instanceConfig.miniPlaybackSystemSwitch = instanceConfigNode["MiniPlaybackSystemSwitch"].asString() == "true";
	if(!instanceConfigNode["NewBargeInSystemSwitch"].isNull())
		data_.instanceConfig.newBargeInSystemSwitch = instanceConfigNode["NewBargeInSystemSwitch"].asString() == "true";
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["ErrorMsg"].isNull())
		errorMsg_ = value["ErrorMsg"].asString();

}

int GetInstanceConfigResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

std::string GetInstanceConfigResult::getErrorMsg()const
{
	return errorMsg_;
}

GetInstanceConfigResult::Data GetInstanceConfigResult::getData()const
{
	return data_;
}

std::string GetInstanceConfigResult::getCode()const
{
	return code_;
}

bool GetInstanceConfigResult::getSuccess()const
{
	return success_;
}


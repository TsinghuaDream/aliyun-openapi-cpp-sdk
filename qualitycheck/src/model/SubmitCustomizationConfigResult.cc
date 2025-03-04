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

#include <alibabacloud/qualitycheck/model/SubmitCustomizationConfigResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Qualitycheck;
using namespace AlibabaCloud::Qualitycheck::Model;

SubmitCustomizationConfigResult::SubmitCustomizationConfigResult() :
	ServiceResult()
{}

SubmitCustomizationConfigResult::SubmitCustomizationConfigResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

SubmitCustomizationConfigResult::~SubmitCustomizationConfigResult()
{}

void SubmitCustomizationConfigResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["ModelStatus"].isNull())
		data_.modelStatus = std::stoi(dataNode["ModelStatus"].asString());
	if(!dataNode["ModelName"].isNull())
		data_.modelName = dataNode["ModelName"].asString();
	if(!dataNode["ModelId"].isNull())
		data_.modelId = std::stol(dataNode["ModelId"].asString());
	if(!dataNode["ModeCustomizationId"].isNull())
		data_.modeCustomizationId = dataNode["ModeCustomizationId"].asString();
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string SubmitCustomizationConfigResult::getMessage()const
{
	return message_;
}

SubmitCustomizationConfigResult::Data SubmitCustomizationConfigResult::getData()const
{
	return data_;
}

std::string SubmitCustomizationConfigResult::getCode()const
{
	return code_;
}

bool SubmitCustomizationConfigResult::getSuccess()const
{
	return success_;
}


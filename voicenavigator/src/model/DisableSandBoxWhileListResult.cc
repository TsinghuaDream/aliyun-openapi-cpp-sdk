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

#include <alibabacloud/voicenavigator/model/DisableSandBoxWhileListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::VoiceNavigator;
using namespace AlibabaCloud::VoiceNavigator::Model;

DisableSandBoxWhileListResult::DisableSandBoxWhileListResult() :
	ServiceResult()
{}

DisableSandBoxWhileListResult::DisableSandBoxWhileListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DisableSandBoxWhileListResult::~DisableSandBoxWhileListResult()
{}

void DisableSandBoxWhileListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["Uuid"].isNull())
		uuid_ = value["Uuid"].asString();
	if(!value["PhoneNumber"].isNull())
		phoneNumber_ = value["PhoneNumber"].asString();

}

std::string DisableSandBoxWhileListResult::getUuid()const
{
	return uuid_;
}

std::string DisableSandBoxWhileListResult::getPhoneNumber()const
{
	return phoneNumber_;
}


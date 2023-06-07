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

#include <alibabacloud/swas-open/model/DescribeInstancePasswordsSettingResult.h>
#include <json/json.h>

using namespace AlibabaCloud::SWAS_OPEN;
using namespace AlibabaCloud::SWAS_OPEN::Model;

DescribeInstancePasswordsSettingResult::DescribeInstancePasswordsSettingResult() :
	ServiceResult()
{}

DescribeInstancePasswordsSettingResult::DescribeInstancePasswordsSettingResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeInstancePasswordsSettingResult::~DescribeInstancePasswordsSettingResult()
{}

void DescribeInstancePasswordsSettingResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["VncPasswordSetting"].isNull())
		vncPasswordSetting_ = value["VncPasswordSetting"].asString() == "true";
	if(!value["InstancePasswordSetting"].isNull())
		instancePasswordSetting_ = value["InstancePasswordSetting"].asString() == "true";

}

bool DescribeInstancePasswordsSettingResult::getVncPasswordSetting()const
{
	return vncPasswordSetting_;
}

bool DescribeInstancePasswordsSettingResult::getInstancePasswordSetting()const
{
	return instancePasswordSetting_;
}


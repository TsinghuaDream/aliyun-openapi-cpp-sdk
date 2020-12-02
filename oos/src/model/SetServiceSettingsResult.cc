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

#include <alibabacloud/oos/model/SetServiceSettingsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Oos;
using namespace AlibabaCloud::Oos::Model;

SetServiceSettingsResult::SetServiceSettingsResult() :
	ServiceResult()
{}

SetServiceSettingsResult::SetServiceSettingsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

SetServiceSettingsResult::~SetServiceSettingsResult()
{}

void SetServiceSettingsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allServiceSettingsNode = value["ServiceSettings"]["ServiceSetting"];
	for (auto valueServiceSettingsServiceSetting : allServiceSettingsNode)
	{
		ServiceSetting serviceSettingsObject;
		if(!valueServiceSettingsServiceSetting["DeliveryOssEnabled"].isNull())
			serviceSettingsObject.deliveryOssEnabled = valueServiceSettingsServiceSetting["DeliveryOssEnabled"].asString() == "true";
		if(!valueServiceSettingsServiceSetting["DeliveryOssBucketName"].isNull())
			serviceSettingsObject.deliveryOssBucketName = valueServiceSettingsServiceSetting["DeliveryOssBucketName"].asString();
		if(!valueServiceSettingsServiceSetting["DeliveryOssKeyPrefix"].isNull())
			serviceSettingsObject.deliveryOssKeyPrefix = valueServiceSettingsServiceSetting["DeliveryOssKeyPrefix"].asString();
		if(!valueServiceSettingsServiceSetting["DeliverySlsEnabled"].isNull())
			serviceSettingsObject.deliverySlsEnabled = valueServiceSettingsServiceSetting["DeliverySlsEnabled"].asString() == "true";
		if(!valueServiceSettingsServiceSetting["DeliverySlsProjectName"].isNull())
			serviceSettingsObject.deliverySlsProjectName = valueServiceSettingsServiceSetting["DeliverySlsProjectName"].asString();
		serviceSettings_.push_back(serviceSettingsObject);
	}

}

std::vector<SetServiceSettingsResult::ServiceSetting> SetServiceSettingsResult::getServiceSettings()const
{
	return serviceSettings_;
}


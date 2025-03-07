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

#include <alibabacloud/mse/model/PullServicesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Mse;
using namespace AlibabaCloud::Mse::Model;

PullServicesResult::PullServicesResult() :
	ServiceResult()
{}

PullServicesResult::PullServicesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

PullServicesResult::~PullServicesResult()
{}

void PullServicesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["PullServices"];
	for (auto valueDataPullServices : allDataNode)
	{
		PullServices dataObject;
		if(!valueDataPullServices["Namespace"].isNull())
			dataObject._namespace = valueDataPullServices["Namespace"].asString();
		if(!valueDataPullServices["GroupName"].isNull())
			dataObject.groupName = valueDataPullServices["GroupName"].asString();
		auto allServicesNode = valueDataPullServices["Services"]["ServicesItem"];
		for (auto valueDataPullServicesServicesServicesItem : allServicesNode)
		{
			PullServices::ServicesItem servicesObject;
			if(!valueDataPullServicesServicesServicesItem["Name"].isNull())
				servicesObject.name = valueDataPullServicesServicesServicesItem["Name"].asString();
			if(!valueDataPullServicesServicesServicesItem["Namespace"].isNull())
				servicesObject._namespace = valueDataPullServicesServicesServicesItem["Namespace"].asString();
			if(!valueDataPullServicesServicesServicesItem["GroupName"].isNull())
				servicesObject.groupName = valueDataPullServicesServicesServicesItem["GroupName"].asString();
			if(!valueDataPullServicesServicesServicesItem["SourceId"].isNull())
				servicesObject.sourceId = valueDataPullServicesServicesServicesItem["SourceId"].asString();
			if(!valueDataPullServicesServicesServicesItem["SourceType"].isNull())
				servicesObject.sourceType = valueDataPullServicesServicesServicesItem["SourceType"].asString();
			dataObject.services.push_back(servicesObject);
		}
		data_.push_back(dataObject);
	}
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string PullServicesResult::getMessage()const
{
	return message_;
}

int PullServicesResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

std::vector<PullServicesResult::PullServices> PullServicesResult::getData()const
{
	return data_;
}

int PullServicesResult::getCode()const
{
	return code_;
}

bool PullServicesResult::getSuccess()const
{
	return success_;
}


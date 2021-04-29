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

#include <alibabacloud/smartag/model/DescribeSagWan4GResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Smartag;
using namespace AlibabaCloud::Smartag::Model;

DescribeSagWan4GResult::DescribeSagWan4GResult() :
	ServiceResult()
{}

DescribeSagWan4GResult::DescribeSagWan4GResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeSagWan4GResult::~DescribeSagWan4GResult()
{}

void DescribeSagWan4GResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["Status"].isNull())
		status_ = value["Status"].asString();
	if(!value["TrafficState"].isNull())
		trafficState_ = value["TrafficState"].asString();
	if(!value["Priority"].isNull())
		priority_ = std::stoi(value["Priority"].asString());
	if(!value["Ip"].isNull())
		ip_ = value["Ip"].asString();
	if(!value["Mac"].isNull())
		mac_ = value["Mac"].asString();
	if(!value["Strength"].isNull())
		strength_ = value["Strength"].asString();

}

std::string DescribeSagWan4GResult::getStatus()const
{
	return status_;
}

std::string DescribeSagWan4GResult::getTrafficState()const
{
	return trafficState_;
}

int DescribeSagWan4GResult::getPriority()const
{
	return priority_;
}

std::string DescribeSagWan4GResult::getIp()const
{
	return ip_;
}

std::string DescribeSagWan4GResult::getMac()const
{
	return mac_;
}

std::string DescribeSagWan4GResult::getStrength()const
{
	return strength_;
}


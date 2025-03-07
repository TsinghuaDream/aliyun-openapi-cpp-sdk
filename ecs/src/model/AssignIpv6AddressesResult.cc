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

#include <alibabacloud/ecs/model/AssignIpv6AddressesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ecs;
using namespace AlibabaCloud::Ecs::Model;

AssignIpv6AddressesResult::AssignIpv6AddressesResult() :
	ServiceResult()
{}

AssignIpv6AddressesResult::AssignIpv6AddressesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

AssignIpv6AddressesResult::~AssignIpv6AddressesResult()
{}

void AssignIpv6AddressesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allIpv6Sets = value["Ipv6Sets"]["Ipv6Address"];
	for (const auto &item : allIpv6Sets)
		ipv6Sets_.push_back(item.asString());
	if(!value["NetworkInterfaceId"].isNull())
		networkInterfaceId_ = value["NetworkInterfaceId"].asString();

}

std::vector<std::string> AssignIpv6AddressesResult::getIpv6Sets()const
{
	return ipv6Sets_;
}

std::string AssignIpv6AddressesResult::getNetworkInterfaceId()const
{
	return networkInterfaceId_;
}


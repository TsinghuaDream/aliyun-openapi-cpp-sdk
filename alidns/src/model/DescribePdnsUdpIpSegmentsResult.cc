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

#include <alibabacloud/alidns/model/DescribePdnsUdpIpSegmentsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Alidns;
using namespace AlibabaCloud::Alidns::Model;

DescribePdnsUdpIpSegmentsResult::DescribePdnsUdpIpSegmentsResult() :
	ServiceResult()
{}

DescribePdnsUdpIpSegmentsResult::DescribePdnsUdpIpSegmentsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribePdnsUdpIpSegmentsResult::~DescribePdnsUdpIpSegmentsResult()
{}

void DescribePdnsUdpIpSegmentsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allIpSegmentsNode = value["IpSegments"]["IpSegment"];
	for (auto valueIpSegmentsIpSegment : allIpSegmentsNode)
	{
		IpSegment ipSegmentsObject;
		if(!valueIpSegmentsIpSegment["UpdateDate"].isNull())
			ipSegmentsObject.updateDate = valueIpSegmentsIpSegment["UpdateDate"].asString();
		if(!valueIpSegmentsIpSegment["State"].isNull())
			ipSegmentsObject.state = valueIpSegmentsIpSegment["State"].asString();
		if(!valueIpSegmentsIpSegment["Ip"].isNull())
			ipSegmentsObject.ip = valueIpSegmentsIpSegment["Ip"].asString();
		if(!valueIpSegmentsIpSegment["Mask"].isNull())
			ipSegmentsObject.mask = std::stol(valueIpSegmentsIpSegment["Mask"].asString());
		if(!valueIpSegmentsIpSegment["CreateDate"].isNull())
			ipSegmentsObject.createDate = valueIpSegmentsIpSegment["CreateDate"].asString();
		if(!valueIpSegmentsIpSegment["Name"].isNull())
			ipSegmentsObject.name = valueIpSegmentsIpSegment["Name"].asString();
		ipSegments_.push_back(ipSegmentsObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stol(value["TotalCount"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stol(value["PageSize"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stol(value["PageNumber"].asString());

}

long DescribePdnsUdpIpSegmentsResult::getTotalCount()const
{
	return totalCount_;
}

long DescribePdnsUdpIpSegmentsResult::getPageSize()const
{
	return pageSize_;
}

long DescribePdnsUdpIpSegmentsResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<DescribePdnsUdpIpSegmentsResult::IpSegment> DescribePdnsUdpIpSegmentsResult::getIpSegments()const
{
	return ipSegments_;
}


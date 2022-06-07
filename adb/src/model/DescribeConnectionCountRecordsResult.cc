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

#include <alibabacloud/adb/model/DescribeConnectionCountRecordsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Adb;
using namespace AlibabaCloud::Adb::Model;

DescribeConnectionCountRecordsResult::DescribeConnectionCountRecordsResult() :
	ServiceResult()
{}

DescribeConnectionCountRecordsResult::DescribeConnectionCountRecordsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeConnectionCountRecordsResult::~DescribeConnectionCountRecordsResult()
{}

void DescribeConnectionCountRecordsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allAccessIpRecordsNode = value["AccessIpRecords"]["AccessIps"];
	for (auto valueAccessIpRecordsAccessIps : allAccessIpRecordsNode)
	{
		AccessIps accessIpRecordsObject;
		if(!valueAccessIpRecordsAccessIps["AccessIp"].isNull())
			accessIpRecordsObject.accessIp = valueAccessIpRecordsAccessIps["AccessIp"].asString();
		if(!valueAccessIpRecordsAccessIps["Count"].isNull())
			accessIpRecordsObject.count = std::stol(valueAccessIpRecordsAccessIps["Count"].asString());
		accessIpRecords_.push_back(accessIpRecordsObject);
	}
	auto allUserRecordsNode = value["UserRecords"]["Users"];
	for (auto valueUserRecordsUsers : allUserRecordsNode)
	{
		Users userRecordsObject;
		if(!valueUserRecordsUsers["User"].isNull())
			userRecordsObject.user = valueUserRecordsUsers["User"].asString();
		if(!valueUserRecordsUsers["Count"].isNull())
			userRecordsObject.count = std::stol(valueUserRecordsUsers["Count"].asString());
		userRecords_.push_back(userRecordsObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = value["TotalCount"].asString();
	if(!value["DBClusterId"].isNull())
		dBClusterId_ = value["DBClusterId"].asString();

}

std::string DescribeConnectionCountRecordsResult::getTotalCount()const
{
	return totalCount_;
}

std::vector<DescribeConnectionCountRecordsResult::Users> DescribeConnectionCountRecordsResult::getUserRecords()const
{
	return userRecords_;
}

std::string DescribeConnectionCountRecordsResult::getDBClusterId()const
{
	return dBClusterId_;
}

std::vector<DescribeConnectionCountRecordsResult::AccessIps> DescribeConnectionCountRecordsResult::getAccessIpRecords()const
{
	return accessIpRecords_;
}


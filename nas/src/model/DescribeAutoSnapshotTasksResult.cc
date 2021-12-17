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

#include <alibabacloud/nas/model/DescribeAutoSnapshotTasksResult.h>
#include <json/json.h>

using namespace AlibabaCloud::NAS;
using namespace AlibabaCloud::NAS::Model;

DescribeAutoSnapshotTasksResult::DescribeAutoSnapshotTasksResult() :
	ServiceResult()
{}

DescribeAutoSnapshotTasksResult::DescribeAutoSnapshotTasksResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeAutoSnapshotTasksResult::~DescribeAutoSnapshotTasksResult()
{}

void DescribeAutoSnapshotTasksResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allAutoSnapshotTasksNode = value["AutoSnapshotTasks"]["AutoSnapshotTask"];
	for (auto valueAutoSnapshotTasksAutoSnapshotTask : allAutoSnapshotTasksNode)
	{
		AutoSnapshotTask autoSnapshotTasksObject;
		if(!valueAutoSnapshotTasksAutoSnapshotTask["SourceFileSystemId"].isNull())
			autoSnapshotTasksObject.sourceFileSystemId = valueAutoSnapshotTasksAutoSnapshotTask["SourceFileSystemId"].asString();
		if(!valueAutoSnapshotTasksAutoSnapshotTask["AutoSnapshotPolicyId"].isNull())
			autoSnapshotTasksObject.autoSnapshotPolicyId = valueAutoSnapshotTasksAutoSnapshotTask["AutoSnapshotPolicyId"].asString();
		autoSnapshotTasks_.push_back(autoSnapshotTasksObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());

}

int DescribeAutoSnapshotTasksResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeAutoSnapshotTasksResult::getPageSize()const
{
	return pageSize_;
}

int DescribeAutoSnapshotTasksResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<DescribeAutoSnapshotTasksResult::AutoSnapshotTask> DescribeAutoSnapshotTasksResult::getAutoSnapshotTasks()const
{
	return autoSnapshotTasks_;
}


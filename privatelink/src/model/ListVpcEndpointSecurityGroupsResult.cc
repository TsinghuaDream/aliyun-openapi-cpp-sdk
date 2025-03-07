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

#include <alibabacloud/privatelink/model/ListVpcEndpointSecurityGroupsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Privatelink;
using namespace AlibabaCloud::Privatelink::Model;

ListVpcEndpointSecurityGroupsResult::ListVpcEndpointSecurityGroupsResult() :
	ServiceResult()
{}

ListVpcEndpointSecurityGroupsResult::ListVpcEndpointSecurityGroupsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListVpcEndpointSecurityGroupsResult::~ListVpcEndpointSecurityGroupsResult()
{}

void ListVpcEndpointSecurityGroupsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allSecurityGroupsNode = value["SecurityGroups"]["SecurityGroup"];
	for (auto valueSecurityGroupsSecurityGroup : allSecurityGroupsNode)
	{
		SecurityGroup securityGroupsObject;
		if(!valueSecurityGroupsSecurityGroup["SecurityGroupId"].isNull())
			securityGroupsObject.securityGroupId = valueSecurityGroupsSecurityGroup["SecurityGroupId"].asString();
		securityGroups_.push_back(securityGroupsObject);
	}
	if(!value["NextToken"].isNull())
		nextToken_ = value["NextToken"].asString();
	if(!value["MaxResults"].isNull())
		maxResults_ = value["MaxResults"].asString();

}

std::vector<ListVpcEndpointSecurityGroupsResult::SecurityGroup> ListVpcEndpointSecurityGroupsResult::getSecurityGroups()const
{
	return securityGroups_;
}

std::string ListVpcEndpointSecurityGroupsResult::getNextToken()const
{
	return nextToken_;
}

std::string ListVpcEndpointSecurityGroupsResult::getMaxResults()const
{
	return maxResults_;
}

